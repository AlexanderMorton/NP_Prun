void paraPull_alpha_MUONS_ID_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_MUONS_ID
//=========  (Sun Nov 22 20:19:36 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_MUONS_ID",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9753924,37.125,1.04731);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed25 = new TH1F("NuisanceParameterFreed25","alpha_MUONS_ID",33,0,33);
   NuisanceParameterFreed25->SetMinimum(-0.7731222);
   NuisanceParameterFreed25->SetMaximum(0.8450397);
   NuisanceParameterFreed25->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed25->SetLineColor(ci);
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(8,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(10,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(11,"XS_Zl");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(12,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(13,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(15,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed25->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed25->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed25->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed25->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed25->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed25->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed25->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed25->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed25->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed25->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed25->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed25->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed25->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed25->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed25->Draw("hist");
   
   Double_t _fx1025[35] = {
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
   Double_t _fy1025[35] = {
   1.22802e-312,
   -0.7731222,
   -0.3913596,
   -0.2915795,
   -0.2088863,
   -0.182586,
   -0.1275846,
   -0.1251171,
   -0.06625878,
   -0.05685069,
   -0.05330044,
   -0.04722675,
   -0.03847534,
   -0.03125558,
   -0.03097092,
   -0.02399412,
   -0.0173824,
   -0.001370038,
   0.0001640131,
   0.01034094,
   0.01058654,
   0.01800943,
   0.01967917,
   0.02019479,
   0.02032559,
   0.02687427,
   0.03987109,
   0.04278345,
   0.04589664,
   0.05103504,
   0.05315778,
   0.05519516,
   0.05718593,
   0.8450397,
   0};
   Double_t _fex1025[35] = {
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
   Double_t _fey1025[35] = {
   0,
   0,
   0.6107985,
   1.073703,
   1.271165,
   0.9358977,
   0.9916091,
   0.9863034,
   0.9259537,
   0.9864407,
   0.9937955,
   0.9917482,
   0.9970005,
   0.981887,
   0.9374594,
   0.9926677,
   0.993184,
   0.9925665,
   1.00499,
   0.9933467,
   0.9551101,
   0.9932279,
   0.9929674,
   0.9927209,
   0.9909933,
   0.9913161,
   1.097433,
   0.987014,
   0.9931713,
   0.993064,
   0.9855443,
   0.7534761,
   0.7366249,
   0.990906,
   0.7860161};
   TGraphErrors *gre = new TGraphErrors(35,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,0,35.75);
   Graph_Graph1025->SetMinimum(-1.811651);
   Graph_Graph1025->SetMaximum(2.167545);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
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
   
   TPaveText *pt = new TPaveText(0.36751,0.9341608,0.63249,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_MUONS_ID");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
