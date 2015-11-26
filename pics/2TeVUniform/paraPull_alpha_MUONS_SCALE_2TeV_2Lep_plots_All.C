void paraPull_alpha_MUONS_SCALE_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_MUONS_SCALE
//=========  (Sun Nov 22 20:20:10 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_MUONS_SCALE",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9751101,37.125,1.047715);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed27 = new TH1F("NuisanceParameterFreed27","alpha_MUONS_SCALE",33,0,33);
   NuisanceParameterFreed27->SetMinimum(-0.7728276);
   NuisanceParameterFreed27->SetMaximum(0.8454325);
   NuisanceParameterFreed27->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed27->SetLineColor(ci);
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(18,"MUON_ISO_STAT");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(19,"FT_EFF_extrapolation");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(20,"MUON_EFF_STAT");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(21,"MUON_EFF_SYS");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(30,"XS_Zb");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(31,"MUONS_MS");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed27->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed27->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed27->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed27->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed27->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed27->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed27->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed27->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed27->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed27->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed27->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed27->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed27->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed27->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed27->Draw("hist");
   
   Double_t _fx1027[35] = {
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
   Double_t _fy1027[35] = {
   1.22802e-312,
   -0.7728276,
   -0.3923858,
   -0.2903318,
   -0.2046793,
   -0.1826765,
   -0.1278662,
   -0.1245201,
   -0.1084633,
   -0.06589416,
   -0.05695201,
   -0.05334354,
   -0.04667902,
   -0.03723156,
   -0.03227382,
   -0.0310688,
   -0.02395029,
   -0.01700173,
   0.0001641291,
   0.01040389,
   0.0106024,
   0.01811657,
   0.01990974,
   0.02028654,
   0.02038594,
   0.02704966,
   0.04008817,
   0.04269076,
   0.04584804,
   0.05101903,
   0.05461571,
   0.05592927,
   0.05761244,
   0.8454325,
   0};
   Double_t _fex1027[35] = {
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
   Double_t _fey1027[35] = {
   0,
   0,
   0.6107623,
   1.07306,
   1.266929,
   0.9366595,
   0.9916557,
   0.9863044,
   0.9268238,
   0.7691264,
   0.986452,
   0.9937948,
   0.9917413,
   0.9970735,
   0.9817766,
   0.9376103,
   0.9926704,
   0.9931834,
   0.9925589,
   0.9933467,
   0.9551136,
   0.9932276,
   0.9929662,
   0.9927848,
   0.991316,
   0.9909915,
   1.098099,
   0.9870168,
   0.9931712,
   0.9930639,
   0.9855099,
   0.7541245,
   0.7380354,
   0.9909036,
   0.7858299};
   TGraphErrors *gre = new TGraphErrors(35,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","",100,0,35.75);
   Graph_Graph1027->SetMinimum(-1.802403);
   Graph_Graph1027->SetMaximum(2.167131);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1027->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1027->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
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
   
   TPaveText *pt = new TPaveText(0.3323695,0.9341608,0.6676305,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_MUONS_SCALE");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
