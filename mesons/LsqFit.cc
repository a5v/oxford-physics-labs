//------------------------------------------------------------------------------
// Class LsqFit
//
// See documentation in the header file
//------------------------------------------------------------------------------

#include "LsqFit.hh"

LsqFit::LsqFit() : trk(), 
  _x(0.0), _y(0.0), _sigx(0.0), _sigy(0.0), _covxy(0.0),
  _ndof(0), _chi2(0.0), _phi(0.0), _sphi(0.0), _cphi(0.0) {}

LsqFit::~LsqFit() {}

bool LsqFit::fit() {

  // How to fit: the fitted vertex (x,y) is a point closest to all the tracks.
  // chi^2 is a sum of distances from that point to all the tracks divided by 
  // their errors squared:
  // 
  // chi^2 = sum (d0[i] + x*sin(phi[i]) - y*cos(phi[i]))^2 / sigmaD0[i]^2
  // 
  // Minimizing chi^2: 
  //
  // d chi^2 / dx = 0 ; d chi^2 / dy = 0  ==>  X = H^(-1) * Y
  //
  // where X - column of (x,y) and matrix H and coulmn Y are calculated in 
  // the code.

  double Hxx = 0.0;
  double Hyy = 0.0;
  double Hxy = 0.0;
  double Yx  = 0.0;
  double Yy  = 0.0;
  for (std::vector<track>::const_iterator t = trk.begin();
       t != trk.end(); ++t) {
    if(t->covd0() == 0) {std::cerr << "LsqFit --ERROR-- covd0 == 0.0" << std::endl; return false;}
    Hxx += (t->sinphi() * t->sinphi()) / t->covd0();
    Hyy += (t->cosphi() * t->cosphi()) / t->covd0();
    Hxy -= (t->sinphi() * t->cosphi()) / t->covd0();
    Yx  -= (t->d0()     * t->sinphi()) / t->covd0();
    Yy  += (t->d0()     * t->cosphi()) / t->covd0();
  }

  double det = Hxx * Hyy - Hxy * Hxy;
  if(det <= 0.0) { std::cerr << "LsqFit --ERROR-- det <= 0.0" << std::endl; return false; }
  double Hixx = Hyy / det;
  double Hiyy = Hxx / det;
  double Hixy = - Hxy / det;

  _x = Yx * Hixx + Yy * Hixy;
  _y = Yx * Hixy + Yy * Hiyy;

  _sigx = sqrt(Hixx);
  _sigy = sqrt(Hiyy);
  _covxy = Hixy;

  _ndof = trk.size() - 2;

  //
  // calculate phi of vertex (because it's used a lot in later calculations)
  //
  _chi2 = 0.0;
  double px = 0.0;
  double py = 0.0;
  for (std::vector<track>::iterator t = trk.begin();
       t != trk.end(); ++t) {
    px += fabs(t->pt()) * t->cosphi();
    py += fabs(t->pt()) * t->sinphi();
    double d = t->d0() - ( -1 * t->sinphi() * _x + t->cosphi() * _y);
    t->chi2(d * d / t->covd0());
    _chi2 += t->chi2();
  }
  _phi = atan2(py,px);
  double p = sqrt(px*px + py*py);
  if(p == 0.0) { std::cerr << "LsqFit --ERROR-- p == 0.0" << std::endl; return false; }
  _sphi = py / p;
  _cphi = px / p;

  return true;
}

void LsqFit::print() const {
  std::cout << "Fitting tracks:" << std::endl;
  for (std::vector<track>::const_iterator t = trk.begin();
       t != trk.end(); ++t) {
    (*t).print();
  }
  std::cout << "Obtained: x = " << _x << " +- " << _sigx 
	    << ", y = " << _y << " +- " << _sigy 
	    << ",  covxy = " << _covxy << ", phi = " << _phi 
	    << " chi2 = " << _chi2 << "/" << _ndof << " dof"
	    << std::endl;  
}

double LsqFit::d0() const { return (-1 * _x * _sphi + _y * _cphi); }

double LsqFit::sigd0() const {
  double s = _sphi * _sphi * _sigx * _sigx +
             _cphi * _cphi * _sigy * _sigy -
               2.0 * _sphi * _cphi * _covxy;
  if (s > 0.0) s = sqrt(s);
  return s;
}

double LsqFit::lxy() const { return (_x * _cphi + _y * _sphi); }

double LsqFit::siglxy() const {
  double s = _cphi * _cphi * _sigx * _sigx +
             _sphi * _sphi * _sigy * _sigy +
               2.0 * _sphi * _cphi * _covxy;
  if (s > 0.0) s = sqrt(s);
  return s;
}

double LsqFit::d0(double x, double y) const {
  return (-1 * (_x - x) * _sphi + (_y - y) * _cphi);
}

double LsqFit::sigd0(double sigx, double sigy, double covxy) const {
  double s = _sphi * _sphi * (_sigx * _sigx + sigx * sigx) +
             _cphi * _cphi * (_sigy * _sigy + sigy * sigy) -
               2.0 * _sphi * _cphi * (_covxy + covxy);
  if (s > 0.0) s = sqrt(s);
  return s;
}

double LsqFit::lxy(double x, double y) const {
  return ((_x - x) * _cphi + (_y - y) * _sphi);
}

double LsqFit::siglxy(double sigx, double sigy, double covxy) const {
  double s = _cphi * _cphi * (_sigx * _sigx + sigx * sigx) +
             _sphi * _sphi * (_sigy * _sigy + sigy * sigy) +
               2.0 * _sphi * _cphi * (_covxy + covxy);
  if (s > 0.0) s = sqrt(s);
  return s;
}
