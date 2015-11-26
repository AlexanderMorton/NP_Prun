void paraPull_alpha_FT_EFF_Eigen_B_1_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_Eigen_B_1
//=========  (Sun Nov 22 20:15:47 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_Eigen_B_1",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9787832,37.125,1.041287);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed12 = new TH1F("NuisanceParameterFreed12","alpha_FT_EFF_Eigen_B_1",33,0,33);
   NuisanceParameterFreed12->SetMinimum(-0.7767762);
   NuisanceParameterFreed12->SetMaximum(0.8392803);
   NuisanceParameterFreed12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed12->SetLineColor(ci);
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(6,"XS_Zc");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(7,"MUONS_ID");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(8,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(10,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(11,"XS_Zl");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(12,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(13,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(15,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(22,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(24,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(25,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(26,"MUONS_MS");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(27,"XS_diboson");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(28,"XS_Zb");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(29,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(30,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(31,"MUON_ISO_SYS");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed12->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed12->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed12->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed12->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed12->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed12->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed12->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed12->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed12->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed12->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed12->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed12->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed12->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed12->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed12->Draw("hist");
   
   Double_t _fx1012[35] = {
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
   Double_t _fy1012[35] = {
   1.22802e-312,
   -0.7767762,
   -0.3896131,
   -0.289177,
   -0.2186006,
   -0.1822635,
   -0.126935,
   -0.1097956,
   -0.06493583,
   -0.05730124,
   -0.05300625,
   -0.04829512,
   -0.04598624,
   -0.03034907,
   -0.03018884,
   -0.02410384,
   -0.01929688,
   -0.001397319,
   0.0001629865,
   0.009266123,
   0.01040863,
   0.01727841,
   0.01823377,
   0.01861627,
   0.01886775,
   0.02194145,
   0.03768896,
   0.04124728,
   0.04334321,
   0.04383489,
   0.04630748,
   0.05177398,
   0.0581664,
   0.8392803,
   0};
   Double_t _fex1012[35] = {
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
   Double_t _fey1012[35] = {
   0,
   0,
   0.610593,
   1.074761,
   1.296218,
   0.9337813,
   0.991449,
   0.9227472,
   0.7690966,
   0.9864895,
   0.9937998,
   0.9917744,
   0.9968128,
   0.9822635,
   0.9926531,
   0.9366034,
   0.9931861,
   0.9925913,
   1.005004,
   0.9933467,
   0.9551555,
   0.9932288,
   0.992971,
   1.098378,
   0.990994,
   0.992554,
   0.9913191,
   0.7376713,
   0.9868125,
   0.7512912,
   0.9931725,
   0.9930641,
   0.9856581,
   0.9909316,
   0.7864051};
   TGraphErrors *gre = new TGraphErrors(35,_fx1012,_fy1012,_fex1012,_fey1012);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","",100,0,35.75);
   Graph_Graph1012->SetMinimum(-1.849321);
   Graph_Graph1012->SetMaximum(2.164715);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
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
   
   TPaveText *pt = new TPaveText(0.3102811,0.9341608,0.6897189,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_FT_EFF_Eigen_B_1");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
