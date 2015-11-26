void paraPull_alpha_XS_diboson_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_XS_diboson
//=========  (Sun Nov 22 20:23:05 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_XS_diboson",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9750985,37.125,1.048717);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed37 = new TH1F("NuisanceParameterFreed37","alpha_XS_diboson",33,0,33);
   NuisanceParameterFreed37->SetMinimum(-0.7727169);
   NuisanceParameterFreed37->SetMaximum(0.8463358);
   NuisanceParameterFreed37->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed37->SetLineColor(ci);
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(20,"FT_EFF_extrapolation");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(21,"MUON_EFF_STAT");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(25,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(26,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed37->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed37->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed37->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed37->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed37->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed37->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed37->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed37->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed37->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed37->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed37->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed37->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed37->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed37->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed37->Draw("hist");
   
   Double_t _fx1037[35] = {
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
   Double_t _fy1037[35] = {
   1.22802e-312,
   -0.7727169,
   -0.3904923,
   -0.2938249,
   -0.2071186,
   -0.1826607,
   -0.127706,
   -0.1233055,
   -0.1075465,
   -0.06582722,
   -0.05686135,
   -0.05331097,
   -0.04748329,
   -0.03754823,
   -0.03125893,
   -0.03097052,
   -0.02397542,
   -0.01716442,
   -0.00137767,
   0.0001641496,
   0.010502,
   0.01060722,
   0.01807532,
   0.01980872,
   0.02014415,
   0.02033472,
   0.03097352,
   0.04262179,
   0.04583951,
   0.0507103,
   0.05474442,
   0.05542957,
   0.05731845,
   0.8463358,
   0};
   Double_t _fex1037[35] = {
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
   Double_t _fey1037[35] = {
   0,
   0,
   0.6107959,
   1.074278,
   1.262415,
   0.9360204,
   0.9916254,
   0.9862998,
   0.9260763,
   0.7692585,
   0.9864546,
   0.9937947,
   0.9917451,
   0.9970363,
   0.9817992,
   0.9374583,
   0.9926677,
   0.9931837,
   0.992561,
   1.005014,
   0.9933467,
   0.9551602,
   0.9932281,
   0.9929678,
   0.9927443,
   0.9913146,
   0.9909907,
   1.098081,
   0.993171,
   0.9930639,
   0.9855118,
   0.7531478,
   0.738347,
   0.9909091,
   0.7858191};
   TGraphErrors *gre = new TGraphErrors(35,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","",100,0,35.75);
   Graph_Graph1037->SetMinimum(-1.800211);
   Graph_Graph1037->SetMaximum(2.167923);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
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
   
   TPaveText *pt = new TPaveText(0.3604819,0.9341608,0.6395181,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_XS_diboson");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
