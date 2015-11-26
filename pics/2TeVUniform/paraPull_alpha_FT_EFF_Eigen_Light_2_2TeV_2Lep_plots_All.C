void paraPull_alpha_FT_EFF_Eigen_Light_2_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_Eigen_Light_2
//=========  (Sun Nov 22 20:18:09 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_Eigen_Light_2",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9754317,37.125,1.049784);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed20 = new TH1F("NuisanceParameterFreed20","alpha_FT_EFF_Eigen_Light_2",33,0,33);
   NuisanceParameterFreed20->SetMinimum(-0.7729101);
   NuisanceParameterFreed20->SetMaximum(0.8472625);
   NuisanceParameterFreed20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed20->SetLineColor(ci);
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(20,"FT_EFF_extrapolation");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(21,"MUON_EFF_STAT");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed20->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed20->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed20->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed20->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed20->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed20->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed20->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed20->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed20->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed20->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed20->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed20->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed20->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed20->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed20->Draw("hist");
   
   Double_t _fx1020[35] = {
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
   Double_t _fy1020[35] = {
   1.22802e-312,
   -0.7729101,
   -0.3911995,
   -0.2903556,
   -0.2096372,
   -0.1826225,
   -0.1274519,
   -0.1251565,
   -0.108088,
   -0.06561659,
   -0.05689022,
   -0.05328577,
   -0.04741053,
   -0.03911184,
   -0.03093646,
   -0.03086661,
   -0.02399863,
   -0.01756007,
   -0.00137709,
   0.0001637944,
   0.01015106,
   0.01056771,
   0.01794286,
   0.01948951,
   0.02033363,
   0.02533757,
   0.04043448,
   0.04277089,
   0.04587797,
   0.05027102,
   0.05174054,
   0.05530719,
   0.05741626,
   0.8472625,
   0};
   Double_t _fex1020[35] = {
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
   Double_t _fey1020[35] = {
   0,
   0,
   0.6108558,
   1.073733,
   1.27515,
   0.9357148,
   0.9915882,
   0.9863105,
   0.9255836,
   0.7690601,
   0.9864607,
   0.9937961,
   0.9917513,
   0.9969882,
   0.9819071,
   0.9926669,
   0.9374838,
   0.9931842,
   0.9925675,
   1.004999,
   0.9933467,
   0.9551078,
   0.993228,
   0.9929675,
   0.9927157,
   0.9913148,
   1.097776,
   0.986961,
   0.9931712,
   0.993063,
   0.9855427,
   0.7531766,
   0.7380391,
   0.9909119,
   0.785642};
   TGraphErrors *gre = new TGraphErrors(35,_fx1020,_fy1020,_fex1020,_fey1020);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","",100,0,35.75);
   Graph_Graph1020->SetMinimum(-1.817084);
   Graph_Graph1020->SetMaximum(2.170471);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);
   
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
   TText *AText = pt->AddText("alpha_FT_EFF_Eigen_Light_2");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
