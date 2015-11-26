void paraPull_All_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/All
//=========  (Sun Nov 22 20:13:39 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "All",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.25,-0.975076,38.25,1.047601);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed5 = new TH1F("NuisanceParameterFreed5","All",34,0,34);
   NuisanceParameterFreed5->SetMinimum(-0.7728083);
   NuisanceParameterFreed5->SetMaximum(0.8453335);
   NuisanceParameterFreed5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed5->SetLineColor(ci);
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(20,"FT_EFF_extrapolation");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(21,"MUON_EFF_STAT");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(25,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(26,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(27,"XS_diboson");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(29,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(30,"MUON_ISO_SYS");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(31,"XS_Zb");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(32,"MUONS_MS");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed5->GetXaxis()->SetBinLabel(34,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed5->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed5->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed5->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed5->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed5->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed5->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed5->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed5->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed5->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed5->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed5->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed5->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed5->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed5->Draw("hist");
   
   Double_t _fx1005[36] = {
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
   33.5,
   0};
   Double_t _fy1005[36] = {
   1.22802e-312,
   -0.7728083,
   -0.3924063,
   -0.2900793,
   -0.2045761,
   -0.182678,
   -0.1278496,
   -0.1244826,
   -0.1084729,
   -0.06590649,
   -0.05695882,
   -0.05334271,
   -0.04666982,
   -0.03720239,
   -0.03228407,
   -0.03106314,
   -0.02394902,
   -0.01699309,
   -0.001380726,
   0.0001641373,
   0.01038912,
   0.01060325,
   0.01811933,
   0.01992572,
   0.02029619,
   0.02038135,
   0.02706396,
   0.0400807,
   0.0426943,
   0.04584886,
   0.05104907,
   0.05471417,
   0.05583189,
   0.05762857,
   0.8453335,
   0};
   Double_t _fex1005[36] = {
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
   0,
   0};
   Double_t _fey1005[36] = {
   0,
   0,
   0.610762,
   1.073049,
   1.267247,
   0.9366813,
   0.9916572,
   0.986304,
   0.9268554,
   0.769126,
   0.9864518,
   0.9937948,
   0.9917411,
   0.9970757,
   0.9817739,
   0.9376143,
   0.9926705,
   0.9931834,
   0.9925587,
   1.005012,
   0.9933467,
   0.9551129,
   0.9932276,
   0.9929661,
   0.9927865,
   0.991316,
   0.9909915,
   1.098115,
   0.9870183,
   0.9931712,
   0.9930639,
   0.985509,
   0.754146,
   0.7380292,
   0.9909035,
   0.7858257};
   TGraphErrors *gre = new TGraphErrors(36,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,0,36.85);
   Graph_Graph1005->SetMinimum(-1.802629);
   Graph_Graph1005->SetMaximum(2.167043);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
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
   
   TPaveText *pt = new TPaveText(0.4719277,0.94,0.5280723,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("All");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
