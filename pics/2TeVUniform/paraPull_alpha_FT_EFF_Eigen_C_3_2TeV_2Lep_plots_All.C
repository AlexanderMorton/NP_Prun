void paraPull_alpha_FT_EFF_Eigen_C_3_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_Eigen_C_3
//=========  (Sun Nov 22 20:17:14 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_Eigen_C_3",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.97413,37.125,1.043432);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed17 = new TH1F("NuisanceParameterFreed17","alpha_FT_EFF_Eigen_C_3",33,0,33);
   NuisanceParameterFreed17->SetMinimum(-0.7723738);
   NuisanceParameterFreed17->SetMaximum(0.8416761);
   NuisanceParameterFreed17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed17->SetLineColor(ci);
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(10,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(11,"XS_Zl");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(12,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(13,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(15,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(22,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(30,"MUONS_MS");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(31,"XS_Zb");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed17->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed17->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed17->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed17->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed17->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed17->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed17->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed17->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed17->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed17->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed17->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed17->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed17->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed17->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed17->Draw("hist");
   
   Double_t _fx1017[35] = {
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
   Double_t _fy1017[35] = {
   1.22802e-312,
   -0.7723738,
   -0.3938967,
   -0.2760603,
   -0.1997076,
   -0.1828227,
   -0.127254,
   -0.1258151,
   -0.1100029,
   -0.06614963,
   -0.05335398,
   -0.04546415,
   -0.03693599,
   -0.03399826,
   -0.03088537,
   -0.02390729,
   -0.01678237,
   -0.00138937,
   0.0001644672,
   0.01008739,
   0.01058841,
   0.01814739,
   0.0201193,
   0.02045311,
   0.02092299,
   0.02866482,
   0.03960148,
   0.04295978,
   0.04593968,
   0.05255414,
   0.05351851,
   0.05795576,
   0.05850028,
   0.8416761,
   0};
   Double_t _fex1017[35] = {
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
   Double_t _fey1017[35] = {
   0,
   0,
   0.6107521,
   1.072192,
   1.296179,
   0.9373548,
   0.991689,
   0.9862909,
   0.9277813,
   0.769138,
   0.9864578,
   0.9917361,
   0.9971288,
   0.981755,
   0.9376388,
   0.9926713,
   0.9931829,
   0.9925569,
   1.005027,
   0.9933467,
   0.9551006,
   0.9932275,
   0.9929665,
   0.9909906,
   0.992824,
   0.9913171,
   1.098019,
   0.9870508,
   0.9931714,
   0.993064,
   0.985498,
   0.7378161,
   0.7553161,
   0.990907,
   0.7859798};
   TGraphErrors *gre = new TGraphErrors(35,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,0,35.75);
   Graph_Graph1017->SetMinimum(-1.828734);
   Graph_Graph1017->SetMaximum(2.16543);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
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
   TText *AText = pt->AddText("alpha_FT_EFF_Eigen_C_3");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
