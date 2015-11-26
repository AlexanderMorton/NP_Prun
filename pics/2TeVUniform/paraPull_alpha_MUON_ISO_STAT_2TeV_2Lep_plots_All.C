void paraPull_alpha_MUON_ISO_STAT_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_MUON_ISO_STAT
//=========  (Sun Nov 22 20:21:38 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_MUON_ISO_STAT",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9751121,37.125,1.047719);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed32 = new TH1F("NuisanceParameterFreed32","alpha_MUON_ISO_STAT",33,0,33);
   NuisanceParameterFreed32->SetMinimum(-0.772829);
   NuisanceParameterFreed32->SetMaximum(0.8454358);
   NuisanceParameterFreed32->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed32->SetLineColor(ci);
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed32->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed32->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed32->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed32->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed32->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed32->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed32->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed32->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed32->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed32->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed32->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed32->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed32->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed32->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed32->Draw("hist");
   
   Double_t _fx1032[35] = {
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
   Double_t _fy1032[35] = {
   1.22802e-312,
   -0.772829,
   -0.3923854,
   -0.2903394,
   -0.2046824,
   -0.1826773,
   -0.1278665,
   -0.1245217,
   -0.1084631,
   -0.0658937,
   -0.05695179,
   -0.05334359,
   -0.04667872,
   -0.03723253,
   -0.03227373,
   -0.03106871,
   -0.02395033,
   -0.01700201,
   -0.001380507,
   0.01040436,
   0.01060238,
   0.01811648,
   0.01990922,
   0.02028617,
   0.02038603,
   0.02704958,
   0.04008846,
   0.04269066,
   0.04584805,
   0.05101814,
   0.05461327,
   0.05593183,
   0.05761195,
   0.8454358,
   0};
   Double_t _fex1032[35] = {
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
   Double_t _fey1032[35] = {
   0,
   0,
   0.6107623,
   1.07306,
   1.266918,
   0.9366587,
   0.991656,
   0.9863044,
   0.9268226,
   0.7691257,
   0.986452,
   0.9937947,
   0.9917413,
   0.9970735,
   0.9817766,
   0.9376102,
   0.9926704,
   0.9931834,
   0.9925589,
   1.005012,
   0.9551136,
   0.9932276,
   0.9929662,
   0.9927847,
   0.991316,
   0.9909915,
   1.0981,
   0.9870167,
   0.9931711,
   0.9930639,
   0.98551,
   0.7541235,
   0.7380353,
   0.9909036,
   0.78583};
   TGraphErrors *gre = new TGraphErrors(35,_fx1032,_fy1032,_fex1032,_fey1032);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1032 = new TH1F("Graph_Graph1032","",100,0,35.75);
   Graph_Graph1032->SetMinimum(-1.802395);
   Graph_Graph1032->SetMaximum(2.167133);
   Graph_Graph1032->SetDirectory(0);
   Graph_Graph1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1032->SetLineColor(ci);
   Graph_Graph1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph1032->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1032->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph1032->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1032->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph1032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1032);
   
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
   
   TPaveText *pt = new TPaveText(0.3203213,0.9341608,0.6796787,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_MUON_ISO_STAT");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
