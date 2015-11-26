void paraPull_alpha_XS_Zb_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_XS_Zb
//=========  (Sun Nov 22 20:22:13 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_XS_Zb",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9968511,37.125,1.115186);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed34 = new TH1F("NuisanceParameterFreed34","alpha_XS_Zb",33,0,33);
   NuisanceParameterFreed34->SetMinimum(-0.7856474);
   NuisanceParameterFreed34->SetMaximum(0.9039822);
   NuisanceParameterFreed34->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed34->SetLineColor(ci);
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(3,"Luminosity");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(4,"XS_st");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(5,"XS_Zc");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(7,"MUONS_ID");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(8,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(10,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(11,"XS_Zl");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(12,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(13,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(14,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(21,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(30,"MUONS_MS");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(31,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed34->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed34->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed34->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed34->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed34->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed34->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed34->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed34->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed34->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed34->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed34->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed34->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed34->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed34->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed34->Draw("hist");
   
   Double_t _fx1034[35] = {
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
   Double_t _fy1034[35] = {
   1.22802e-312,
   -0.7856474,
   -0.3882291,
   -0.2307293,
   -0.1827523,
   -0.1439811,
   -0.1244569,
   -0.1075875,
   -0.06225083,
   -0.0555615,
   -0.05312048,
   -0.04803502,
   -0.04540207,
   -0.030482,
   -0.02409261,
   -0.02347692,
   -0.01904201,
   -0.001337075,
   0.0001621201,
   0.007506978,
   0.01024885,
   0.01686499,
   0.01707106,
   0.0192959,
   0.02056315,
   0.02394071,
   0.04132823,
   0.04242187,
   0.04566485,
   0.04729038,
   0.04782543,
   0.0546542,
   0.4554441,
   0.9039822,
   0};
   Double_t _fex1034[35] = {
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
   Double_t _fey1034[35] = {
   0,
   0,
   0.6080594,
   1.074805,
   0.9043673,
   0.9911399,
   0.9037862,
   0.9863426,
   0.769617,
   0.9860253,
   0.9937267,
   0.9917219,
   0.9965703,
   0.9779192,
   0.9924446,
   0.9931815,
   0.9296796,
   0.9923345,
   1.004837,
   0.9933467,
   0.9554182,
   0.9932269,
   0.9919795,
   0.9929359,
   0.9912196,
   0.990831,
   1.094547,
   0.985978,
   0.9931374,
   0.9930622,
   0.9837882,
   0.7391315,
   0.9907939,
   1.013223,
   0.7500338};
   TGraphErrors *gre = new TGraphErrors(35,_fx1034,_fy1034,_fex1034,_fey1034);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1034 = new TH1F("Graph_Graph1034","",100,0,35.75);
   Graph_Graph1034->SetMinimum(-1.627808);
   Graph_Graph1034->SetMaximum(2.239479);
   Graph_Graph1034->SetDirectory(0);
   Graph_Graph1034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1034->SetLineColor(ci);
   Graph_Graph1034->GetXaxis()->SetLabelFont(42);
   Graph_Graph1034->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1034->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1034->GetXaxis()->SetTitleFont(42);
   Graph_Graph1034->GetYaxis()->SetLabelFont(42);
   Graph_Graph1034->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1034->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1034->GetYaxis()->SetTitleFont(42);
   Graph_Graph1034->GetZaxis()->SetLabelFont(42);
   Graph_Graph1034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1034);
   
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
   
   TPaveText *pt = new TPaveText(0.3986345,0.9341608,0.6013655,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_XS_Zb");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
