//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jul 12 10:52:23 2011 by ROOT version 5.26/00
// from TTree prod/prod
// found on file: jpmm0d_stripped.root
//////////////////////////////////////////////////////////

#ifndef JPsiLab_h
#define JPsiLab_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

class JPsiLab {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           COSMICRES_nCosmicRes;
   Float_t         COSMICRES_cosres_best_diCosmicDeltaD[10][192];   //[nCosmicRes]
   Float_t         COSMICRES_cosres_best_diCosmicDeltaY[10][192];   //[nCosmicRes]
   Float_t         COSMICRES_cosres_best_diCosmicHitD[10][192];   //[nCosmicRes]
   Float_t         COSMICRES_cosres_best_diCosmicHitT[10][192];   //[nCosmicRes]
   Float_t         COSMICRES_cosres_best_diCosmicHitWidth[10][192];   //[nCosmicRes]
   Float_t         COSMICRES_cosres_best_diCosmicSinAspect[10][192];   //[nCosmicRes]
   Float_t         COSMICRES_cosres_best_diCosmicTrackY[10][192];   //[nCosmicRes]
   Short_t         COSMICRES_cosres_AssCosmic[10];   //[nCosmicRes]
   Short_t         COSMICRES_cosres_best_diCosmicCellNum[10][192];   //[nCosmicRes]
   UChar_t         COSMICRES_cosres_exceededLimit;
   Int_t           COTNBC_ncotnbc;
   Float_t         COTNBC_cotnbc_chi2[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_constrainedt0[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_cotTheta[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_covCuD0[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_covCuLambda[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_covCuPhi0[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_covCuZ0[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_covD0Lambda[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_covD0Phi0[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_covD0Z0[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_covPhi0Lambda[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_covPhi0Z0[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_covZ0Lambda[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_curv[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_d0[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_phi[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_sigCu2[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_sigD02[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_sigLambda2[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_sigPhi02[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_sigZ02[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_t0[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_t0err[200];   //[ncotnbc]
   Float_t         COTNBC_cotnbc_z0[200];   //[ncotnbc]
   Short_t         COTNBC_cotnbc_assTrk[200];   //[ncotnbc]
   Short_t         COTNBC_cotnbc_seedSL[200];   //[ncotnbc]
   UChar_t         COTNBC_cotnbc_exceededLimit;
   Int_t           GLB_CdfSoftNtupleVersion;
   Int_t           GLB_CdfSoftProdVersion;
   Float_t         GLB_NtupleVersion;
   Int_t           GLB_cosmic_bitword;
   Int_t           GLB_cosmic_hasAcollinearTracks;
   Int_t           GLB_cosmic_hasCosmicRay;
   Int_t           GLB_cosmic_hasLargeDPhiMuonStub;
   Int_t           GLB_cosmic_hasLowEmorQFrac;
   Int_t           GLB_cosmic_hasOOTCaloE;
   Int_t           GLB_l3tagset;
   Int_t           GLB_nev;
   Int_t           GLB_nrun;
   Int_t           GLB_nsec;
   Int_t           GLB_path_bits[8];
   Int_t           GLB_totNumHitsSL[8];
   Short_t         GLB_evtDay;
   Short_t         GLB_evtHour;
   Short_t         GLB_evtMin;
   Short_t         GLB_evtMonth;
   Short_t         GLB_evtSec;
   Short_t         GLB_evtYear;
   UChar_t         GLB_L1_CEM4_PT4;
   UChar_t         GLB_L1_CEM4_PT4_AND_CMX1pt5_PT2_PS1;
   UChar_t         GLB_L1_CEM8_PT8;
   UChar_t         GLB_L1_CMU0_PT4_PS0;
   UChar_t         GLB_L1_CMU1pt5_PT1pt5_AND_CMX1pt5_PT2_PS1;
   UChar_t         GLB_L1_CMUP6_PT4;
   UChar_t         GLB_L1_CMX6_PT8_CSX_PS1;
   UChar_t         GLB_L1_CMX6_PT8_PS1;
   UChar_t         GLB_L1_EM8;
   UChar_t         GLB_L1_EM8_AND_CMU1pt5_PT1pt5;
   UChar_t         GLB_L1_EM8_AND_CMX1pt5_PT2;
   UChar_t         GLB_L1_EM8_AND_MET15;
   UChar_t         GLB_L1_GAP_EAST_AND_JET5;
   UChar_t         GLB_L1_GAP_EAST_AND_JET5_AND_RP;
   UChar_t         GLB_L1_GAP_WEST_AND_JET5;
   UChar_t         GLB_L1_JET10;
   UChar_t         GLB_L1_JET10_AND_SUMET90_AND_CLC;
   UChar_t         GLB_L1_JET5_PS20;
   UChar_t         GLB_L1_MB_CLC_PS10K;
   UChar_t         GLB_L1_MB_XING_PS1M;
   UChar_t         GLB_L1_MET25;
   UChar_t         GLB_L1_RP_AND_JET5;
   UChar_t         GLB_L1_RP_PS3K;
   UChar_t         GLB_L1_SEVEN_TRK2_PS1;
   UChar_t         GLB_L1_TAU0_PT4_PS0;
   UChar_t         GLB_L1_TRK3_PS250;
   UChar_t         GLB_L1_TRK4_PS0;
   UChar_t         GLB_L1_TRK7_PS250;
   UChar_t         GLB_L1_TWO_CEM2_PT2_OPPQ;
   UChar_t         GLB_L1_TWO_CEM4_PT4;
   UChar_t         GLB_L1_TWO_CMU1pt5_PT1pt5;
   UChar_t         GLB_L1_TWO_GAP_AND_JET5;
   UChar_t         GLB_L1_TWO_TRK10_DPHI20_PS50;
   UChar_t         GLB_L1_TWO_TRK2_AND_TWO_CJET5;
   UChar_t         GLB_L1_TWO_TRK2_OPPQ_DPHI135_SUMPT5pt5_PS1;
   UChar_t         GLB_L1_TWO_TRK2_PS200;
   UChar_t         GLB_L1_TWO_TRK4_DPHI150;
   UChar_t         GLB_L1_TWO_TRK6_DPHI30_AND_TWO_CJET5;
   UChar_t         GLB_L2_AUTO_L1_CMU0_PT4;
   UChar_t         GLB_L2_AUTO_L1_CMU1pt5_PT1pt5_AND_CMX1pt5_PT2;
   UChar_t         GLB_L2_AUTO_L1_CMUP6_PT4;
   UChar_t         GLB_L2_AUTO_L1_CMX6_PT8;
   UChar_t         GLB_L2_AUTO_L1_CMX6_PT8_CSX;
   UChar_t         GLB_L2_AUTO_L1_GAP_EAST_AND_JET5_AND_RP;
   UChar_t         GLB_L2_AUTO_L1_MB_XING;
   UChar_t         GLB_L2_AUTO_L1_MET25;
   UChar_t         GLB_L2_AUTO_L1_RP;
   UChar_t         GLB_L2_AUTO_L1_TAU0_PT4;
   UChar_t         GLB_L2_AUTO_L1_TRK4;
   UChar_t         GLB_L2_AUTO_L1_TWO_CMU1pt5_PT1pt5;
   UChar_t         GLB_L2_AUTO_L1_TWO_TRK10_DPHI20;
   UChar_t         GLB_L2_CEM12_ISO;
   UChar_t         GLB_L2_CEM16_L1_MET15;
   UChar_t         GLB_L2_CEM16_PT8;
   UChar_t         GLB_L2_CEM4_PT4_CES2_AND_CMUP6_PT4;
   UChar_t         GLB_L2_CEM4_PT4_CES2_AND_CMX1pt5_PT2;
   UChar_t         GLB_L2_CEM4_PT4_CES2_PS20;
   UChar_t         GLB_L2_CEM8_PT8_CES2;
   UChar_t         GLB_L2_CMUP6_PT8;
   UChar_t         GLB_L2_EM10_ISO_PS1600;
   UChar_t         GLB_L2_EM10_PS10000;
   UChar_t         GLB_L2_EM12_ISO_AND_CMU1pt5_PT1pt5;
   UChar_t         GLB_L2_EM12_ISO_AND_CMX1pt5_PT2;
   UChar_t         GLB_L2_EM18_ISO;
   UChar_t         GLB_L2_EM18_PS200;
   UChar_t         GLB_L2_EM40;
   UChar_t         GLB_L2_EM70;
   UChar_t         GLB_L2_FOUR_JET15_SUMET125;
   UChar_t         GLB_L2_JET15_AND_GAP_EAST_PS50;
   UChar_t         GLB_L2_JET15_AND_GAP_WEST_PS50;
   UChar_t         GLB_L2_JET15_AND_RP_PS1;
   UChar_t         GLB_L2_JET15_L1_MET25;
   UChar_t         GLB_L2_JET15_PS12;
   UChar_t         GLB_L2_JET40;
   UChar_t         GLB_L2_JET40_AND_GAP_EAST;
   UChar_t         GLB_L2_JET40_AND_GAP_WEST;
   UChar_t         GLB_L2_JET40_AND_RP;
   UChar_t         GLB_L2_JET60_PS8;
   UChar_t         GLB_L2_JET90;
   UChar_t         GLB_L2_PEM20_L1_EM8_AND_MET15;
   UChar_t         GLB_L2_PEM20_PS10;
   UChar_t         GLB_L2_PEM8_AND_CMUP6_PT4;
   UChar_t         GLB_L2_PEM8_AND_CMX1pt5_PT2;
   UChar_t         GLB_L2_PEM8_L1_CEM8_PT8;
   UChar_t         GLB_L2_PS100_L1_EM8;
   UChar_t         GLB_L2_PS100_L1_JET10;
   UChar_t         GLB_L2_PS100_L1_JET5;
   UChar_t         GLB_L2_PS100_L1_TWO_CEM2_PT2_OPPQ;
   UChar_t         GLB_L2_PS100_L1_TWO_CEM4_PT4;
   UChar_t         GLB_L2_PS100_L1_TWO_GAP_AND_JET5;
   UChar_t         GLB_L2_PS10K_L1_EM8;
   UChar_t         GLB_L2_PS10K_L1_SEVEN_TRK2;
   UChar_t         GLB_L2_PS10K_L1_TWO_TRK2_OPPQ_DPHI135_SUMPT5pt5;
   UChar_t         GLB_L2_PS10_L1_CEM8_PT8;
   UChar_t         GLB_L2_PS10_L1_CMUP6_PT4;
   UChar_t         GLB_L2_PS10_L1_EM8_AND_CMU1pt5_PT1pt5;
   UChar_t         GLB_L2_PS10_L1_EM8_AND_CMX1pt5_PT2;
   UChar_t         GLB_L2_PS10_L1_EM8_AND_MET15;
   UChar_t         GLB_L2_PS20_L1_RP_AND_JET5;
   UChar_t         GLB_L2_PS2500_L1_EM8;
   UChar_t         GLB_L2_PS500_L1_CEM4_PT4;
   UChar_t         GLB_L2_PS500_L1_GAP_EAST_AND_JET5;
   UChar_t         GLB_L2_PS500_L1_GAP_WEST_AND_JET5;
   UChar_t         GLB_L2_PS500_L1_TWO_TRK2;
   UChar_t         GLB_L2_RL1HZ_L1_JET10;
   UChar_t         GLB_L2_RL1HZ_L1_JET5;
   UChar_t         GLB_L2_RL1HZ_L1_MB_CLC;
   UChar_t         GLB_L2_RL1HZ_L1_TRK3;
   UChar_t         GLB_L2_RL1HZ_L1_TRK7;
   UChar_t         GLB_L2_THREE_EM10;
   UChar_t         GLB_L2_TRK2_D120_L1_CEM4_PT4;
   UChar_t         GLB_L2_TRK2_D120_L1_CMUP6_PT4;
   UChar_t         GLB_L2_TRK8_L1_CMUP6_PT4;
   UChar_t         GLB_L2_TWO_CEM2_PT2_CES1_PS10;
   UChar_t         GLB_L2_TWO_CEM4_PT4_CES2;
   UChar_t         GLB_L2_TWO_EM10_ISO;
   UChar_t         GLB_L2_TWO_EM16;
   UChar_t         GLB_L2_TWO_JET15_L1_TWO_TRK6;
   UChar_t         GLB_L2_TWO_PEM20;
   UChar_t         GLB_L2_TWO_PJET40;
   UChar_t         GLB_L2_TWO_TRK2_D100_AND_L1_TWO_CJET5;
   UChar_t         GLB_L2_TWO_TRK2_D100_L1_JET10_AND_SUMET90;
   UChar_t         GLB_L2_TWO_TRK2_D100_L1_OPPQ_DPHI135_SUMPT5pt5;
   UChar_t         GLB_L2_TWO_TRK2_D100_L1_SEVEN_TRK2;
   UChar_t         GLB_L2_TWO_TRK2_D100_L1_TWO_CEM2_PT2;
   UChar_t         GLB_L2_TWO_TRK2_D100_PS5;
   UChar_t         GLB_L2_TWO_TRK4_D120;
   UChar_t         GLB_L3_AAAAA_ALL_RECO_ELECTRON_1000;
   UChar_t         GLB_L3_BBBAR_TWO_CMUP3;
   UChar_t         GLB_L3_B_CHARM;
   UChar_t         GLB_L3_B_CHARM_L1_SEVEN_TRK2;
   UChar_t         GLB_L3_B_D0;
   UChar_t         GLB_L3_B_D0_L1_SEVEN_TRK2;
   UChar_t         GLB_L3_B_HAD_L3PS150_L2_TWO_TRK2_L1_OPPQ_DPHI135_SUMPT5pt5;
   UChar_t         GLB_L3_B_HAD_L3PS150_L2_TWO_TRK2_L1_SEVEN_TRK2;
   UChar_t         GLB_L3_B_HAD_L3TAG_L1_SEVEN_TRK2;
   UChar_t         GLB_L3_B_HAD_L3TAG_L1_TWO_TRK2;
   UChar_t         GLB_L3_B_HAD_L3TAG_L1_TWO_TRK2_OPPQ_DPHI135_SUMPT5pt5;
   UChar_t         GLB_L3_B_HAD_L3TAG_L2_TWO_TRK2_D100;
   UChar_t         GLB_L3_B_PIPI;
   UChar_t         GLB_L3_B_PIPI_L1_SEVEN_TRK2;
   UChar_t         GLB_L3_B_SEMI_CEM4_TRACK2_D120;
   UChar_t         GLB_L3_B_SEMI_CMUP4_TRACK2_D120;
   UChar_t         GLB_L3_B_SEMI_L3PS20_L2_TRK2_D120_L1_CMUP6_PT4;
   UChar_t         GLB_L3_B_SEMI_L3PS250_L2_TRK2_D120_L1_CEM_4_PT4;
   UChar_t         GLB_L3_CEM4_CMUP4;
   UChar_t         GLB_L3_CEM4_CMX4;
   UChar_t         GLB_L3_CEM8_PEM8;
   UChar_t         GLB_L3_CEM8_PEM8_NO_L2;
   UChar_t         GLB_L3_CMUP4_PEM8;
   UChar_t         GLB_L3_CMUP4_PEM8_NO_L2;
   UChar_t         GLB_L3_CMX4_PEM8;
   UChar_t         GLB_L3_CMX4_PEM8_NO_L2;
   UChar_t         GLB_L3_DIELECTRON_CENTRAL_2_L3PS50;
   UChar_t         GLB_L3_DIELECTRON_CENTRAL_2_NOL2_L3PS50;
   UChar_t         GLB_L3_DIELECTRON_CENTRAL_2_TWO_SVT;
   UChar_t         GLB_L3_DIELECTRON_CENTRAL_4;
   UChar_t         GLB_L3_DIELECTRON_CENTRAL_L1_TWO_CEM4;
   UChar_t         GLB_L3_DIELECTRON_CENTRAL_PS2K_L1_TWO_CEM2_OPPQ;
   UChar_t         GLB_L3_DIFF_GAPE_JET20;
   UChar_t         GLB_L3_DIFF_GAPE_JET50;
   UChar_t         GLB_L3_DIFF_GAPE_ST5;
   UChar_t         GLB_L3_DIFF_GAPW_JET20;
   UChar_t         GLB_L3_DIFF_GAPW_JET50;
   UChar_t         GLB_L3_DIFF_GAPW_ST5;
   UChar_t         GLB_L3_DIFF_GAP_GAP_ST5;
   UChar_t         GLB_L3_DIFF_L3PS20_L2_JET15_AND_GAP_EAST;
   UChar_t         GLB_L3_DIFF_L3PS20_L2_JET15_AND_GAP_WEST;
   UChar_t         GLB_L3_DIFF_RP;
   UChar_t         GLB_L3_DIFF_RP_GAP_ST5;
   UChar_t         GLB_L3_DIFF_RP_JET20;
   UChar_t         GLB_L3_DIFF_RP_JET50;
   UChar_t         GLB_L3_DIFF_RP_ST5;
   UChar_t         GLB_L3_DIMUON_CMUP4_CMX4;
   UChar_t         GLB_L3_DIMUON_CMUPCMUP4;
   UChar_t         GLB_L3_DIMUON_L3PS200_L1_CMU1pt5_PT1pt5_AND_CMX1pt5_PT2;
   UChar_t         GLB_L3_DIMUON_L3PS200_L1_TWO_CMU1pt5_PT1pt5;
   UChar_t         GLB_L3_DIPHOTON_12;
   UChar_t         GLB_L3_DIPHOTON_12_NO_L2;
   UChar_t         GLB_L3_DIPHOTON_18;
   UChar_t         GLB_L3_DIPHOTON_18_NO_L2;
   UChar_t         GLB_L3_DITAU;
   UChar_t         GLB_L3_ELECTRON70_L2_JET;
   UChar_t         GLB_L3_ELECTRON_CENTRAL_18;
   UChar_t         GLB_L3_ELECTRON_CENTRAL_18_L3PS10;
   UChar_t         GLB_L3_ELECTRON_CENTRAL_18_NO_L2;
   UChar_t         GLB_L3_ELECTRON_CENTRAL_4;
   UChar_t         GLB_L3_ELECTRON_CENTRAL_4_NOL2;
   UChar_t         GLB_L3_ELECTRON_CENTRAL_8;
   UChar_t         GLB_L3_ELECTRON_CENTRAL_8_L2_DPS;
   UChar_t         GLB_L3_ELECTRON_CENTRAL_8_NO_L2;
   UChar_t         GLB_L3_ELECTRON_CENTRAL_L3PS20_L1_CEM8_PT8;
   UChar_t         GLB_L3_ELECTRON_CENTRAL_PS5K_L1_CEM4_PT4;
   UChar_t         GLB_L3_EXO_TWO_TRACK;
   UChar_t         GLB_L3_EXPRESS_D0;
   UChar_t         GLB_L3_EXPRESS_ELECTRON_CENTRAL_18;
   UChar_t         GLB_L3_EXPRESS_W;
   UChar_t         GLB_L3_EXPRESS_Z;
   UChar_t         GLB_L3_HIGGS_MULTI_JET;
   UChar_t         GLB_L3_HIGH_PT_BJET;
   UChar_t         GLB_L3_JET_100;
   UChar_t         GLB_L3_JET_20;
   UChar_t         GLB_L3_JET_20_NO_L2;
   UChar_t         GLB_L3_JET_50;
   UChar_t         GLB_L3_JET_70;
   UChar_t         GLB_L3_JET_70_NO_L2;
   UChar_t         GLB_L3_JET_CAL_SINGLETOWER_10_1HZ;
   UChar_t         GLB_L3_JET_CAL_SINGLETOWER_5_1HZ;
   UChar_t         GLB_L3_JET_CAL_TRACK3_ISO;
   UChar_t         GLB_L3_JET_CAL_TRACK7_ISO;
   UChar_t         GLB_L3_JPSI_CEMCEM_NOL2;
   UChar_t         GLB_L3_JPSI_CEMCEM_TWO_SVT;
   UChar_t         GLB_L3_JPSI_CMU1pt5_CMX2;
   UChar_t         GLB_L3_JPSI_CMU1pt5_CMX2_DPS;
   UChar_t         GLB_L3_JPSI_CMU2_CMX2_PS2;
   UChar_t         GLB_L3_JPSI_CMUCMU1pt5;
   UChar_t         GLB_L3_JPSI_CMUCMU1pt5_DPS;
   UChar_t         GLB_L3_JPSI_CMUCMU2_PS2;
   UChar_t         GLB_L3_JPSI_CMUCMU_MT_DPS;
   UChar_t         GLB_L3_JPSI_CMUCMU_MT_LUMI_185;
   UChar_t         GLB_L3_JPSI_CMUCMX3_MT_DPS;
   UChar_t         GLB_L3_JPSI_CMUCMX3_MT_LUMI_185;
   UChar_t         GLB_L3_JPSI_CMUP4_CMU1pt5;
   UChar_t         GLB_L3_JPSI_CMUP4_CMX2;
   UChar_t         GLB_L3_JPSI_CMUPCMU_HIGHPT;
   UChar_t         GLB_L3_JPSI_CMUPCMU_HIGHPT_DPS;
   UChar_t         GLB_L3_JPSI_CMUPCMX_HIGHPT;
   UChar_t         GLB_L3_JPSI_CMUPCMX_HIGHPT_DPS;
   UChar_t         GLB_L3_JPSI_CMXCMU3_MT_DPS;
   UChar_t         GLB_L3_JPSI_CMXCMU3_MT_LUMI_185;
   UChar_t         GLB_L3_MET35_AND_TWO_JETS;
   UChar_t         GLB_L3_MET45;
   UChar_t         GLB_L3_MET_L3PS100_L1_MET25;
   UChar_t         GLB_L3_MET_PEM;
   UChar_t         GLB_L3_MET_PEM_L1_EM8_AND_MET15;
   UChar_t         GLB_L3_MINBIAS_1HZ;
   UChar_t         GLB_L3_MONITOR_L1_CMU0_PT4;
   UChar_t         GLB_L3_MONITOR_L1_TAU0_PT4;
   UChar_t         GLB_L3_MONITOR_L1_TRK4;
   UChar_t         GLB_L3_MONITOR_L3TAG_PS100;
   UChar_t         GLB_L3_MUON_CMUP18;
   UChar_t         GLB_L3_MUON_CMUP18_L2_LOOSE_DPS;
   UChar_t         GLB_L3_MUON_CMUP18_L2_LOOSE_LUMI_240;
   UChar_t         GLB_L3_MUON_CMUP18_L2_LOOSE_LUMI_260;
   UChar_t         GLB_L3_MUON_CMUP18_L2_PT15;
   UChar_t         GLB_L3_MUON_CMUP4_L3PS50;
   UChar_t         GLB_L3_MUON_CMUP8;
   UChar_t         GLB_L3_MUON_CMX18;
   UChar_t         GLB_L3_MUON_CMX18_DPS;
   UChar_t         GLB_L3_MUON_CMX18_L2_LOOSE_DPS;
   UChar_t         GLB_L3_MUON_CMX18_L2_LOOSE_LUMI_200;
   UChar_t         GLB_L3_MUON_CMX18_L2_PT15;
   UChar_t         GLB_L3_MUON_CMX18_L2_PT15_LUMI_200;
   UChar_t         GLB_L3_MUON_CMX18_LUMI_250;
   UChar_t         GLB_L3_MUON_L3PS500_L1_CMUP6_PT4;
   UChar_t         GLB_L3_PHOTON_10_ISO;
   UChar_t         GLB_L3_PHOTON_10_NOISO;
   UChar_t         GLB_L3_PHOTON_10_NOISO_NO_L2;
   UChar_t         GLB_L3_PHOTON_15_TIGHT;
   UChar_t         GLB_L3_PHOTON_15_TIGHT_NO_L2;
   UChar_t         GLB_L3_PHOTON_18_NOISO;
   UChar_t         GLB_L3_PHOTON_25_ISO;
   UChar_t         GLB_L3_PHOTON_25_ISO_NO_L2;
   UChar_t         GLB_L3_PHOTON_B_JET;
   UChar_t         GLB_L3_PHOTON_CMUP;
   UChar_t         GLB_L3_PHOTON_CMUP_L1_EM8_AND_CMU1pt5;
   UChar_t         GLB_L3_PHOTON_CMX;
   UChar_t         GLB_L3_PHOTON_CMX_L1_EM8_AND_CMX2;
   UChar_t         GLB_L3_PHOTON_DIJET;
   UChar_t         GLB_L3_PHOTON_DIJET_NO_L2;
   UChar_t         GLB_L3_PHOTON_L1_EM8;
   UChar_t         GLB_L3_PLUG_DIJET;
   UChar_t         GLB_L3_PLUG_ELECTRON_20;
   UChar_t         GLB_L3_PLUG_Z;
   UChar_t         GLB_L3_RAREB_CMUCMU_SUMPT;
   UChar_t         GLB_L3_RAREB_CMUCMU_SVT;
   UChar_t         GLB_L3_RAREB_CMUCMX_CMUSVT;
   UChar_t         GLB_L3_RAREB_CMUCMX_CMXSVT;
   UChar_t         GLB_L3_RAREB_CMUCMX_SUMPT;
   UChar_t         GLB_L3_RAREB_CMUPCMU;
   UChar_t         GLB_L3_RAREB_CMUPCMX;
   UChar_t         GLB_L3_SUPER_PHOTON70_L2_EM;
   UChar_t         GLB_L3_SUPER_PHOTON70_L2_JET;
   UChar_t         GLB_L3_TAU_CMUP8_TRACK5_ISO;
   UChar_t         GLB_L3_TAU_CMX8_TRACK5_ISO;
   UChar_t         GLB_L3_TAU_ELECTRON8_TRACK5_ISO;
   UChar_t         GLB_L3_TAU_MET;
   UChar_t         GLB_L3_TOP_MULTI_JET;
   UChar_t         GLB_L3_TRIPHOTON;
   UChar_t         GLB_L3_TRIPHOTON_NO_L2;
   UChar_t         GLB_L3_TWO_JET_15_M120;
   UChar_t         GLB_L3_TWO_JET_40_M175;
   UChar_t         GLB_L3_TWO_JET_60_M230;
   UChar_t         GLB_L3_TWO_JET_90_M300;
   UChar_t         GLB_L3_ULTRA_PHOTON50;
   UChar_t         GLB_L3_ULTRA_PHOTON50_NO_L2;
   UChar_t         GLB_L3_UPSILON_CMUP_CMU;
   UChar_t         GLB_L3_UPSILON_CMUP_CMU_DPS;
   UChar_t         GLB_L3_UPSILON_CMUP_CMX;
   UChar_t         GLB_L3_UPSILON_CMUP_CMX_DPS;
   UChar_t         GLB_L3_W_NOTRACK;
   UChar_t         GLB_L3_W_NOTRACK_NO_L2;
   UChar_t         GLB_L3_ZEROBIAS_NOL3FILT_L1_MB_XING_PS1M;
   UChar_t         GLB_L3_Z_BB;
   UChar_t         GLB_L3_Z_NOTRACK;
   UChar_t         GLB_ResidualsBeamConstrained;
   UChar_t         GLB_isData;
   Float_t         LUM_lum_glive_inst;
   Float_t         LUM_lum_glive_inst_bunch[36];
   Float_t         LUM_lum_glive_tot;
   Float_t         LUM_lum_glive_tot_bunch[36];
   Float_t         LUM_lum_inst;
   Float_t         LUM_lum_inst_bunch[36];
   Float_t         LUM_lum_scaler_inst;
   Float_t         LUM_lum_scaler_tot;
   Float_t         LUM_lum_tot;
   Float_t         LUM_lum_tot_bunch[36];
   Short_t         LUM_lum_bunch159;
   Short_t         LUM_lum_bunch36;
   Float_t         MET_metDef;
   Float_t         MET_metEx;
   Float_t         MET_metEy;
   Float_t         MET_metXDef;
   Float_t         MET_metYDef;
   Float_t         MET_suMet;
   Float_t         MET_sumetDef;
   Int_t           MU_nMuon;
   Float_t         MU_mu_Hdrf[20][8][10];   //[nMuon]
   Float_t         MU_mu_R4EmF[20];   //[nMuon]
   Float_t         MU_mu_R7EmF[20];   //[nMuon]
   Float_t         MU_mu_SbPhi[20][8];   //[nMuon]
   Float_t         MU_mu_Sbvx[20][8];   //[nMuon]
   Float_t         MU_mu_Sbvy[20][8];   //[nMuon]
   Float_t         MU_mu_Sbvz[20][8];   //[nMuon]
   Float_t         MU_mu_Sbx[20][8];   //[nMuon]
   Float_t         MU_mu_Sby[20][8];   //[nMuon]
   Float_t         MU_mu_Sbz[20][8];   //[nMuon]
   Float_t         MU_mu_cR4Et[20];   //[nMuon]
   Float_t         MU_mu_cR7Et[20];   //[nMuon]
   Float_t         MU_mu_chix[20][8];   //[nMuon]
   Float_t         MU_mu_chiz[20][8];   //[nMuon]
   Float_t         MU_mu_dphi[20][8];   //[nMuon]
   Float_t         MU_mu_dthet[20][8];   //[nMuon]
   Float_t         MU_mu_dx[20][8];   //[nMuon]
   Float_t         MU_mu_dz[20][8];   //[nMuon]
   Float_t         MU_mu_emE[20];   //[nMuon]
   Float_t         MU_mu_extrTrackShrMxPhi[20];   //[nMuon]
   Float_t         MU_mu_extrTrackShrMxPlugEta[20];   //[nMuon]
   Float_t         MU_mu_extrTrackShrMxX[20];   //[nMuon]
   Float_t         MU_mu_extrTrackShrMxXlocal[20];   //[nMuon]
   Float_t         MU_mu_extrTrackShrMxXlocalCesCorr[20];   //[nMuon]
   Float_t         MU_mu_extrTrackShrMxY[20];   //[nMuon]
   Float_t         MU_mu_extrTrackShrMxZ[20];   //[nMuon]
   Float_t         MU_mu_extrTrackShrMxZlocalCesCorr[20];   //[nMuon]
   Float_t         MU_mu_fidBmuDis[20];   //[nMuon]
   Float_t         MU_mu_fidCmpDis[20];   //[nMuon]
   Float_t         MU_mu_fidCmuDis[20];   //[nMuon]
   Float_t         MU_mu_fidCmxDis[20];   //[nMuon]
   Float_t         MU_mu_fidXBmuDis[20];   //[nMuon]
   Float_t         MU_mu_fidXCmpDis[20];   //[nMuon]
   Float_t         MU_mu_fidXCmuDis[20];   //[nMuon]
   Float_t         MU_mu_fidXCmxDis[20];   //[nMuon]
   Float_t         MU_mu_fidZBmuDis[20];   //[nMuon]
   Float_t         MU_mu_fidZCmpDis[20];   //[nMuon]
   Float_t         MU_mu_fidZCmuDis[20];   //[nMuon]
   Float_t         MU_mu_fidZCmxDis[20];   //[nMuon]
   Float_t         MU_mu_hadE[20];   //[nMuon]
   Float_t         MU_mu_met[20];   //[nMuon]
   Float_t         MU_mu_metPhi[20];   //[nMuon]
   Float_t         MU_mu_ngbEm[20];   //[nMuon]
   Float_t         MU_mu_sumEt[20];   //[nMuon]
   Float_t         MU_mu_sumTowerEt[20];   //[nMuon]
   Float_t         MU_mu_sumTowerEx[20];   //[nMuon]
   Float_t         MU_mu_sumTowerEy[20];   //[nMuon]
   Float_t         MU_mu_trkiso4[20];   //[nMuon]
   Short_t         MU_mu_Hwdt[20][8][10];   //[nMuon]
   Short_t         MU_mu_SbnH[20][8];   //[nMuon]
   Short_t         MU_mu_Stub[20][8];   //[nMuon]
   Short_t         MU_mu_emTowers[20][5];   //[nMuon]
   Short_t         MU_mu_extrTrackShrMxDet[20];   //[nMuon]
   Short_t         MU_mu_extrTrackShrMxIeta[20];   //[nMuon]
   Short_t         MU_mu_extrTrackShrMxIphi[20];   //[nMuon]
   Short_t         MU_mu_fidEle[20];   //[nMuon]
   Short_t         MU_mu_hadTowers[20][5];   //[nMuon]
   Short_t         MU_mu_link_ces[20][20];   //[nMuon]
   Short_t         MU_mu_nces[20];   //[nMuon]
   Short_t         MU_mu_numEmTowers[20];   //[nMuon]
   Short_t         MU_mu_numHadTowers[20];   //[nMuon]
   Short_t         MU_mu_trkIndex[20];   //[nMuon]
   Short_t         MU_mu_trkSisa[20];   //[nMuon]
   UChar_t         MU_mu_exceededLimit;
   UChar_t         MU_mu_fidBMU[20];   //[nMuon]
   UChar_t         MU_mu_fidCMP[20];   //[nMuon]
   UChar_t         MU_mu_fidCMU[20];   //[nMuon]
   UChar_t         MU_mu_fidCMX[20];   //[nMuon]
   UChar_t         MU_mu_isBluebeam[20];   //[nMuon]
   UChar_t         MU_mu_isKeystone[20];   //[nMuon]
   UChar_t         MU_mu_isMiniskirt[20];   //[nMuon]
   Int_t           PHOTON_npho;
   Float_t         PHOTON_pho_NoVtxZeta[25];   //[npho]
   Float_t         PHOTON_pho_NoVtxZisoPJWCo4[25];   //[npho]
   Float_t         PHOTON_pho_NoVtxZrawIsoCo4[25];   //[npho]
   Float_t         PHOTON_pho_NoVtxZrawIsoCo7[25];   //[npho]
   Float_t         PHOTON_pho_NoVtxZtrackIso4[25];   //[npho]
   Float_t         PHOTON_pho_NoVtxZtrackIso7[25];   //[npho]
   Float_t         PHOTON_pho_energyCorr[25];   //[npho]
   Float_t         PHOTON_pho_hadem[25];   //[npho]
   Float_t         PHOTON_pho_isoLCorr[25];   //[npho]
   Float_t         PHOTON_pho_isoVCorr[25];   //[npho]
   Float_t         PHOTON_pho_n3d[25];   //[npho]
   Float_t         PHOTON_pho_phi[25];   //[npho]
   Float_t         PHOTON_pho_prmZeta[25][5];   //[npho]
   Float_t         PHOTON_pho_prmZisoPJWCo4[25][5];   //[npho]
   Float_t         PHOTON_pho_prmZrawIsoCo4[25][5];   //[npho]
   Float_t         PHOTON_pho_prmZrawIsoCo7[25][5];   //[npho]
   Float_t         PHOTON_pho_prmZtrackIso4[25][5];   //[npho]
   Float_t         PHOTON_pho_prmZtrackIso7[25][5];   //[npho]
   Float_t         PHOTON_pho_pt[25];   //[npho]
   Float_t         PHOTON_pho_pt2[25];   //[npho]
   Float_t         PHOTON_pho_rawEnergy[25];   //[npho]
   Float_t         PHOTON_pho_towerEta[25];   //[npho]
   Float_t         PHOTON_pho_towerPhi[25];   //[npho]
   Float_t         PHOTON_pho_trkZeta[25][4];   //[npho]
   Float_t         PHOTON_pho_trkZisoPJWCo4[25][4];   //[npho]
   Float_t         PHOTON_pho_trkZrawIsoCo4[25][4];   //[npho]
   Float_t         PHOTON_pho_trkZrawIsoCo7[25][4];   //[npho]
   Float_t         PHOTON_pho_trkZtrackIso4[25][4];   //[npho]
   Float_t         PHOTON_pho_trkZtrackIso7[25][4];   //[npho]
   Short_t         PHOTON_pho_link[25];   //[npho]
   Short_t         PHOTON_pho_trkZlinks[25][4];   //[npho]
   UChar_t         PHOTON_pho_det[25];   //[npho]
   UChar_t         PHOTON_pho_exceededLimit;
   UChar_t         PHOTON_pho_hasShowerMax[25];   //[npho]
   Int_t           RESIDUALS_nRes;
   Float_t         RESIDUALS_res_HitD[40][96];   //[nRes]
   Float_t         RESIDUALS_res_HitT[40][96];   //[nRes]
   Float_t         RESIDUALS_res_HitWidth[40][96];   //[nRes]
   Float_t         RESIDUALS_res_SinAspect[40][96];   //[nRes]
   Float_t         RESIDUALS_res_TrackY[40][96];   //[nRes]
   Short_t         RESIDUALS_res_AssTrkNum[40];   //[nRes]
   Short_t         RESIDUALS_res_CellNum[40][96];   //[nRes]
   UChar_t         RESIDUALS_res_exceededLimit;
   Int_t           TRACK_ntrk;
   Float_t         TRACK_trk_cotbc_cotTheta[300];   //[ntrk]
   Float_t         TRACK_trk_cotbc_curv[300];   //[ntrk]
   Float_t         TRACK_trk_cotbc_d0[300];   //[ntrk]
   Float_t         TRACK_trk_cotbc_phi[300];   //[ntrk]
   Float_t         TRACK_trk_cotbc_z0[300];   //[ntrk]
   Float_t         TRACK_trk_nonbc_chi2[300];   //[ntrk]
   Float_t         TRACK_trk_nonbc_corrdEdxCalc[300];   //[ntrk]
   Float_t         TRACK_trk_nonbc_cotTheta[300];   //[ntrk]
   Float_t         TRACK_trk_nonbc_curv[300];   //[ntrk]
   Float_t         TRACK_trk_nonbc_d0[300];   //[ntrk]
   Float_t         TRACK_trk_nonbc_phi[300];   //[ntrk]
   Float_t         TRACK_trk_nonbc_truncHitWidthMean[300];   //[ntrk]
   Float_t         TRACK_trk_nonbc_truncHitWidthMeanPLC[300];   //[ntrk]
   Float_t         TRACK_trk_nonbc_z0[300];   //[ntrk]
   Short_t         TRACK_trk_nonbc_lastLayerCT[300];   //[ntrk]
   Short_t         TRACK_trk_nonbc_nsvxHits[300];   //[ntrk]
   Short_t         TRACK_trk_nonbc_numHitSL[300][8];   //[ntrk]
   Short_t         TRACK_trk_type[300];   //[ntrk]
   UChar_t         TRACK_trk_exceededLimit;
   Int_t           TRKDET_nTrkdet;
   Float_t         TRKDET_trkdet_cotbc_covCuD0[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_covCuLambda[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_covCuPhi0[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_covCuZ0[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_covD0Lambda[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_covD0Phi0[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_covD0Z0[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_covPhi0Lambda[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_covPhi0Z0[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_covZ0Lambda[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_met[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_metPhi[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_sigCu2[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_sigD02[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_sigLambda2[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_sigPhi02[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_cotbc_sigZ02[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_covCuD0[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_covCuLambda[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_covCuPhi0[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_covCuZ0[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_covD0Lambda[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_covD0Phi0[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_covD0Z0[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_covPhi0Lambda[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_covPhi0Z0[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_covZ0Lambda[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_met[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_metPhi[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_sigCu2[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_sigD02[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_sigLambda2[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_sigPhi02[75];   //[nTrkdet]
   Float_t         TRKDET_trkdet_nonbc_sigZ02[75];   //[nTrkdet]
   Short_t         TRKDET_trkdet_assSisa[75];   //[nTrkdet]
   Short_t         TRKDET_trkdet_assTrk[75];   //[nTrkdet]
   UChar_t         TRKDET_trkdet_exceededLimit;
   Int_t           VERTEX_numvtx;
   Float_t         VERTEX_vtx_COTt0[10];   //[numvtx]
   Float_t         VERTEX_vtx_chi2[10];   //[numvtx]
   Float_t         VERTEX_vtx_cot_beamx;
   Float_t         VERTEX_vtx_cot_beamy;
   Float_t         VERTEX_vtx_cot_errx;
   Float_t         VERTEX_vtx_cot_erry;
   Float_t         VERTEX_vtx_cot_slopex;
   Float_t         VERTEX_vtx_cot_slopey;
   Float_t         VERTEX_vtx_mass[10];   //[numvtx]
   Float_t         VERTEX_vtx_masserr[10];   //[numvtx]
   Float_t         VERTEX_vtx_px[10];   //[numvtx]
   Float_t         VERTEX_vtx_py[10];   //[numvtx]
   Float_t         VERTEX_vtx_pz[10];   //[numvtx]
   Float_t         VERTEX_vtx_svx_beamx;
   Float_t         VERTEX_vtx_svx_beamy;
   Float_t         VERTEX_vtx_svx_errx;
   Float_t         VERTEX_vtx_svx_erry;
   Float_t         VERTEX_vtx_svx_slopex;
   Float_t         VERTEX_vtx_svx_slopey;
   Float_t         VERTEX_vtx_t0[10];   //[numvtx]
   Float_t         VERTEX_vtx_t0Sigma[10];   //[numvtx]
   Float_t         VERTEX_vtx_x[10];   //[numvtx]
   Float_t         VERTEX_vtx_y[10];   //[numvtx]
   Float_t         VERTEX_vtx_z[10];   //[numvtx]
   Short_t         VERTEX_vtx_chrge[10];   //[numvtx]
   Short_t         VERTEX_vtx_ndof[10];   //[numvtx]
   Short_t         VERTEX_vtx_ntrks[10];   //[numvtx]
   UChar_t         VERTEX_vtx_exceededLimit;
   UChar_t         VERTEX_vtx_prim[10];   //[numvtx]
   Int_t           ZVTX_nzvtx;
   Float_t         ZVTX_zvtx_cotT01[20];   //[nzvtx]
   Float_t         ZVTX_zvtx_cotT01Err[20];   //[nzvtx]
   Float_t         ZVTX_zvtx_cotT02[20];   //[nzvtx]
   Float_t         ZVTX_zvtx_cotT02Err[20];   //[nzvtx]
   Float_t         ZVTX_zvtx_met[20];   //[nzvtx]
   Float_t         ZVTX_zvtx_metPhi[20];   //[nzvtx]
   Float_t         ZVTX_zvtx_sumEt[20];   //[nzvtx]
   Float_t         ZVTX_zvtx_sumPt[20];   //[nzvtx]
   Float_t         ZVTX_zvtx_tofSigmaT0[20];   //[nzvtx]
   Float_t         ZVTX_zvtx_tofT0[20];   //[nzvtx]
   Float_t         ZVTX_zvtx_zPos[20];   //[nzvtx]
   Float_t         ZVTX_zvtx_zPosErr[20];   //[nzvtx]
   Short_t         ZVTX_zvtx_nTracks[20];   //[nzvtx]
   Short_t         ZVTX_zvtx_quality[20];   //[nzvtx]
   UChar_t         ZVTX_zvtx_exceededLimit;
   Int_t           MOM_ntk;
   Float_t         MOM_pt[199];   //[MOM_ntrk]
   Float_t         MOM_px[199];   //[MOM_ntrk]
   Float_t         MOM_py[199];   //[MOM_ntrk]
   Float_t         MOM_pz[199];   //[MOM_ntrk]

   // List of branches
   TBranch        *b_COSMICRES;   //!
   TBranch        *b_COTNBC;   //!
   TBranch        *b_GLB;   //!
   TBranch        *b_LUM;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_MU;   //!
   TBranch        *b_PHOTON;   //!
   TBranch        *b_RESIDUALS;   //!
   TBranch        *b_TRACK;   //!
   TBranch        *b_TRKDET;   //!
   TBranch        *b_VERTEX;   //!
   TBranch        *b_ZVTX;   //!
   TBranch        *b_MOM_ntrk;   //!
   TBranch        *b_MOM_pt;   //!
   TBranch        *b_MOM_px;   //!
   TBranch        *b_MOM_py;   //!
   TBranch        *b_MOM_pz;   //!

   JPsiLab(TTree *tree=0);
   virtual ~JPsiLab();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef JPsiLab_cxx
JPsiLab::JPsiLab(TTree *tree)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

     TChain *chain = new TChain("chain","");
     //chain->Add("/local/data/NP10/data/jpmm0d_stripped.root/prod");  //use this line to get the first file from dataset
     chain->Add("/local/data/NP10/data/jpmm0d_stripped*.root/prod");  //use this line instead for all data files
     tree = chain;
    

   }
   Init(tree);
}

JPsiLab::~JPsiLab()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t JPsiLab::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t JPsiLab::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!fChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)fChain;
   if (chain->GetTreeNumber() != fCurrent) {
      fCurrent = chain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void JPsiLab::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("COSMICRES", &COSMICRES_nCosmicRes, &b_COSMICRES);
   fChain->SetBranchAddress("COTNBC", &COTNBC_ncotnbc, &b_COTNBC);
   fChain->SetBranchAddress("GLB", &GLB_CdfSoftNtupleVersion, &b_GLB);
   fChain->SetBranchAddress("LUM", &LUM_lum_glive_inst, &b_LUM);
   fChain->SetBranchAddress("MET", &MET_metDef, &b_MET);
   fChain->SetBranchAddress("MU", &MU_nMuon, &b_MU);
   fChain->SetBranchAddress("PHOTON", &PHOTON_npho, &b_PHOTON);
   fChain->SetBranchAddress("RESIDUALS", &RESIDUALS_nRes, &b_RESIDUALS);
   fChain->SetBranchAddress("TRACK", &TRACK_ntrk, &b_TRACK);
   fChain->SetBranchAddress("TRKDET", &TRKDET_nTrkdet, &b_TRKDET);
   fChain->SetBranchAddress("VERTEX", &VERTEX_numvtx, &b_VERTEX);
   fChain->SetBranchAddress("ZVTX", &ZVTX_nzvtx, &b_ZVTX);
   fChain->SetBranchAddress("MOM_ntk", &MOM_ntk, &b_MOM_ntrk);
   fChain->SetBranchAddress("MOM_pt", MOM_pt, &b_MOM_pt);
   fChain->SetBranchAddress("MOM_px", MOM_px, &b_MOM_px);
   fChain->SetBranchAddress("MOM_py", MOM_py, &b_MOM_py);
   fChain->SetBranchAddress("MOM_pz", MOM_pz, &b_MOM_pz);
   Notify();
}

Bool_t JPsiLab::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void JPsiLab::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t JPsiLab::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   if (entry) ;   // This line just avoids an unused variable compiler warning

   return 1;
}
#endif // #ifdef JPsiLab_cxx
