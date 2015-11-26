void paraPull_alpha_XS_Zc_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_XS_Zc
//=========  (Sun Nov 22 20:22:31 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_XS_Zc",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9650672,37.125,1.067824);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed35 = new TH1F("NuisanceParameterFreed35","alpha_XS_Zc",33,0,33);
   NuisanceParameterFreed35->SetMinimum(-0.761778);
   NuisanceParameterFreed35->SetMaximum(0.8645351);
   NuisanceParameterFreed35->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed35->SetLineColor(ci);
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(3,"Luminosity");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(4,"XS_st");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(5,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(6,"MUONS_ID");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(7,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(8,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(9,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(10,"XS_Zl");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(11,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(12,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(13,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(14,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(15,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(16,"MUONS_SCALE");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(17,"MUON_ISO_STAT");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(18,"FT_EFF_extrapolation");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(19,"MUON_EFF_STAT");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(20,"MUON_EFF_SYS");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(21,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(24,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(25,"XS_diboson");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(26,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(28,"MUONS_MS");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(30,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(31,"XS_Zb");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed35->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed35->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed35->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed35->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed35->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed35->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed35->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed35->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed35->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed35->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed35->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed35->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed35->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed35->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed35->Draw("hist");
   
   Double_t _fx1035[35] = {
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
   Double_t _fy1035[35] = {
   1.22802e-312,
   -0.761778,
   -0.3960174,
   -0.2137942,
   -0.1810989,
   -0.1265166,
   -0.1089338,
   -0.06625988,
   -0.05943847,
   -0.0537028,
   -0.04889096,
   -0.03994709,
   -0.03548384,
   -0.02969369,
   -0.02462002,
   -0.01800525,
   -0.001362194,
   0.0001644533,
   0.009427728,
   0.01080794,
   0.01847082,
   0.02046974,
   0.02072007,
   0.02075119,
   0.02213145,
   0.03869747,
   0.04323873,
   0.04601146,
   0.04923453,
   0.04995813,
   0.05994663,
   0.06550423,
   0.1652542,
   0.8645351,
   0};
   Double_t _fex1035[35] = {
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
   Double_t _fey1035[35] = {
   0,
   0,
   0.6117247,
   1.072,
   0.9367889,
   0.9916937,
   0.9861702,
   0.7693456,
   0.9861572,
   0.9937172,
   0.9916846,
   0.9973837,
   0.9807375,
   0.9379379,
   0.9926456,
   0.9931563,
   0.9924679,
   1.005175,
   0.9933467,
   0.9549992,
   0.9932264,
   0.9929656,
   0.9909253,
   0.993057,
   0.9913008,
   1.10379,
   0.987246,
   0.9931734,
   0.9930608,
   0.7358163,
   0.9852317,
   0.9908725,
   0.7613722,
   1.627343,
   0.7723358};
   TGraphErrors *gre = new TGraphErrors(35,_fx1035,_fy1035,_fex1035,_fey1035);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","",100,0,35.75);
   Graph_Graph1035->SetMinimum(-1.663561);
   Graph_Graph1035->SetMaximum(2.869645);
   Graph_Graph1035->SetDirectory(0);
   Graph_Graph1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1035->SetLineColor(ci);
   Graph_Graph1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph1035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph1035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1035);
   
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
   
   TPaveText *pt = new TPaveText(0.3996386,0.9341608,0.6003614,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_XS_Zc");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
