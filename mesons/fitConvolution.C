 /// \file
 /// \ingroup tutorial_fit
 /// \notebook -js
 /// Tutorial for convolution of two functions
 ///
 /// \macro_image
 /// \macro_output
 /// \macro_code
 ///
 /// \author Aurelie Flandi
 
 #include <stdio.h>
 #include <TMath.h>
 #include <TCanvas.h>
 #include <iostream>
 #include <TROOT.h>
 #include <TChain.h>
 #include <TObject.h>
 #include <TRandom.h>
 #include <TFile.h>
 #include <math.h>
 #include <TF1Convolution.h>
 #include <TF1.h>
 #include <TH1F.h>
 #include <TGraph.h>
 #include <TStopwatch.h>
 
 using namespace std;
 
 void fitConvolution()
 {
    TF1Convolution *f_conv = new TF1Convolution("expo","gaus",-1,6,true);
    f_conv->SetRange(-1.,6.);
    f_conv->SetNofPointsFFT(1000);
    TF1   *f = new TF1("f",*f_conv, 0., 5., f_conv->GetNpar());
    f->SetParameters(1.,-0.3,0.,1.);
 
    //fit
    new TCanvas("c","c",800,1000);
    hbtau -> Fit("f");
    hbtau->Draw();
 
 }
