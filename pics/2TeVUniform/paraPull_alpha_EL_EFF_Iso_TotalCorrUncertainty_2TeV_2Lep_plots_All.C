void paraPull_alpha_EL_EFF_Iso_TotalCorrUncertainty_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_EL_EFF_Iso_TotalCorrUncertainty
//=========  (Sun Nov 22 20:14:54 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_EL_EFF_Iso_TotalCorrUncertainty",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9750892,37.125,1.047955);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed9 = new TH1F("NuisanceParameterFreed9","alpha_EL_EFF_Iso_TotalCorrUncertainty",33,0,33);
   NuisanceParameterFreed9->SetMinimum(-0.7727848);
   NuisanceParameterFreed9->SetMaximum(0.8456503);
   NuisanceParameterFreed9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed9->SetLineColor(ci);
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed9->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed9->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed9->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed9->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed9->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed9->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed9->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed9->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed9->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed9->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed9->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed9->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed9->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed9->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed9->Draw("hist");
   
   Double_t _fx1009[35] = {
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
   Double_t _fy1009[35] = {
   1.22802e-312,
   -0.7727848,
   -0.3922476,
   -0.2907829,
   -0.2050988,
   -0.1826652,
   -0.1278621,
   -0.1246447,
   -0.1083822,
   -0.06587814,
   -0.05693349,
   -0.05334209,
   -0.04676047,
   -0.03729371,
   -0.03207689,
   -0.03107143,
   -0.01702517,
   -0.001380258,
   0.0001641211,
   0.01041877,
   0.01060027,
   0.01810894,
   0.01987367,
   0.02024918,
   0.02038876,
   0.02749887,
   0.0401174,
   0.04268003,
   0.04584905,
   0.05094516,
   0.05434531,
   0.05598196,
   0.05756905,
   0.8456503,
   0};
   Double_t _fex1009[35] = {
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
   Double_t _fey1009[35] = {
   0,
   0,
   0.6107702,
   1.073131,
   1.266362,
   0.9365976,
   0.9916527,
   0.9863054,
   0.9267238,
   0.7691165,
   0.9864524,
   0.9937947,
   0.9917419,
   0.9970684,
   0.9817834,
   0.9376065,
   0.9926703,
   0.9925594,
   1.005011,
   0.9933467,
   0.9551198,
   0.9932276,
   0.9929662,
   0.9927806,
   0.9913159,
   0.9909915,
   1.097968,
   0.9870135,
   0.9931711,
   0.9930639,
   0.9855126,
   0.7540343,
   0.738039,
   0.9909039,
   0.7858475};
   TGraphErrors *gre = new TGraphErrors(35,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,0,35.75);
   Graph_Graph1009->SetMinimum(-1.802262);
   Graph_Graph1009->SetMaximum(2.167356);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
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
   
   TPaveText *pt = new TPaveText(0.2068675,0.9341608,0.7931325,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_EL_EFF_Iso_TotalCorrUncertainty");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
