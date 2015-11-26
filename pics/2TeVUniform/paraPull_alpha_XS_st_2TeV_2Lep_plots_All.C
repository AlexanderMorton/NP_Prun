void paraPull_alpha_XS_st_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_XS_st
//=========  (Sun Nov 22 20:23:23 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_XS_st",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-1.016761,37.125,1.053427);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed38 = new TH1F("NuisanceParameterFreed38","alpha_XS_st",33,0,33);
   NuisanceParameterFreed38->SetMinimum(-0.8097425);
   NuisanceParameterFreed38->SetMaximum(0.8464083);
   NuisanceParameterFreed38->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed38->SetLineColor(ci);
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(5,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(6,"XS_Zc");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(7,"MUONS_ID");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(8,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(10,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(11,"XS_Zl");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(12,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(13,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(15,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(30,"MUONS_MS");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(31,"XS_Zb");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed38->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed38->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed38->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed38->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed38->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed38->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed38->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed38->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed38->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed38->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed38->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed38->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed38->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed38->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed38->Draw("hist");
   
   Double_t _fx1038[35] = {
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
   Double_t _fy1038[35] = {
   1.22802e-312,
   -0.8097425,
   -0.392449,
   -0.2923312,
   -0.215672,
   -0.1270565,
   -0.1220617,
   -0.1079309,
   -0.06568566,
   -0.05698942,
   -0.05319049,
   -0.04721557,
   -0.03756177,
   -0.03145934,
   -0.02629791,
   -0.02396326,
   -0.0171384,
   -0.001258922,
   0.0001639004,
   0.01048058,
   0.01062274,
   0.01817234,
   0.01892815,
   0.01989836,
   0.02026045,
   0.03119397,
   0.04079287,
   0.04261466,
   0.04586908,
   0.0514931,
   0.05504464,
   0.05631209,
   0.05770402,
   0.8464083,
   0};
   Double_t _fex1038[35] = {
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
   Double_t _fey1038[35] = {
   0,
   0,
   0.6042833,
   1.072959,
   1.266673,
   0.9348437,
   0.9862915,
   0.9259221,
   0.7694115,
   0.9864605,
   0.9937936,
   0.9917482,
   0.997014,
   0.9818466,
   0.9926688,
   0.9372397,
   0.9931838,
   0.9925638,
   1.004669,
   0.9933467,
   0.9551667,
   0.993228,
   0.9929672,
   0.992786,
   0.991316,
   0.9909927,
   1.097206,
   0.9869714,
   0.9931711,
   0.9930642,
   0.9855206,
   0.7384126,
   0.7537278,
   0.9909,
   0.7860457};
   TGraphErrors *gre = new TGraphErrors(35,_fx1038,_fy1038,_fex1038,_fey1038);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1038 = new TH1F("Graph_Graph1038","",100,0,35.75);
   Graph_Graph1038->SetMinimum(-1.814311);
   Graph_Graph1038->SetMaximum(2.169274);
   Graph_Graph1038->SetDirectory(0);
   Graph_Graph1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1038->SetLineColor(ci);
   Graph_Graph1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph1038->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1038->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph1038->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1038->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph1038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1038);
   
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
   
   TPaveText *pt = new TPaveText(0.4036546,0.9341608,0.5963454,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_XS_st");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
