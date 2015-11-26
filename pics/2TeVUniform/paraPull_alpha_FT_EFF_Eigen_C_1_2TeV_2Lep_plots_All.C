void paraPull_alpha_FT_EFF_Eigen_C_1_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_Eigen_C_1
//=========  (Sun Nov 22 20:16:39 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_Eigen_C_1",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9738158,37.125,1.042862);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed15 = new TH1F("NuisanceParameterFreed15","alpha_FT_EFF_Eigen_C_1",33,0,33);
   NuisanceParameterFreed15->SetMinimum(-0.772148);
   NuisanceParameterFreed15->SetMaximum(0.8411942);
   NuisanceParameterFreed15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed15->SetLineColor(ci);
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(10,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(11,"XS_Zl");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(12,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(13,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(15,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(22,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(27,"MUONS_MS");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(29,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(30,"MUON_ISO_SYS");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(31,"XS_Zb");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed15->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed15->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed15->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed15->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed15->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed15->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed15->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed15->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed15->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed15->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed15->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed15->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed15->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed15->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed15->Draw("hist");
   
   Double_t _fx1015[35] = {
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
   Double_t _fy1015[35] = {
   1.22802e-312,
   -0.772148,
   -0.3918709,
   -0.2781014,
   -0.2087478,
   -0.182617,
   -0.1260994,
   -0.1246452,
   -0.1103338,
   -0.05712971,
   -0.05333059,
   -0.04793014,
   -0.03894227,
   -0.03062208,
   -0.02945848,
   -0.02395934,
   -0.01745742,
   -0.001386208,
   0.0001640284,
   0.008849959,
   0.01055253,
   0.01790126,
   0.01973853,
   0.01984683,
   0.02100891,
   0.02210913,
   0.04018815,
   0.04104139,
   0.04308572,
   0.04596977,
   0.05138869,
   0.05597986,
   0.05797107,
   0.8411942,
   0};
   Double_t _fex1015[35] = {
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
   Double_t _fey1015[35] = {
   0,
   0,
   0.610972,
   1.073419,
   1.308798,
   0.9354946,
   0.9915515,
   0.9863008,
   0.9254467,
   0.7688678,
   0.9937995,
   0.9917544,
   0.9969491,
   0.9819998,
   0.9926629,
   0.9373605,
   0.9931843,
   0.9925733,
   1.005016,
   0.9933467,
   0.955168,
   0.9932282,
   0.9929689,
   0.9909873,
   0.9926772,
   0.9913165,
   1.09821,
   0.9869549,
   0.7370597,
   0.9931716,
   0.9930633,
   0.9855471,
   0.7538998,
   0.990919,
   0.786086};
   TGraphErrors *gre = new TGraphErrors(35,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,0,35.75);
   Graph_Graph1015->SetMinimum(-1.852512);
   Graph_Graph1015->SetMaximum(2.167079);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
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
   
   TPaveText *pt = new TPaveText(0.3102811,0.9341608,0.6897189,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_FT_EFF_Eigen_C_1");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
