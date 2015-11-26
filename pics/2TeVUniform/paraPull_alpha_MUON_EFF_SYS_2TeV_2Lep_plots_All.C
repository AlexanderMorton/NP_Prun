void paraPull_alpha_MUON_EFF_SYS_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_MUON_EFF_SYS
//=========  (Sun Nov 22 20:20:45 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_MUON_EFF_SYS",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9746844,37.125,1.046069);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed29 = new TH1F("NuisanceParameterFreed29","alpha_MUON_EFF_SYS",33,0,33);
   NuisanceParameterFreed29->SetMinimum(-0.772609);
   NuisanceParameterFreed29->SetMaximum(0.8439935);
   NuisanceParameterFreed29->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed29->SetLineColor(ci);
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(20,"FT_EFF_extrapolation");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(21,"MUON_EFF_STAT");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(22,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(30,"MUONS_MS");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(31,"XS_Zb");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed29->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed29->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed29->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed29->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed29->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed29->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed29->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed29->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed29->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed29->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed29->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed29->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed29->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed29->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed29->Draw("hist");
   
   Double_t _fx1029[35] = {
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
   Double_t _fy1029[35] = {
   1.22802e-312,
   -0.772609,
   -0.3926334,
   -0.2871484,
   -0.2034436,
   -0.1826984,
   -0.127635,
   -0.1240593,
   -0.1086026,
   -0.06605836,
   -0.05704517,
   -0.05332934,
   -0.04657227,
   -0.03692203,
   -0.03239714,
   -0.0309943,
   -0.0239345,
   -0.01690796,
   -0.001382991,
   0.0001642069,
   0.01021005,
   0.01061383,
   0.0201131,
   0.02030626,
   0.02042574,
   0.02717043,
   0.0400069,
   0.04274836,
   0.04586531,
   0.05142193,
   0.05462722,
   0.05589371,
   0.05782626,
   0.8439935,
   0};
   Double_t _fex1029[35] = {
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
   Double_t _fey1029[35] = {
   0,
   0,
   0.6107583,
   1.072933,
   1.271736,
   0.9369424,
   0.9916745,
   0.9862988,
   0.9273062,
   0.7691231,
   0.9864502,
   0.9937952,
   0.9917384,
   0.9971016,
   0.9817458,
   0.937649,
   0.992671,
   0.9931831,
   0.9925567,
   1.005018,
   0.9933467,
   0.9551045,
   0.9932275,
   0.9928051,
   0.9909911,
   0.9913165,
   1.098273,
   0.9870347,
   0.9931712,
   0.9930639,
   0.9854982,
   0.7379563,
   0.754544,
   0.9909029,
   0.785766};
   TGraphErrors *gre = new TGraphErrors(35,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,0,35.75);
   Graph_Graph1029->SetMinimum(-1.806187);
   Graph_Graph1029->SetMaximum(2.165904);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
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
   
   TPaveText *pt = new TPaveText(0.3268474,0.9341608,0.6731526,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_MUON_EFF_SYS");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
