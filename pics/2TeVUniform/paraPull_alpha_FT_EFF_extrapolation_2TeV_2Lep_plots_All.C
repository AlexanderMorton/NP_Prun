void paraPull_alpha_FT_EFF_extrapolation_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_extrapolation
//=========  (Sun Nov 22 20:19:02 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_extrapolation",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9756589,37.125,1.048929);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed23 = new TH1F("NuisanceParameterFreed23","alpha_FT_EFF_extrapolation",33,0,33);
   NuisanceParameterFreed23->SetMinimum(-0.7732002);
   NuisanceParameterFreed23->SetMaximum(0.84647);
   NuisanceParameterFreed23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed23->SetLineColor(ci);
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed23->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed23->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed23->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed23->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed23->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed23->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed23->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed23->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed23->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed23->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed23->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed23->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed23->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed23->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed23->Draw("hist");
   
   Double_t _fx1023[35] = {
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
   Double_t _fy1023[35] = {
   1.22802e-312,
   -0.7732002,
   -0.3921591,
   -0.2934756,
   -0.2062307,
   -0.1826562,
   -0.1278773,
   -0.1247963,
   -0.108241,
   -0.06582277,
   -0.05689324,
   -0.05334169,
   -0.04681761,
   -0.03773949,
   -0.03194355,
   -0.03107318,
   -0.02396662,
   -0.01713834,
   -0.001377884,
   0.0001640769,
   0.01059417,
   0.01807268,
   0.01971767,
   0.02015498,
   0.02031121,
   0.0264387,
   0.04025057,
   0.04268968,
   0.0458893,
   0.05072166,
   0.05322667,
   0.05659235,
   0.05743463,
   0.84647,
   0};
   Double_t _fex1023[35] = {
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
   Double_t _fey1023[35] = {
   0,
   0,
   0.6107108,
   1.073202,
   1.262649,
   0.9362982,
   0.9916356,
   0.9862464,
   0.9262906,
   0.7691235,
   0.9864321,
   0.9937945,
   0.9917446,
   0.9970094,
   0.9817783,
   0.9372476,
   0.9926669,
   0.9931837,
   0.9925578,
   1.005003,
   0.9933467,
   0.9932277,
   0.9929663,
   0.9927589,
   0.9912906,
   0.9909611,
   1.097757,
   0.9869836,
   0.993171,
   0.9930564,
   0.9854803,
   0.753601,
   0.7380864,
   0.9908989,
   0.785308};
   TGraphErrors *gre = new TGraphErrors(35,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,0,35.75);
   Graph_Graph1023->SetMinimum(-1.799504);
   Graph_Graph1023->SetMaximum(2.167994);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
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
   
   TPaveText *pt = new TPaveText(0.2917068,0.9341608,0.7082932,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_FT_EFF_extrapolation");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
