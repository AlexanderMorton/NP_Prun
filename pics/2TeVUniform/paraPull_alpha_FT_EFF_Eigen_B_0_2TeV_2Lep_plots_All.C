void paraPull_alpha_FT_EFF_Eigen_B_0_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_Eigen_B_0
//=========  (Sun Nov 22 20:15:29 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_Eigen_B_0",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9754788,37.125,1.050544);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed11 = new TH1F("NuisanceParameterFreed11","alpha_FT_EFF_Eigen_B_0",33,0,33);
   NuisanceParameterFreed11->SetMinimum(-0.7728765);
   NuisanceParameterFreed11->SetMaximum(0.8479418);
   NuisanceParameterFreed11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed11->SetLineColor(ci);
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(15,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(22,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(25,"XS_diboson");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(26,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(29,"MUONS_MS");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(30,"MUON_ISO_SYS");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(31,"XS_Zb");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed11->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed11->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed11->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed11->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed11->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed11->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed11->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed11->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed11->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed11->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed11->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed11->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed11->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed11->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed11->Draw("hist");
   
   Double_t _fx1011[35] = {
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
   Double_t _fy1011[35] = {
   1.22802e-312,
   -0.7728765,
   -0.3896595,
   -0.3010961,
   -0.2139815,
   -0.1814642,
   -0.1273861,
   -0.1182854,
   -0.103625,
   -0.06615574,
   -0.05673196,
   -0.05313196,
   -0.05101582,
   -0.03672164,
   -0.03049236,
   -0.02395134,
   -0.01727547,
   -0.001374945,
   0.000163531,
   0.009540528,
   0.01073076,
   0.01819387,
   0.0196152,
   0.019837,
   0.02052235,
   0.0414472,
   0.04149295,
   0.04244999,
   0.04579345,
   0.04697001,
   0.04964064,
   0.05688424,
   0.05699765,
   0.8479418,
   0};
   Double_t _fex1011[35] = {
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
   Double_t _fey1011[35] = {
   0,
   0,
   0.6071956,
   1.074334,
   1.246804,
   0.9339165,
   0.9913331,
   0.9856006,
   0.9260925,
   0.7686974,
   0.9864358,
   0.9937908,
   0.9917462,
   0.9970282,
   0.9817876,
   0.9926592,
   0.9931815,
   0.9925611,
   1.005039,
   0.9933467,
   0.9548707,
   0.9932266,
   0.9929642,
   0.9913096,
   0.9927176,
   0.9909816,
   0.9868807,
   1.095599,
   0.9931709,
   0.9930636,
   0.7378984,
   0.9854957,
   0.7478562,
   0.99089,
   0.7853292};
   TGraphErrors *gre = new TGraphErrors(35,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,0,35.75);
   Graph_Graph1011->SetMinimum(-1.790747);
   Graph_Graph1011->SetMaximum(2.168794);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
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
   TText *AText = pt->AddText("alpha_FT_EFF_Eigen_B_0");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
