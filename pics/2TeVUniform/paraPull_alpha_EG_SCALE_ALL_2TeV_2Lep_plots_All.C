void paraPull_alpha_EG_SCALE_ALL_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_EG_SCALE_ALL
//=========  (Sun Nov 22 20:14:18 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_EG_SCALE_ALL",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9831231,37.125,1.053591);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed7 = new TH1F("NuisanceParameterFreed7","alpha_EG_SCALE_ALL",33,0,33);
   NuisanceParameterFreed7->SetMinimum(-0.7794516);
   NuisanceParameterFreed7->SetMaximum(0.8499197);
   NuisanceParameterFreed7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed7->SetLineColor(ci);
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(2,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(3,"Luminosity");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(4,"XS_st");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(5,"XS_Zc");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(7,"MUONS_ID");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(8,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(10,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(11,"XS_Zl");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(12,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(15,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(29,"MUONS_MS");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(30,"MUON_ISO_SYS");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(31,"XS_Zb");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed7->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed7->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed7->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed7->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed7->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed7->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed7->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed7->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed7->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed7->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed7->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed7->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed7->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed7->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed7->Draw("hist");
   
   Double_t _fx1007[35] = {
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
   Double_t _fy1007[35] = {
   1.22802e-312,
   -0.7794516,
   -0.2963425,
   -0.2170329,
   -0.1852266,
   -0.1359653,
   -0.1291663,
   -0.1100791,
   -0.06496123,
   -0.05723476,
   -0.05322889,
   -0.04677586,
   -0.04284114,
   -0.03651903,
   -0.03056364,
   -0.02370243,
   -0.01683991,
   -0.001276532,
   0.0001639368,
   0.0101037,
   0.01063604,
   0.01818683,
   0.01954108,
   0.02071713,
   0.02104882,
   0.02555817,
   0.03277016,
   0.04266836,
   0.04572066,
   0.04722511,
   0.05112999,
   0.05805911,
   0.05826707,
   0.8499197,
   0};
   Double_t _fex1007[35] = {
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
   Double_t _fey1007[35] = {
   0,
   0,
   0.6101965,
   1.267504,
   0.9350314,
   0.9915416,
   0.9244907,
   0.9862355,
   0.7684463,
   0.9864931,
   0.9938067,
   0.9917586,
   0.9969282,
   0.9361018,
   0.9819726,
   0.9926645,
   0.9931846,
   0.9925735,
   1.004832,
   0.9933467,
   0.955095,
   0.9932285,
   0.9929683,
   0.9926448,
   0.991323,
   0.9909952,
   1.100097,
   0.9871636,
   0.9931714,
   0.993065,
   0.7377221,
   0.9855528,
   0.7522276,
   0.9909338,
   0.7867155};
   TGraphErrors *gre = new TGraphErrors(35,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,0,35.75);
   Graph_Graph1007->SetMinimum(-1.817076);
   Graph_Graph1007->SetMaximum(2.173392);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
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
   TText *AText = pt->AddText("alpha_EG_SCALE_ALL");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
