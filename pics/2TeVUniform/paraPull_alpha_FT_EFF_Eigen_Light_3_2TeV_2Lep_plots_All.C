void paraPull_alpha_FT_EFF_Eigen_Light_3_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_Eigen_Light_3
//=========  (Sun Nov 22 20:18:27 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_Eigen_Light_3",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9750185,37.125,1.047039);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed21 = new TH1F("NuisanceParameterFreed21","alpha_FT_EFF_Eigen_Light_3",33,0,33);
   NuisanceParameterFreed21->SetMinimum(-0.7728128);
   NuisanceParameterFreed21->SetMaximum(0.844833);
   NuisanceParameterFreed21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed21->SetLineColor(ci);
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(20,"FT_EFF_extrapolation");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(21,"MUON_EFF_STAT");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(25,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(26,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(27,"XS_diboson");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed21->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed21->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed21->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed21->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed21->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed21->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed21->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed21->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed21->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed21->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed21->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed21->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed21->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed21->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed21->Draw("hist");
   
   Double_t _fx1021[35] = {
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
   Double_t _fy1021[35] = {
   1.22802e-312,
   -0.7728128,
   -0.392439,
   -0.2896456,
   -0.2044598,
   -0.1826729,
   -0.1278127,
   -0.1244357,
   -0.1084962,
   -0.06597153,
   -0.05697221,
   -0.05334454,
   -0.04674538,
   -0.03708376,
   -0.0323209,
   -0.03105273,
   -0.0239497,
   -0.01695474,
   -0.001380053,
   0.0001641817,
   0.01054658,
   0.01060529,
   0.0181311,
   0.01996412,
   0.02024645,
   0.02030694,
   0.02702573,
   0.04004296,
   0.0427078,
   0.05119136,
   0.05487747,
   0.05566713,
   0.05764295,
   0.844833,
   0};
   Double_t _fex1021[35] = {
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
   Double_t _fey1021[35] = {
   0,
   0,
   0.6107568,
   1.073028,
   1.26786,
   0.9367263,
   0.991661,
   0.9863027,
   0.9269403,
   0.7691309,
   0.9864506,
   0.9937949,
   0.9917404,
   0.9970817,
   0.9817694,
   0.9376162,
   0.9926709,
   0.9931833,
   0.9925584,
   1.005014,
   0.9933467,
   0.9551241,
   0.9932275,
   0.9929661,
   0.9927886,
   0.9913142,
   0.9909897,
   1.098033,
   0.9870226,
   0.9931712,
   0.9855069,
   0.7542233,
   0.7380251,
   0.9909034,
   0.7857708};
   TGraphErrors *gre = new TGraphErrors(35,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","",100,0,35.75);
   Graph_Graph1021->SetMinimum(-1.803125);
   Graph_Graph1021->SetMaximum(2.166542);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
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
   
   TPaveText *pt = new TPaveText(0.2831727,0.9341608,0.7168273,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_FT_EFF_Eigen_Light_3");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
