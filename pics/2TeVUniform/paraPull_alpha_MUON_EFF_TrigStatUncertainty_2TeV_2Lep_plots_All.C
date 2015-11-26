void paraPull_alpha_MUON_EFF_TrigStatUncertainty_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_MUON_EFF_TrigStatUncertainty
//=========  (Sun Nov 22 20:21:02 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_MUON_EFF_TrigStatUncertainty",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.9739257,37.125,1.042193);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed30 = new TH1F("NuisanceParameterFreed30","alpha_MUON_EFF_TrigStatUncertainty",33,0,33);
   NuisanceParameterFreed30->SetMinimum(-0.7723139);
   NuisanceParameterFreed30->SetMaximum(0.8405807);
   NuisanceParameterFreed30->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed30->SetLineColor(ci);
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(2,"EG_SCALE_ALL");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(3,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(4,"Luminosity");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(5,"XS_st");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(6,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(7,"XS_Zc");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(8,"MUONS_ID");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(9,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(10,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(11,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(12,"XS_Zl");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(13,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(16,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(17,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(18,"MUONS_SCALE");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(19,"MUON_ISO_STAT");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(20,"FT_EFF_extrapolation");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(21,"MUON_EFF_STAT");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(22,"MUON_EFF_SYS");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(23,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(24,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(25,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(26,"XS_diboson");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(27,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(29,"MUON_ISO_SYS");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(30,"MUONS_MS");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(31,"XS_Zb");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed30->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_Light_0");
   NuisanceParameterFreed30->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed30->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed30->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed30->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed30->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed30->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed30->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed30->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed30->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed30->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed30->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed30->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed30->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed30->Draw("hist");
   
   Double_t _fx1030[35] = {
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
   Double_t _fy1030[35] = {
   1.22802e-312,
   -0.7723139,
   -0.3939064,
   -0.2742043,
   -0.1990802,
   -0.1827176,
   -0.1271146,
   -0.1248156,
   -0.1101724,
   -0.06622903,
   -0.05735831,
   -0.05334931,
   -0.04542137,
   -0.03696603,
   -0.03385904,
   -0.03085541,
   -0.02390688,
   -0.01677882,
   -0.001390461,
   0.0001644614,
   0.009978949,
   0.01058981,
   0.01814274,
   0.02000914,
   0.02101021,
   0.02872686,
   0.03960763,
   0.04301411,
   0.04595819,
   0.05277978,
   0.05285869,
   0.05830536,
   0.05852211,
   0.8405807,
   0};
   Double_t _fex1030[35] = {
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
   Double_t _fey1030[35] = {
   0,
   0,
   0.6105629,
   1.072185,
   1.299908,
   0.9372887,
   0.9916846,
   0.9862909,
   0.9279511,
   0.7691262,
   0.986454,
   0.9937975,
   0.9917355,
   0.9971309,
   0.981745,
   0.9376351,
   0.9926708,
   0.9931828,
   0.9925562,
   1.005033,
   0.9933467,
   0.9550884,
   0.9932275,
   0.9929663,
   0.9909895,
   0.9913162,
   1.098106,
   0.9870465,
   0.9931714,
   0.9930639,
   0.9854915,
   0.7377244,
   0.7553066,
   0.9909063,
   0.785735};
   TGraphErrors *gre = new TGraphErrors(35,_fx1030,_fy1030,_fex1030,_fey1030);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1030 = new TH1F("Graph_Graph1030","",100,0,35.75);
   Graph_Graph1030->SetMinimum(-1.832035);
   Graph_Graph1030->SetMaximum(2.164535);
   Graph_Graph1030->SetDirectory(0);
   Graph_Graph1030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1030->SetLineColor(ci);
   Graph_Graph1030->GetXaxis()->SetLabelFont(42);
   Graph_Graph1030->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1030->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1030->GetXaxis()->SetTitleFont(42);
   Graph_Graph1030->GetYaxis()->SetLabelFont(42);
   Graph_Graph1030->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1030->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1030->GetYaxis()->SetTitleFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelFont(42);
   Graph_Graph1030->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1030->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1030);
   
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
   
   TPaveText *pt = new TPaveText(0.2204217,0.9341608,0.7795783,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_MUON_EFF_TrigStatUncertainty");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
