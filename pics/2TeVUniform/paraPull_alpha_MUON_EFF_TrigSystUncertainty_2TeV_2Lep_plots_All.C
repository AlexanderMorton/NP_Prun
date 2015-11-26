void paraPull_alpha_MUON_EFF_TrigSystUncertainty_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_MUON_EFF_TrigSystUncertainty
//=========  (Sun Nov 22 20:21:20 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_MUON_EFF_TrigSystUncertainty",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9750409,37.125,1.048213);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed31 = new TH1F("NuisanceParameterFreed31","alpha_MUON_EFF_TrigSystUncertainty",33,0,33);
   NuisanceParameterFreed31->SetMinimum(-0.7727155);
   NuisanceParameterFreed31->SetMaximum(0.8458873);
   NuisanceParameterFreed31->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed31->SetLineColor(ci);
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(11,"XS_Zl");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(12,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(13,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(15,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed31->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed31->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed31->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed31->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed31->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed31->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed31->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed31->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed31->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed31->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed31->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed31->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed31->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed31->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed31->Draw("hist");
   
   Double_t _fx1031[35] = {
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
   Double_t _fy1031[35] = {
   1.22802e-312,
   -0.7727155,
   -0.3921956,
   -0.2910533,
   -0.2055401,
   -0.1826387,
   -0.1278504,
   -0.1248419,
   -0.1083838,
   -0.06586573,
   -0.05691697,
   -0.04682975,
   -0.03734613,
   -0.03203758,
   -0.03107051,
   -0.02395739,
   -0.01703891,
   -0.001378865,
   0.0001641511,
   0.01042332,
   0.01059565,
   0.01809949,
   0.01983449,
   0.02023732,
   0.02039925,
   0.02726125,
   0.04013041,
   0.0426818,
   0.04584832,
   0.05086979,
   0.05361591,
   0.05609347,
   0.05751874,
   0.8458873,
   0};
   Double_t _fex1031[35] = {
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
   Double_t _fey1031[35] = {
   0,
   0,
   0.6107818,
   1.073146,
   1.266151,
   0.9365523,
   0.9916502,
   0.9863067,
   0.9266358,
   0.7691153,
   0.9864529,
   0.9937947,
   0.9970655,
   0.9817912,
   0.9376153,
   0.9926705,
   0.9931835,
   0.99256,
   1.005009,
   0.9933467,
   0.9551234,
   0.9932276,
   0.9929663,
   0.9927775,
   0.9913161,
   0.990992,
   1.097917,
   0.9870109,
   0.9931711,
   0.9930639,
   0.9855165,
   0.7538772,
   0.7380422,
   0.9909046,
   0.7858811};
   TGraphErrors *gre = new TGraphErrors(35,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","",100,0,35.75);
   Graph_Graph1031->SetMinimum(-1.802539);
   Graph_Graph1031->SetMaximum(2.16764);
   Graph_Graph1031->SetDirectory(0);
   Graph_Graph1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1031->SetLineColor(ci);
   Graph_Graph1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph1031->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1031->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph1031->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1031->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1031);
   
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
   
   TPaveText *pt = new TPaveText(0.2174096,0.9341608,0.7825904,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_MUON_EFF_TrigSystUncertainty");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
