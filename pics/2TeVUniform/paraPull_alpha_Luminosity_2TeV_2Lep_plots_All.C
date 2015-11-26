void paraPull_alpha_Luminosity_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_Luminosity
//=========  (Sun Nov 22 20:19:19 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_Luminosity",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-1.098823,37.125,1.117955);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed24 = new TH1F("NuisanceParameterFreed24","alpha_Luminosity",33,0,33);
   NuisanceParameterFreed24->SetMinimum(-0.8771454);
   NuisanceParameterFreed24->SetMaximum(0.8962769);
   NuisanceParameterFreed24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed24->SetLineColor(ci);
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(3,"XS_st");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(4,"XS_Zc");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(5,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(6,"MUONS_ID");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(7,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(8,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(9,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(10,"XS_Zl");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(11,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(12,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(13,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(14,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(16,"MUONS_SCALE");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(17,"MUON_ISO_STAT");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(18,"FT_EFF_extrapolation");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(19,"XS_Zb");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(21,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(24,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(25,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(28,"MUON_ISO_SYS");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(29,"MUONS_MS");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(30,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(31,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed24->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed24->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed24->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed24->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed24->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed24->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed24->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed24->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed24->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed24->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed24->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed24->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed24->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed24->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed24->Draw("hist");
   
   Double_t _fx1024[35] = {
   1.22802e-312,
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   0};
   Double_t _fy1024[35] = {
   1.22802e-312,
   -0.8771454,
   -0.3957974,
   -0.191101,
   -0.1356657,
   -0.1263271,
   -0.1056118,
   -0.06437575,
   -0.0569906,
   -0.05432507,
   -0.04771439,
   -0.04419586,
   -0.03222588,
   -0.02453027,
   -0.01885692,
   -0.01307442,
   -0.001432535,
   0.0001658171,
   0.006513298,
   0.009501628,
   0.0107166,
   0.01715769,
   0.01799472,
   0.0190523,
   0.0195598,
   0.02254266,
   0.03741009,
   0.04253904,
   0.04563158,
   0.04632724,
   0.04641013,
   0.05646091,
   0.1823155,
   0.8962769,
   0};
   Double_t _fex1024[35] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1024[35] = {
   0,
   0,
   0.5791521,
   1.071296,
   0.9901053,
   0.9296643,
   0.9862798,
   0.7670302,
   0.986504,
   0.9938341,
   0.9917199,
   0.9970257,
   0.9818348,
   0.9926396,
   0.9931795,
   0.9925553,
   0.9369615,
   1.004949,
   0.9933467,
   0.9543901,
   0.7422679,
   0.9932276,
   0.9928383,
   0.9929725,
   0.9912777,
   1.100623,
   0.9909174,
   0.9869285,
   0.9931718,
   0.9855148,
   0.7352211,
   0.9930484,
   0.9909649,
   1.639389,
   0.775468};
   TGraphErrors *gre = new TGraphErrors(35,_fx1024,_fy1024,_fex1024,_fey1024);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1024 = new TH1F("Graph_Graph1024","",100,0,35.75);
   Graph_Graph1024->SetMinimum(-1.642203);
   Graph_Graph1024->SetMaximum(2.915472);
   Graph_Graph1024->SetDirectory(0);
   Graph_Graph1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1024->SetLineColor(ci);
   Graph_Graph1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph1024->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1024->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph1024->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1024->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1024);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.1,0.4,0.4,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(72);
   leg->SetTextSize(0.015);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.366004,0.9341608,0.633996,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_Luminosity");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
