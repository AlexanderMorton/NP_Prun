void paraPull_alpha_FT_EFF_Eigen_Light_1_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_Eigen_Light_1
//=========  (Sun Nov 22 20:17:51 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_Eigen_Light_1",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9754234,37.125,1.04837);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed19 = new TH1F("NuisanceParameterFreed19","alpha_FT_EFF_Eigen_Light_1",33,0,33);
   NuisanceParameterFreed19->SetMinimum(-0.7730441);
   NuisanceParameterFreed19->SetMaximum(0.8459903);
   NuisanceParameterFreed19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed19->SetLineColor(ci);
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(20,"FT_EFF_extrapolation");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(21,"MUON_EFF_STAT");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed19->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed19->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed19->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed19->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed19->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed19->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed19->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed19->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed19->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed19->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed19->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed19->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed19->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed19->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed19->Draw("hist");
   
   Double_t _fx1019[35] = {
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
   Double_t _fy1019[35] = {
   1.22802e-312,
   -0.7730441,
   -0.3918102,
   -0.2930257,
   -0.2071306,
   -0.1826268,
   -0.1278681,
   -0.1249831,
   -0.1082735,
   -0.06574163,
   -0.05689803,
   -0.05331608,
   -0.04705303,
   -0.03815639,
   -0.03185771,
   -0.03105992,
   -0.02396995,
   -0.01728138,
   -0.001378758,
   0.0001639486,
   0.01032843,
   0.01058649,
   0.01803472,
   0.01968124,
   0.02035505,
   0.02625897,
   0.04031058,
   0.04272315,
   0.04583825,
   0.05057873,
   0.05314633,
   0.05636496,
   0.05748122,
   0.8459903,
   0};
   Double_t _fex1019[35] = {
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
   Double_t _fey1019[35] = {
   0,
   0,
   0.610789,
   1.073388,
   1.265345,
   0.9361558,
   0.9916189,
   0.9863082,
   0.9260564,
   0.7691128,
   0.9864574,
   0.9937949,
   0.9917467,
   0.9970227,
   0.9818408,
   0.9375301,
   0.9926684,
   0.9931838,
   0.9925633,
   1.005004,
   0.9933467,
   0.955086,
   0.9932277,
   0.9929667,
   0.9927475,
   0.9909906,
   1.098028,
   0.9869843,
   0.9931712,
   0.9930628,
   0.9855304,
   0.7535006,
   0.738089,
   0.990906,
   0.7859346};
   TGraphErrors *gre = new TGraphErrors(35,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,0,35.75);
   Graph_Graph1019->SetMinimum(-1.803413);
   Graph_Graph1019->SetMaximum(2.167834);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
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
   
   TPaveText *pt = new TPaveText(0.2851807,0.9341608,0.7148193,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_FT_EFF_Eigen_Light_1");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
