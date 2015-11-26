void paraPull_alpha_EL_EFF_ID_TotalCorrUncertainty_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_EL_EFF_ID_TotalCorrUncertainty
//=========  (Sun Nov 22 20:14:37 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_EL_EFF_ID_TotalCorrUncertainty",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9743504,37.125,1.055419);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed8 = new TH1F("NuisanceParameterFreed8","alpha_EL_EFF_ID_TotalCorrUncertainty",33,0,33);
   NuisanceParameterFreed8->SetMinimum(-0.7713735);
   NuisanceParameterFreed8->SetMaximum(0.8524417);
   NuisanceParameterFreed8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed8->SetLineColor(ci);
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(13,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(15,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(29,"XS_Zb");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(30,"MUON_ISO_SYS");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed8->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed8->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed8->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed8->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed8->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed8->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed8->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed8->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed8->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed8->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed8->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed8->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed8->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed8->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed8->Draw("hist");
   
   Double_t _fx1008[35] = {
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
   Double_t _fy1008[35] = {
   1.22802e-312,
   -0.7713735,
   -0.3899354,
   -0.3036947,
   -0.2144597,
   -0.1822852,
   -0.1271717,
   -0.1262838,
   -0.1089001,
   -0.06510495,
   -0.05658069,
   -0.05333853,
   -0.04823432,
   -0.03094169,
   -0.0282085,
   -0.02399783,
   -0.01768,
   -0.001370611,
   0.0001636388,
   0.008968656,
   0.01057696,
   0.01792821,
   0.0190094,
   0.0198579,
   0.02078815,
   0.0255602,
   0.0402092,
   0.04242855,
   0.04568782,
   0.04772397,
   0.0479579,
   0.05526914,
   0.05676117,
   0.8524417,
   0};
   Double_t _fex1008[35] = {
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
   Double_t _fey1008[35] = {
   0,
   0,
   0.6107841,
   1.074473,
   1.240982,
   0.9349467,
   0.9916171,
   0.986318,
   0.9243028,
   0.7695058,
   0.9864285,
   0.9937932,
   0.9917505,
   0.9970093,
   0.9926694,
   0.9377343,
   0.9931843,
   0.9925541,
   1.00499,
   0.9933467,
   0.955117,
   0.9932276,
   0.9929649,
   0.9927283,
   0.9913194,
   0.9909852,
   1.098207,
   0.9869476,
   0.9931703,
   0.9930636,
   0.7490083,
   0.9854599,
   0.7384358,
   0.9909053,
   0.7843565};
   TGraphErrors *gre = new TGraphErrors(35,_fx1008,_fy1008,_fex1008,_fey1008);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","",100,0,35.75);
   Graph_Graph1008->SetMinimum(-1.785321);
   Graph_Graph1008->SetMaximum(2.173226);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1008->SetLineColor(ci);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
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
   
   TPaveText *pt = new TPaveText(0.2133936,0.9341608,0.7866064,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_EL_EFF_ID_TotalCorrUncertainty");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
