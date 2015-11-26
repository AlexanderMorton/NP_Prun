void paraPull_alpha_EG_RESOLUTION_ALL_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_EG_RESOLUTION_ALL
//=========  (Sun Nov 22 20:14:01 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_EG_RESOLUTION_ALL",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9756355,37.125,1.049623);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed6 = new TH1F("NuisanceParameterFreed6","alpha_EG_RESOLUTION_ALL",33,0,33);
   NuisanceParameterFreed6->SetMinimum(-0.7731097);
   NuisanceParameterFreed6->SetMaximum(0.8470969);
   NuisanceParameterFreed6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed6->SetLineColor(ci);
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(20,"FT_EFF_extrapolation");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(21,"MUON_EFF_STAT");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(25,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(31,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(32,"MUONS_MS");
   NuisanceParameterFreed6->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed6->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed6->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed6->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed6->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed6->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed6->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed6->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed6->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed6->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed6->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed6->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed6->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed6->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed6->Draw("hist");
   
   Double_t _fx1006[35] = {
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
   Double_t _fy1006[35] = {
   1.22802e-312,
   -0.7731097,
   -0.3921743,
   -0.293631,
   -0.2062229,
   -0.1827488,
   -0.1281174,
   -0.1245126,
   -0.1082091,
   -0.06576492,
   -0.05684313,
   -0.05332309,
   -0.04675272,
   -0.0376783,
   -0.03228676,
   -0.03112064,
   -0.02395027,
   -0.01716815,
   -0.001368855,
   0.0001639766,
   0.01020258,
   0.01060384,
   0.0180787,
   0.01974379,
   0.02028609,
   0.02046257,
   0.04020329,
   0.04266391,
   0.04578831,
   0.05049948,
   0.05319844,
   0.0574024,
   0.05790248,
   0.8470969,
   0};
   Double_t _fex1006[35] = {
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
   Double_t _fey1006[35] = {
   0,
   0,
   0.610768,
   1.073217,
   1.263173,
   0.9362314,
   0.9916222,
   0.9863048,
   0.9259827,
   0.7691218,
   0.9864552,
   0.9937942,
   0.9917457,
   0.9970139,
   0.9818237,
   0.9374371,
   0.9926691,
   0.9931835,
   0.9925618,
   1.004989,
   0.9933467,
   0.9550431,
   0.9932277,
   0.9929666,
   0.992751,
   0.9913074,
   0.9909922,
   0.9869917,
   0.9931709,
   0.9930627,
   0.9855153,
   0.7535663,
   0.9909032,
   0.7381565,
   0.7858726};
   TGraphErrors *gre = new TGraphErrors(35,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","",100,0,35.75);
   Graph_Graph1006->SetMinimum(-1.774861);
   Graph_Graph1006->SetMaximum(1.890718);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
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
   TText *AText = pt->AddText("alpha_EG_RESOLUTION_ALL");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
