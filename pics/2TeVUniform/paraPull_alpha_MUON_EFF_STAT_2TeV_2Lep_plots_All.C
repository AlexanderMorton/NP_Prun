void paraPull_alpha_MUON_EFF_STAT_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_MUON_EFF_STAT
//=========  (Sun Nov 22 20:20:28 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_MUON_EFF_STAT",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9750316,37.125,1.047401);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed28 = new TH1F("NuisanceParameterFreed28","alpha_MUON_EFF_STAT",33,0,33);
   NuisanceParameterFreed28->SetMinimum(-0.7727883);
   NuisanceParameterFreed28->SetMaximum(0.8451578);
   NuisanceParameterFreed28->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed28->SetLineColor(ci);
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(20,"FT_EFF_extrapolation");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed28->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed28->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed28->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed28->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed28->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed28->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed28->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed28->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed28->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed28->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed28->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed28->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed28->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed28->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed28->Draw("hist");
   
   Double_t _fx1028[35] = {
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
   Double_t _fy1028[35] = {
   1.22802e-312,
   -0.7727883,
   -0.3924407,
   -0.2897566,
   -0.2044213,
   -0.1826811,
   -0.127831,
   -0.1244313,
   -0.1084905,
   -0.06592529,
   -0.05696904,
   -0.05334082,
   -0.04665641,
   -0.03715884,
   -0.03232126,
   -0.03105613,
   -0.02394646,
   -0.01698021,
   -0.001380967,
   0.0001641433,
   0.01037251,
   0.01812463,
   0.01995015,
   0.02031197,
   0.0203733,
   0.02709009,
   0.0400718,
   0.04270038,
   0.04585039,
   0.05109531,
   0.05485839,
   0.0557085,
   0.05765224,
   0.8451578,
   0};
   Double_t _fex1028[35] = {
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
   Double_t _fey1028[35] = {
   0,
   0,
   0.6107609,
   1.073031,
   1.267737,
   0.936718,
   0.99166,
   0.9863034,
   0.9269218,
   0.7691259,
   0.9864517,
   0.9937948,
   0.9917407,
   0.9970793,
   0.9817701,
   0.9376172,
   0.9926706,
   0.9931834,
   0.9925584,
   1.005013,
   0.9933467,
   0.9551115,
   0.9929661,
   0.992789,
   0.9913161,
   0.9909914,
   1.098134,
   0.9870205,
   0.9931712,
   0.9930639,
   0.9855076,
   0.7542074,
   0.7380212,
   0.9909035,
   0.7858155};
   TGraphErrors *gre = new TGraphErrors(35,_fx1028,_fy1028,_fex1028,_fey1028);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1028 = new TH1F("Graph_Graph1028","",100,0,35.75);
   Graph_Graph1028->SetMinimum(-1.80298);
   Graph_Graph1028->SetMaximum(2.166883);
   Graph_Graph1028->SetDirectory(0);
   Graph_Graph1028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1028->SetLineColor(ci);
   Graph_Graph1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph1028->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1028->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph1028->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1028->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1028);
   
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
   
   TPaveText *pt = new TPaveText(0.3178112,0.9341608,0.6821888,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_MUON_EFF_STAT");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
