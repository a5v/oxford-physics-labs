Double_t gausbkg(Double_t *x, Double_t *par)
{
  Double_t gausbkg = par[0]*exp(-(x[0]-par[1])*(x[0]-par[1])/(2*par[2]*par[2]))+par[3];
  return gausbkg;
}
