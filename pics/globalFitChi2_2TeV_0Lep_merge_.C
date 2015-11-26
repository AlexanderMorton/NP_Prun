void globalFitChi2_2TeV_0Lep_merge_()
{
//=========Macro generated from canvas: c1/Free Nuisance for each Region. 
//=========  (Thu Nov 19 15:15:20 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "Free Nuisance for each Region. ",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-5.067354,37.125,0.5630394);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed1 = new TH1F("NuisanceParameterFreed1","Nuisance Parameter Freed 2TeV_0Lep_merge",33,0,33);
   NuisanceParameterFreed1->SetMinimum(-4.504315);
   NuisanceParameterFreed1->SetMaximum(0);
   NuisanceParameterFreed1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed1->SetLineColor(ci);
   NuisanceParameterFreed1->GetXaxis()->SetTitle("NP Freed");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(1,"alpha_EG_RESOLUTION_ALL");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(2,"alpha_EG_SCALE_ALL");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(3,"alpha_FT_EFF_Eigen_B_1");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(4,"alpha_FT_EFF_Eigen_B_0");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(5,"All");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(6,"alpha_FT_EFF_Eigen_B_2");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(7,"alpha_FT_EFF_Eigen_C_0");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(8,"alpha_FT_EFF_Eigen_C_1");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(9,"alpha_FT_EFF_Eigen_C_2");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(10,"alpha_FT_EFF_Eigen_C_3");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(11,"alpha_FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(12,"alpha_FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(13,"alpha_FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(14,"alpha_FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(15,"alpha_FT_EFF_extrapolation");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(16,"alpha_FT_EFF_extrapolation_from_charm");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(17,"alpha_JET_GroupedNP_1");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(18,"alpha_JET_GroupedNP_2");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(19,"alpha_JET_GroupedNP_3");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(20,"alpha_Luminosity");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(21,"alpha_MUONS_ID");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(22,"alpha_MUONS_MS");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(23,"alpha_MUONS_SCALE");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(24,"alpha_XS_Wb");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(25,"alpha_XS_Wc");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(26,"alpha_XS_Wl");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(27,"alpha_XS_Zb");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(28,"alpha_XS_Zc");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(29,"alpha_XS_Zl");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(30,"alpha_XS_diboson");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(31,"alpha_XS_st");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(32,"alpha_XS_ttbar");
   NuisanceParameterFreed1->GetXaxis()->SetBinLabel(33,"alpha_XS_vh");
   NuisanceParameterFreed1->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed1->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed1->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed1->GetXaxis()->SetTitleOffset(1.4);
   NuisanceParameterFreed1->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed1->GetYaxis()->SetTitle("chi2");
   NuisanceParameterFreed1->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed1->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed1->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed1->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed1->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed1->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed1->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed1->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed1->Draw("hist");
   
   Double_t _fx1[33] = {
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
   32.5};
   Double_t _fy1[33] = {
   -4.504315,
   -4.504217,
   -4.447692,
   -4.3223,
   -2.50108,
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
   TGraph *graph = new TGraph(33,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0,35.7);
   Graph_Graph1->SetMinimum(-4.954746);
   Graph_Graph1->SetMaximum(0.4504315);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("p");
   
   TLegend *leg = new TLegend(0.8,0.9,1,1,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(72);
   leg->SetTextSize(0.02);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","global","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(72);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.1737349,0.9341608,0.8262651,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Nuisance Parameter Freed 2TeV_0Lep_merge");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
