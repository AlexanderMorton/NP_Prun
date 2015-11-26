void paraPull_alpha_FT_EFF_Eigen_C_0_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_Eigen_C_0
//=========  (Sun Nov 22 20:16:22 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_Eigen_C_0",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9608419,37.125,1.037763);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed14 = new TH1F("NuisanceParameterFreed14","alpha_FT_EFF_Eigen_C_0",33,0,33);
   NuisanceParameterFreed14->SetMinimum(-0.7609814);
   NuisanceParameterFreed14->SetMaximum(0.8379023);
   NuisanceParameterFreed14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed14->SetLineColor(ci);
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(3,"Luminosity");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(4,"XS_st");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(5,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(6,"MUONS_ID");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(8,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(10,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(11,"XS_Zl");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(12,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(13,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(14,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(15,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(21,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(24,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(29,"MUONS_MS");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(30,"MUON_ISO_SYS");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(31,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(32,"XS_Zb");
   NuisanceParameterFreed14->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed14->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed14->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed14->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed14->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed14->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed14->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed14->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed14->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed14->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed14->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed14->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed14->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed14->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed14->Draw("hist");
   
   Double_t _fx1014[35] = {
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
   Double_t _fy1014[35] = {
   1.22802e-312,
   -0.7609814,
   -0.3928225,
   -0.1908777,
   -0.1821027,
   -0.1266032,
   -0.1067277,
   -0.08931247,
   -0.07187059,
   -0.05903641,
   -0.05294904,
   -0.04920743,
   -0.0362397,
   -0.02988509,
   -0.02752401,
   -0.02376935,
   -0.01486146,
   -0.001423413,
   0.000166263,
   0.01000159,
   0.01115927,
   0.01894488,
   0.01944752,
   0.02185404,
   0.02446348,
   0.03771739,
   0.03983042,
   0.04337544,
   0.04612236,
   0.05075536,
   0.05589465,
   0.06148726,
   0.106197,
   0.8379023,
   0};
   Double_t _fex1014[35] = {
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
   Double_t _fey1014[35] = {
   0,
   0,
   0.609946,
   1.073483,
   0.9242353,
   0.9915244,
   0.9861105,
   0.766072,
   0.909697,
   0.9855337,
   0.9937114,
   0.9917506,
   0.9968957,
   0.9333523,
   0.9926293,
   0.9791665,
   0.9931802,
   0.992413,
   1.005234,
   0.9933467,
   0.9549337,
   0.9932222,
   0.9909158,
   0.9929254,
   0.9912001,
   0.9919787,
   1.094867,
   0.9871529,
   0.993156,
   0.993059,
   0.7338792,
   0.9844682,
   0.9904637,
   0.7171833,
   0.7590696};
   TGraphErrors *gre = new TGraphErrors(35,_fx1014,_fy1014,_fex1014,_fey1014);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","",100,0,35.75);
   Graph_Graph1014->SetMinimum(-1.546306);
   Graph_Graph1014->SetMaximum(1.83703);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
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
   TText *AText = pt->AddText("alpha_FT_EFF_Eigen_C_0");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
