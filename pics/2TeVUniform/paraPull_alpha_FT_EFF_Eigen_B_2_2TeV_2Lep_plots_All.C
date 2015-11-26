void paraPull_alpha_FT_EFF_Eigen_B_2_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_Eigen_B_2
//=========  (Sun Nov 22 20:16:04 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_Eigen_B_2",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9764657,37.125,1.048855);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed13 = new TH1F("NuisanceParameterFreed13","alpha_FT_EFF_Eigen_B_2",33,0,33);
   NuisanceParameterFreed13->SetMinimum(-0.7739336);
   NuisanceParameterFreed13->SetMaximum(0.8463234);
   NuisanceParameterFreed13->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed13->SetLineColor(ci);
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(15,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed13->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed13->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed13->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed13->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed13->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed13->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed13->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed13->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed13->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed13->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed13->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed13->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed13->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed13->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed13->Draw("hist");
   
   Double_t _fx1013[35] = {
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
   Double_t _fy1013[35] = {
   1.22802e-312,
   -0.7739336,
   -0.3913202,
   -0.2943384,
   -0.2082788,
   -0.1826799,
   -0.1277911,
   -0.1240949,
   -0.1078782,
   -0.06573223,
   -0.05682201,
   -0.05331491,
   -0.04738464,
   -0.03805263,
   -0.03070913,
   -0.02398953,
   -0.01727178,
   -0.001384158,
   0.0001639113,
   0.01042986,
   0.01059264,
   0.01804411,
   0.01959788,
   0.02012026,
   0.02034661,
   0.03018407,
   0.04035277,
   0.04266328,
   0.04585813,
   0.0504378,
   0.05236452,
   0.05577579,
   0.05728916,
   0.8463234,
   0};
   Double_t _fex1013[35] = {
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
   Double_t _fey1013[35] = {
   0,
   0,
   0.6105511,
   1.073666,
   1.262148,
   0.9360581,
   0.9916145,
   0.9863073,
   0.9260546,
   0.7690785,
   0.9864539,
   0.9937944,
   0.9917466,
   0.9970237,
   0.9818384,
   0.9375866,
   0.9931839,
   0.9925633,
   1.005013,
   0.9933467,
   0.9551411,
   0.9932278,
   0.9929667,
   0.9927465,
   0.9913155,
   0.9909917,
   1.097222,
   0.9869851,
   0.9931711,
   0.9930638,
   0.985532,
   0.7532587,
   0.7380578,
   0.9909052,
   0.7857499};
   TGraphErrors *gre = new TGraphErrors(35,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,0,35.75);
   Graph_Graph1013->SetMinimum(-1.801192);
   Graph_Graph1013->SetMaximum(2.167994);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
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
   
   TPaveText *pt = new TPaveText(0.3082731,0.9341608,0.6917269,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_FT_EFF_Eigen_B_2");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
