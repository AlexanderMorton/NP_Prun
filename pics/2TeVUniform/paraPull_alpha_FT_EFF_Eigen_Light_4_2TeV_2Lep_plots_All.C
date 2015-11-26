void paraPull_alpha_FT_EFF_Eigen_Light_4_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_Eigen_Light_4
//=========  (Sun Nov 22 20:18:44 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_Eigen_Light_4",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9752894,37.125,1.047479);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed22 = new TH1F("NuisanceParameterFreed22","alpha_FT_EFF_Eigen_Light_4",33,0,33);
   NuisanceParameterFreed22->SetMinimum(-0.7730125);
   NuisanceParameterFreed22->SetMaximum(0.8452024);
   NuisanceParameterFreed22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed22->SetLineColor(ci);
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(20,"FT_EFF_extrapolation");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(21,"MUON_EFF_STAT");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(25,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(26,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(27,"XS_diboson");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed22->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed22->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed22->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed22->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed22->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed22->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed22->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed22->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed22->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed22->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed22->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed22->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed22->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed22->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed22->Draw("hist");
   
   Double_t _fx1022[35] = {
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
   Double_t _fy1022[35] = {
   1.22802e-312,
   -0.7730125,
   -0.392405,
   -0.2909315,
   -0.2045974,
   -0.1826558,
   -0.1279229,
   -0.1246384,
   -0.1085039,
   -0.06590824,
   -0.05694869,
   -0.05335211,
   -0.04670136,
   -0.03717867,
   -0.03240322,
   -0.03108675,
   -0.02394848,
   -0.01698378,
   -0.001380275,
   0.0001641471,
   0.01047946,
   0.01060345,
   0.01812261,
   0.01991984,
   0.02028849,
   0.02036088,
   0.02715435,
   0.04005419,
   0.04585569,
   0.0510776,
   0.05481443,
   0.05616894,
   0.0576058,
   0.8452024,
   0};
   Double_t _fex1022[35] = {
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
   Double_t _fey1022[35] = {
   0,
   0,
   0.6107433,
   1.073042,
   1.265764,
   0.9366396,
   0.9916544,
   0.9863052,
   0.9267903,
   0.7691253,
   0.986452,
   0.9937946,
   0.9917413,
   0.9970732,
   0.9817758,
   0.9375974,
   0.9926703,
   0.9931834,
   0.9925589,
   1.005012,
   0.9933467,
   0.9551129,
   0.9932276,
   0.9929662,
   0.9927825,
   0.9913157,
   0.9909912,
   1.098055,
   0.9870173,
   0.9930639,
   0.9855093,
   0.7540756,
   0.7380502,
   0.9909035,
   0.7857736};
   TGraphErrors *gre = new TGraphErrors(35,_fx1022,_fy1022,_fex1022,_fey1022);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1022 = new TH1F("Graph_Graph1022","",100,0,35.75);
   Graph_Graph1022->SetMinimum(-1.801009);
   Graph_Graph1022->SetMaximum(2.166753);
   Graph_Graph1022->SetDirectory(0);
   Graph_Graph1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1022->SetLineColor(ci);
   Graph_Graph1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph1022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph1022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1022);
   
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
   TText *AText = pt->AddText("alpha_FT_EFF_Eigen_Light_4");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
