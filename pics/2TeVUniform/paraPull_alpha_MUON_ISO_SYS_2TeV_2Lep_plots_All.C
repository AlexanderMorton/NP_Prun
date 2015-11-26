void paraPull_alpha_MUON_ISO_SYS_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_MUON_ISO_SYS
//=========  (Sun Nov 22 20:21:56 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_MUON_ISO_SYS",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9777052,37.125,1.049159);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed33 = new TH1F("NuisanceParameterFreed33","alpha_MUON_ISO_SYS",33,0,33);
   NuisanceParameterFreed33->SetMinimum(-0.7750188);
   NuisanceParameterFreed33->SetMaximum(0.8464727);
   NuisanceParameterFreed33->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed33->SetLineColor(ci);
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(20,"FT_EFF_extrapolation");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(21,"MUON_EFF_STAT");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(25,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(26,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(27,"XS_diboson");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(29,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(30,"MUONS_MS");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(31,"XS_Zb");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed33->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed33->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed33->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed33->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed33->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed33->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed33->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed33->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed33->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed33->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed33->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed33->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed33->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed33->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed33->Draw("hist");
   
   Double_t _fx1033[35] = {
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
   Double_t _fy1033[35] = {
   1.22802e-312,
   -0.7750188,
   -0.3925669,
   -0.2928498,
   -0.2070924,
   -0.1830524,
   -0.1280032,
   -0.1262679,
   -0.1096289,
   -0.06558224,
   -0.05681625,
   -0.05340132,
   -0.04752113,
   -0.03756,
   -0.03159065,
   -0.03113199,
   -0.02395544,
   -0.01709673,
   -0.001375576,
   0.0001640258,
   0.01017132,
   0.01056379,
   0.01803238,
   0.01953954,
   0.02015159,
   0.02033505,
   0.0231812,
   0.04061694,
   0.04275862,
   0.04588616,
   0.04795404,
   0.05347781,
   0.05730227,
   0.8464727,
   0};
   Double_t _fex1033[35] = {
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
   Double_t _fey1033[35] = {
   0,
   0,
   0.6105177,
   1.072963,
   1.274131,
   0.9350411,
   0.9915346,
   0.9862834,
   0.9243374,
   0.769056,
   0.9864216,
   0.9937953,
   0.9917567,
   0.9969205,
   0.9819024,
   0.9371645,
   0.9926625,
   0.9931845,
   0.9925671,
   1.004991,
   0.9933467,
   0.9551202,
   0.9932281,
   0.9929675,
   0.9926546,
   0.9909755,
   0.9913131,
   1.098392,
   0.9868992,
   0.9931708,
   0.9930622,
   0.7376817,
   0.7516033,
   0.9909095,
   0.7841002};
   TGraphErrors *gre = new TGraphErrors(35,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","",100,0,35.75);
   Graph_Graph1033->SetMinimum(-1.813084);
   Graph_Graph1033->SetMaximum(2.169243);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1033->SetLineColor(ci);
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
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
   
   TPaveText *pt = new TPaveText(0.3293574,0.9341608,0.6706426,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_MUON_ISO_SYS");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
