#ifndef __LSQFIT_HH__
#define __LSQFIT_HH__
// --------------------------------------------------------------------------//
// Description: Class LsqFit
// ------------
//
//  This class has been created by Jeff Tseng to perform fast track fitting 
//
//-----------------------------------------------------------------------------

#include <math.h>
#include <vector>
#include <iostream>

class LsqFit {

  public:

    LsqFit();
    ~LsqFit();

    void clear() { trk.clear(); }
    int  ntracks() { return trk.size(); }
    void push(double phi, double d0, double sigd0, double pt) {
      trk.push_back(track(phi, d0, sigd0, pt));
    }
    void pop() { trk.pop_back(); }
    bool fit();
    void print() const;

    //
    // fit results
    //
    double x() const { return _x; }
    double y() const { return _y; }
    double sigx() const { return _sigx; }   // standard deviation
    double sigy() const { return _sigy; }   // standard deviation
    double covxy() const { return _covxy; } // covariance
    int ndof() const { return _ndof; }
    double chi2() const { return _chi2; }
    double track_chi2(int index) const { return trk[index].chi2(); }
    double phi() const { return _phi; }

    //
    // impact parameter and flight distance with respect to origin
    //
    double d0() const;
    double sigd0() const;
    double lxy() const;
    double siglxy() const;

    //
    // impact parameter and flight distance with respect to a vertex
    // (remember that sigx and sigy are stddev's, but covxy is a covariance)
    //
    double d0(double x, double y) const;
    double sigd0(double sigx, double sigy, double covxy) const;
    double lxy(double x, double y) const;
    double siglxy(double sigx, double sigy, double covxy) const;

  private:

    class track {
      private:
        double _phi;
        double _d0;
        double _covd0;
        double _sphi;
        double _cphi;
        double _pt;
        double _chi2;
      public:
        track(double phi, double d0, double sigd0, double pt) :
	  // Both d0 and sigd0 must be in the same units
          _phi(phi), _d0(d0), _covd0(sigd0*sigd0), 
          _sphi(sin(phi)), _cphi(cos(phi)), _pt(pt), _chi2(0.0) {}
        track(const track& old) :
          _phi(old._phi), _d0(old._d0), _covd0(old._covd0),
          _sphi(old._sphi), _cphi(old._cphi), _pt(old._pt), _chi2(old._chi2) {}
        ~track() {}
        double phi() const { return _phi; }
        double d0() const { return _d0; }
        double covd0() const { return _covd0; } 
        double sinphi() const { return _sphi; }
        double cosphi() const { return _cphi; }
        double pt() const { return _pt; }
        double chi2() const { return _chi2; }
        void chi2(double __chi2) { _chi2 = __chi2; }
        void print() const { 
	 std::cout << " pt = " << _pt << ", d0 = " << _d0 << " +- " 
		   << sqrt(_covd0) << " cm, phi = " << _phi << std::endl;
	}
    };

    std::vector<track> trk;

    double _x;
    double _y;
    double _sigx;
    double _sigy;
    double _covxy;
    int _ndof;
    double _chi2;

    double _phi;
    double _sphi;
    double _cphi;

};

#endif


