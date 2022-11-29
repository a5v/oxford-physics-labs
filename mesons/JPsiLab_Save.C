#define JPsiLab_cxx
#include "JPsiLab.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TMath.h>
#include <iostream>
// #include "LsqFit.hh"
// #include "LsqFit.cc"

void JPsiLab::Loop()
{
  //---
  //--- The next section contains details of creating the output tree
  //---
  TFile *f2 = new TFile("jpm.root", "RECREATE");  //make a new root file
  f2->cd();
  TTree *output = new TTree("output","calculated values");  //make a new tree inside the file

  struct outvar {         //here we are creating data structures of new variables.
    Float_t jpmass;       //having an existing structure makes it MUCH simpler to create new branches
  };                      //and leaves in the tree.  the variables will be filled and written to the
  outvar out;             //tree later, but for now we just create space in memory for them.
  struct vtxvar {
    Float_t xintersect;
    Float_t yintersect;
    Float_t primx;
    Float_t primy;
  };
  vtxvar outvtx;
 
  //make new branches and leaves in the "output" tree:
  TBranch *jpmass = output->Branch("jpmass",&out.jpmass,"jpmass/F"); 
  TBranch *vertex = output->Branch("vertex",&outvtx.xintersect,"xintersect/F:yintersect:primx:primy");
  if (jpmass) ;    // This just avoids a 'variable not used' message
  if (vertex) ;    // so does this

  //---
  //--- Create new histograms here, by copy-pasting the example
  //--- below and changing the jpm variable to something unique
  //---
  TH1F *hMOMpt = new TH1F("hMOMpt", "Transverse momentum of muons",100,0.0,5.20);
  TH1F *jpm = new TH1F("jpm", "Dimuon Invariant Mass",100,3.00,3.20); //make a new histogram too

  //now retrieve the input data and start looping over entries:
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Int_t nrunnew = 1;
   Int_t nrunold = 0;

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      if (nrunnew != nrunold) {  //this output helps you be sure your code is running over long intervals!
	std::cout<<"run number ="<<GLB_nrun<<"  entry number ="<<jentry<<std::endl; 
	nrunold = nrunnew;
      }
      nrunnew = Int_t(jentry/100000);

      if (MU_nMuon<2.0) continue; //do not bother if fewer than two muons in the event

      Float_t primarysvxx = VERTEX_vtx_svx_beamx+ZVTX_zvtx_zPos[0]*VERTEX_vtx_svx_slopex; //find primary vertex
      Float_t primarysvxy = VERTEX_vtx_svx_beamy+ZVTX_zvtx_zPos[0]*VERTEX_vtx_svx_slopey;  
      outvtx.primx = primarysvxx;  //store the primary vtx coordinates in leaves
      outvtx.primy = primarysvxy;

      for (Int_t nMup=0;nMup<MU_nMuon;nMup++){ //muon+ loop
        Int_t trkp = MU_mu_trkIndex[nMup];    //find track corresponding to the muon
	if (trkp>299 || trkp<0) continue;    //eliminating unphysical track numbers
        Int_t mtypep = 0;  //classify muons by detector
        if (MU_mu_fidBMU[nMup]) continue;
        if (MU_mu_fidCMX[nMup]) mtypep = 2;
        if (MU_mu_fidCMU[nMup]) mtypep = 3;
        if (MU_mu_fidCMP[nMup]) mtypep = 5;
        if (MU_mu_fidCMU[nMup]&& MU_mu_fidCMX[nMup]) mtypep = 4;
        if (MU_mu_fidCMU[nMup]&& MU_mu_fidCMP[nMup]) mtypep = 6;
        if (mtypep == 0) continue;
        if (mtypep < 5) continue;  //use only muons that made it to the most shielded detector
        if (TRACK_trk_nonbc_nsvxHits[trkp] < 1) continue;  //SVX tracks only

        double costh=-1.02;  //Invalid in case p=0
        double p = TMath::Sqrt(MOM_pt[trkp]*MOM_pt[trkp] + MOM_pz[trkp]*MOM_pz[trkp]);
        if (p > 0.) costh=MOM_pz[trkp]/p;

	//---
        //--- This is the place to insert histograms on single-muon quantities
        //---
        hMOMpt->Fill(MOM_pt[trkp]);  //Plot the muon transverse momentum

        if (TRACK_trk_nonbc_curv[trkp]<0) continue; //positive muon

        for (Int_t nMum=0;nMum<MU_nMuon;nMum++){ //muon- loop
          Int_t trkm = MU_mu_trkIndex[nMum];
	  if (trkm>299 || trkm<0) continue;
          if (trkp == trkm) continue;//probably not needed
          Int_t mtypem = 0;
          if (MU_mu_fidBMU[nMum]) continue;
          if (MU_mu_fidCMX[nMum]) mtypem = 2;
          if (MU_mu_fidCMU[nMum]) mtypem = 3;
          if (MU_mu_fidCMP[nMum]) mtypem = 5;
          if (MU_mu_fidCMU[nMum]&& MU_mu_fidCMX[nMum]) mtypem = 4;
          if (MU_mu_fidCMU[nMum]&& MU_mu_fidCMP[nMum]) mtypem = 6;
          if (mtypem == 0) continue;
          if (mtypem <5) continue;
          if (TRACK_trk_nonbc_nsvxHits[trkm] < 1) continue;
          if (TRACK_trk_nonbc_curv[trkm]>0) continue; //negative muon

          //---
          //--- This is the place to insert histograms on paired muon quantities
          //--- and calculate variables for the output tree
          //---

	  Float_t psimass = 0;  //calculate mass of jpsi candidate.. obviously change this code!
	  if (psimass>3.8 || psimass<2.9) continue;  //loose jpsi mass cut
	  out.jpmass=psimass;  //store calculated values in leaves

	  outvtx.xintersect=0;   //change these to calculate muon track intersection
	  outvtx.yintersect=0;

	  jpm->Fill(psimass); //fill the histogram with mass values
	  output->Fill();  //fill the tree with the calculated leaf values
        } //muon- loop
      }// muon+ loop

   }
   f2->cd();
   output->Write();  //once the tree has been fully filled, write to file

   //---
   //--- Insert Write() statements for each of the histograms you add here
   //---
   jpm->Write();     //write mass plot histogram
   hMOMpt->Write(); //write pt histogram

   f2->Close();      //close the file
   std::cout<<"loop finished"<<std::endl;
}

