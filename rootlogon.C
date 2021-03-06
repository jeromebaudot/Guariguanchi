{
gEnv->SetValue("Rint.History","./taf_hist");
gROOT->SetStyle("Plain");
gStyle->SetPalette(1);
gStyle->SetOptStat(1111111);

//  simply launch root instead of TAF
gSystem->Load("libMinuit.so");
gSystem->Load("libGeom.so");
gSystem->Load("libEG.so");
gSystem->Load("libGui.so");
gSystem->Load("libGed.so");
gSystem->Load("libFoam.so");
gSystem->Load("libTreePlayer.so");
gSystem->Load("libRooFit.so");
gSystem->Load("libRooFitCore.so");
gSystem->Load("libPostscript.so");
gSystem->Load("libPhysics.so");
gSystem->Load("libRint.so");
gSystem->Load("libSpectrum.so");
gSystem->Load("libTMVA.so");
gSystem->Load("libGeom.so");
//gSystem->Load("bin/lib/libDTools.so");
//gSystem->Load("bin/lib/libTAF.so");
//MimosaAnalysis *gTAF = new MimosaAnalysis();
}
