void paraPull_alpha_XS_ttbar_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_XS_ttbar
//=========  (Sun Nov 22 20:23:40 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_XS_ttbar",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.6368363,37.125,0.9722775);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed39 = new TH1F("NuisanceParameterFreed39","alpha_XS_ttbar",33,0,33);
   NuisanceParameterFreed39->SetMinimum(-0.4759249);
   NuisanceParameterFreed39->SetMaximum(0.8113661);
   NuisanceParameterFreed39->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed39->SetLineColor(ci);
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(1,"Luminosity");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(3,"XS_st");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(4,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(5,"MUONS_ID");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(6,"XS_Zc");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(7,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(8,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(9,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(11,"XS_Zl");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(12,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(14,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(15,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(16,"MUONS_SCALE");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(17,"MUON_ISO_STAT");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(18,"MUON_EFF_STAT");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(20,"MUON_EFF_SYS");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(21,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(22,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(23,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(24,"XS_diboson");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(25,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(26,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(28,"MUONS_MS");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(30,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(31,"XS_Zb");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed39->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed39->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed39->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed39->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed39->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed39->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed39->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed39->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed39->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed39->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed39->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed39->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed39->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed39->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed39->Draw("hist");
   
   Double_t _fx1039[35] = {
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
   Double_t _fy1039[35] = {
   1.22802e-312,
   -0.4759249,
   -0.4061811,
   -0.2912926,
   -0.1416486,
   -0.1101257,
   -0.1027632,
   -0.06847336,
   -0.0516475,
   -0.05141576,
   -0.04960738,
   -0.0467934,
   -0.02250913,
   -0.01823041,
   -0.01263809,
   -0.001760647,
   -0.0009428013,
   0.0001602264,
   0.01103309,
   0.01695257,
   0.01925941,
   0.02101659,
   0.0221408,
   0.02615184,
   0.04107391,
   0.04333385,
   0.04367954,
   0.04592216,
   0.054042,
   0.06561043,
   0.06800751,
   0.1153504,
   0.2234622,
   0.8113661,
   0};
   Double_t _fex1039[35] = {
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
   Double_t _fey1039[35] = {
   0,
   0,
   0.8791657,
   1.071936,
   0.9795035,
   0.9861918,
   0.7659078,
   0.9281918,
   0.9865602,
   0.9938051,
   0.9917849,
   0.9924079,
   0.9965649,
   0.9931865,
   0.9817261,
   0.9925643,
   0.9933733,
   1.007058,
   0.9933467,
   0.9932287,
   0.9560241,
   0.9929668,
   0.9913147,
   0.9910159,
   1.129944,
   0.9871894,
   0.9909681,
   0.9931706,
   0.9930613,
   0.7352141,
   0.9854295,
   0.9355337,
   0.7578684,
   1.415758,
   0.7853935};
   TGraphErrors *gre = new TGraphErrors(35,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","",100,0,35.75);
   Graph_Graph1039->SetMinimum(-1.722264);
   Graph_Graph1039->SetMaximum(2.586159);
   Graph_Graph1039->SetDirectory(0);
   Graph_Graph1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1039->SetLineColor(ci);
   Graph_Graph1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph1039->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1039->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph1039->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1039->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1039);
   
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
   
   TPaveText *pt = new TPaveText(0.3840763,0.9341608,0.6159237,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_XS_ttbar");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
