void paraPull_alpha_MUONS_MS_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_MUONS_MS
//=========  (Sun Nov 22 20:19:53 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_MUONS_MS",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-1.009766,37.125,0.9890026);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed26 = new TH1F("NuisanceParameterFreed26","alpha_MUONS_MS",33,0,33);
   NuisanceParameterFreed26->SetMinimum(-0.8098895);
   NuisanceParameterFreed26->SetMaximum(0.7891257);
   NuisanceParameterFreed26->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed26->SetLineColor(ci);
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(2,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(3,"EG_SCALE_ALL");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(6,"XS_Zc");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(7,"MUONS_ID");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(8,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(10,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(11,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(13,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(20,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(21,"MUON_EFF_STAT");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(24,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(25,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(29,"FT_EFF_extrapolation");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(30,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(31,"XS_Zb");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(32,"MUON_ISO_SYS");
   NuisanceParameterFreed26->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed26->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed26->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed26->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed26->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed26->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed26->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed26->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed26->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed26->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed26->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed26->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed26->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed26->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed26->Draw("hist");
   
   Double_t _fx1026[35] = {
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
   Double_t _fy1026[35] = {
   1.22802e-312,
   -0.8098895,
   -0.4037362,
   -0.3423096,
   -0.2252411,
   -0.1828675,
   -0.1571762,
   -0.149237,
   -0.1273548,
   -0.07358516,
   -0.06808801,
   -0.06198229,
   -0.06031006,
   -0.05293818,
   -0.03417267,
   -0.03238036,
   -0.02689891,
   -0.02542632,
   -0.001643063,
   0.0001603888,
   0.006036281,
   0.01053148,
   0.01679974,
   0.01757673,
   0.01965372,
   0.02264507,
   0.04078009,
   0.05097348,
   0.05337059,
   0.05443933,
   0.05852469,
   0.09383765,
   0.1011771,
   0.7891257,
   0};
   Double_t _fex1026[35] = {
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
   Double_t _fey1026[35] = {
   0,
   0,
   0.6078027,
   1.092912,
   1.104476,
   0.9336719,
   0.9913968,
   0.9144366,
   0.7275085,
   0.9893613,
   0.987145,
   0.9819155,
   0.9938071,
   0.9978833,
   0.9917251,
   0.9510144,
   0.9928258,
   0.9931704,
   0.9925399,
   1.005278,
   0.9933467,
   0.9908674,
   0.9932531,
   0.9930728,
   0.9918603,
   1.137459,
   0.9911371,
   0.9865638,
   0.9931418,
   0.9930512,
   0.9596104,
   0.9909946,
   0.753126,
   0.9864575,
   0.77864};
   TGraphErrors *gre = new TGraphErrors(35,_fx1026,_fy1026,_fex1026,_fey1026);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1026 = new TH1F("Graph_Graph1026","",100,0,35.75);
   Graph_Graph1026->SetMinimum(-1.756302);
   Graph_Graph1026->SetMaximum(2.096664);
   Graph_Graph1026->SetDirectory(0);
   Graph_Graph1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1026->SetLineColor(ci);
   Graph_Graph1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph1026->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1026);
   
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
   
   TPaveText *pt = new TPaveText(0.3599799,0.9341608,0.6400201,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_MUONS_MS");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
