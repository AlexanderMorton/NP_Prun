void paraPull_alpha_FT_EFF_Eigen_C_2_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_Eigen_C_2
//=========  (Sun Nov 22 20:16:56 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_Eigen_C_2",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9729451,37.125,1.03984);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed16 = new TH1F("NuisanceParameterFreed16","alpha_FT_EFF_Eigen_C_2",33,0,33);
   NuisanceParameterFreed16->SetMinimum(-0.7716665);
   NuisanceParameterFreed16->SetMaximum(0.8385618);
   NuisanceParameterFreed16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed16->SetLineColor(ci);
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(20,"FT_EFF_extrapolation");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(21,"MUON_EFF_STAT");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(24,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(25,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(26,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(27,"XS_diboson");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(29,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(30,"MUONS_MS");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(31,"MUON_ISO_SYS");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(32,"XS_Zb");
   NuisanceParameterFreed16->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed16->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed16->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed16->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed16->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed16->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed16->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed16->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed16->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed16->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed16->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed16->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed16->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed16->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed16->Draw("hist");
   
   Double_t _fx1016[35] = {
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
   Double_t _fy1016[35] = {
   1.22802e-312,
   -0.7716665,
   -0.3945796,
   -0.2718995,
   -0.1971903,
   -0.1829642,
   -0.1263037,
   -0.126037,
   -0.1109884,
   -0.06615239,
   -0.05768798,
   -0.05330585,
   -0.04475984,
   -0.03741536,
   -0.03431583,
   -0.03060626,
   -0.0238874,
   -0.01682264,
   -0.001395436,
   0.0001645141,
   0.009304257,
   0.01056628,
   0.01809831,
   0.01980358,
   0.02083574,
   0.02154463,
   0.02933361,
   0.03925985,
   0.0432392,
   0.04601425,
   0.0504996,
   0.05347244,
   0.0594588,
   0.8385618,
   0};
   Double_t _fex1016[35] = {
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
   Double_t _fey1016[35] = {
   0,
   0,
   0.6106976,
   1.071775,
   1.302912,
   0.9377662,
   0.9917154,
   0.9862853,
   0.9285057,
   0.7692815,
   0.9864575,
   0.9937975,
   0.9917326,
   0.9971741,
   0.9817143,
   0.9377042,
   0.9926714,
   0.9931825,
   0.9925538,
   1.005041,
   0.9933467,
   0.9550778,
   0.9932274,
   0.9929662,
   0.9909898,
   0.9928538,
   0.9913169,
   1.097904,
   0.9870737,
   0.9931716,
   0.993064,
   0.7378613,
   0.9854765,
   0.7558564,
   0.785907};
   TGraphErrors *gre = new TGraphErrors(35,_fx1016,_fy1016,_fex1016,_fey1016);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","",100,0,35.75);
   Graph_Graph1016->SetMinimum(-1.809555);
   Graph_Graph1016->SetMaximum(1.90387);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1016->SetLineColor(ci);
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
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
   TText *AText = pt->AddText("alpha_FT_EFF_Eigen_C_2");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
