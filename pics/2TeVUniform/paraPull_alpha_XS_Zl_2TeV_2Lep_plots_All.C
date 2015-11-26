void paraPull_alpha_XS_Zl_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_XS_Zl
//=========  (Sun Nov 22 20:22:48 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_XS_Zl",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9769115,37.125,1.060511);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed36 = new TH1F("NuisanceParameterFreed36","alpha_XS_Zl",33,0,33);
   NuisanceParameterFreed36->SetMinimum(-0.7731692);
   NuisanceParameterFreed36->SetMaximum(0.8567688);
   NuisanceParameterFreed36->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed36->SetLineColor(ci);
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(12,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(13,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(15,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(29,"XS_Zb");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(30,"MUON_ISO_SYS");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed36->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed36->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed36->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed36->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed36->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed36->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed36->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed36->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed36->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed36->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed36->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed36->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed36->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed36->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed36->Draw("hist");
   
   Double_t _fx1036[35] = {
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
   Double_t _fy1036[35] = {
   1.22802e-312,
   -0.7731692,
   -0.3908397,
   -0.3026805,
   -0.2109077,
   -0.1825635,
   -0.1279925,
   -0.1263821,
   -0.1092288,
   -0.06510526,
   -0.05655815,
   -0.053434,
   -0.03874229,
   -0.03113734,
   -0.03008606,
   -0.02397891,
   -0.01745426,
   -0.001392538,
   0.0001645531,
   0.009472693,
   0.01058319,
   0.01798365,
   0.01909224,
   0.0199497,
   0.02079536,
   0.02479028,
   0.04062907,
   0.04250826,
   0.04582832,
   0.04818285,
   0.04845026,
   0.0557126,
   0.05674255,
   0.8567688,
   0};
   Double_t _fex1036[35] = {
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
   Double_t _fey1036[35] = {
   0,
   0,
   0.6108537,
   1.073936,
   1.252699,
   0.9351862,
   0.991558,
   0.9863193,
   0.9242905,
   0.7693088,
   0.9864634,
   0.9937941,
   0.9917567,
   0.9819489,
   0.9926651,
   0.9373908,
   0.9931849,
   0.9925712,
   1.004942,
   0.9933467,
   0.954975,
   0.993228,
   0.9929671,
   0.9926672,
   0.9912971,
   0.9909836,
   1.098321,
   0.9869168,
   0.9931688,
   0.993059,
   0.7518372,
   0.9855687,
   0.7383253,
   0.99091,
   0.7829907};
   TGraphErrors *gre = new TGraphErrors(35,_fx1036,_fy1036,_fex1036,_fey1036);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1036 = new TH1F("Graph_Graph1036","",100,0,35.75);
   Graph_Graph1036->SetMinimum(-1.794735);
   Graph_Graph1036->SetMaximum(2.178807);
   Graph_Graph1036->SetDirectory(0);
   Graph_Graph1036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1036->SetLineColor(ci);
   Graph_Graph1036->GetXaxis()->SetLabelFont(42);
   Graph_Graph1036->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1036->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1036->GetXaxis()->SetTitleFont(42);
   Graph_Graph1036->GetYaxis()->SetLabelFont(42);
   Graph_Graph1036->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1036->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1036->GetYaxis()->SetTitleFont(42);
   Graph_Graph1036->GetZaxis()->SetLabelFont(42);
   Graph_Graph1036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1036);
   
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
   
   TPaveText *pt = new TPaveText(0.4041566,0.9341608,0.5958434,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_XS_Zl");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
