void paraPull_alpha_EL_EFF_Reco_TotalCorrUncertainty_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_EL_EFF_Reco_TotalCorrUncertainty
//=========  (Sun Nov 22 20:15:12 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_EL_EFF_Reco_TotalCorrUncertainty",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9752688,37.125,1.049166);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed10 = new TH1F("NuisanceParameterFreed10","alpha_EL_EFF_Reco_TotalCorrUncertainty",33,0,33);
   NuisanceParameterFreed10->SetMinimum(-0.7728252);
   NuisanceParameterFreed10->SetMaximum(0.8467228);
   NuisanceParameterFreed10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed10->SetLineColor(ci);
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(17,"MUONS_SCALE");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed10->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed10->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed10->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed10->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed10->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed10->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed10->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed10->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed10->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed10->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed10->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed10->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed10->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed10->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed10->Draw("hist");
   
   Double_t _fx1010[35] = {
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
   Double_t _fy1010[35] = {
   1.22802e-312,
   -0.7728252,
   -0.3920699,
   -0.2923021,
   -0.2063588,
   -0.1826388,
   -0.1278504,
   -0.1250226,
   -0.1082752,
   -0.06572493,
   -0.05688662,
   -0.05334311,
   -0.04688065,
   -0.03780236,
   -0.03180506,
   -0.03107619,
   -0.02396633,
   -0.001378255,
   0.000164019,
   0.01034615,
   0.01059092,
   0.01806597,
   0.01971767,
   0.02021972,
   0.02042838,
   0.02676922,
   0.04014103,
   0.04266567,
   0.04583729,
   0.0505789,
   0.0533509,
   0.0563938,
   0.05746065,
   0.8467228,
   0};
   Double_t _fex1010[35] = {
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
   Double_t _fey1010[35] = {
   0,
   0,
   0.6107793,
   1.073234,
   1.264744,
   0.9363255,
   0.9916369,
   0.9863088,
   0.9263022,
   0.7691319,
   0.9864529,
   0.9937947,
   0.9917444,
   0.9970468,
   0.9818021,
   0.9375881,
   0.9926697,
   0.9931837,
   1.005007,
   0.9933467,
   0.9551186,
   0.9932277,
   0.9929664,
   0.9927642,
   0.9913161,
   0.9909912,
   1.09799,
   0.9869984,
   0.9931711,
   0.9930638,
   0.9855163,
   0.7535351,
   0.7380976,
   0.9909054,
   0.7857935};
   TGraphErrors *gre = new TGraphErrors(35,_fx1010,_fy1010,_fex1010,_fey1010);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","",100,0,35.75);
   Graph_Graph1010->SetMinimum(-1.801976);
   Graph_Graph1010->SetMaximum(2.168501);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
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
   
   TPaveText *pt = new TPaveText(0.1923092,0.9341608,0.8076908,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_EL_EFF_Reco_TotalCorrUncertainty");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
