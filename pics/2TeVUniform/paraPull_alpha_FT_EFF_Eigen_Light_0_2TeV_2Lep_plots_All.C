void paraPull_alpha_FT_EFF_Eigen_Light_0_2TeV_2Lep_plots_All()
{
//=========Macro generated from canvas: c1/alpha_FT_EFF_Eigen_Light_0
//=========  (Sun Nov 22 20:17:35 2015) by ROOT version6.02/12
   TCanvas *c1 = new TCanvas("c1", "alpha_FT_EFF_Eigen_Light_0",0,22,1000,600);
   gStyle->SetOptStat(0);
   c1->Range(-4.125,-0.8188808,37.125,0.1593265);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *NuisanceParameterFreed18 = new TH1F("NuisanceParameterFreed18","alpha_FT_EFF_Eigen_Light_0",33,0,33);
   NuisanceParameterFreed18->SetMinimum(-0.7210601);
   NuisanceParameterFreed18->SetMaximum(0.06150575);
   NuisanceParameterFreed18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NuisanceParameterFreed18->SetLineColor(ci);
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(1,"XS_ttbar");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(2,"Luminosity");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(3,"EG_SCALE_ALL");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(4,"XS_Zc");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(5,"XS_Zb");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(6,"XS_st");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(7,"XS_Zl");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(8,"FT_EFF_Eigen_B_1");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(9,"MUONS_ID");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(10,"EL_EFF_ID_TotalCorrUncertainty");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(11,"FT_EFF_Eigen_C_3");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(12,"MUON_EFF_TrigSystUncertainty");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(13,"FT_EFF_Eigen_B_0");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(14,"FT_EFF_Eigen_C_0");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(15,"FT_EFF_Eigen_C_1");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(16,"EL_EFF_Reco_TotalCorrUncertainty");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(17,"EL_EFF_Iso_TotalCorrUncertainty");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(18,"FT_EFF_extrapolation");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(19,"FT_EFF_Eigen_B_2");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(20,"MUON_ISO_SYS");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(21,"MUONS_SCALE");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(22,"MUON_ISO_STAT");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(23,"MUON_EFF_TrigStatUncertainty");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(24,"MUON_EFF_STAT");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(25,"MUON_EFF_SYS");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(26,"FT_EFF_Eigen_Light_1");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(27,"EG_RESOLUTION_ALL");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(28,"FT_EFF_Eigen_Light_4");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(29,"MUONS_MS");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(30,"FT_EFF_Eigen_Light_3");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(31,"XS_diboson");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(32,"FT_EFF_Eigen_Light_2");
   NuisanceParameterFreed18->GetXaxis()->SetBinLabel(33,"FT_EFF_Eigen_C_2");
   NuisanceParameterFreed18->GetXaxis()->SetLabelFont(42);
   NuisanceParameterFreed18->GetXaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed18->GetXaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed18->GetXaxis()->SetTitleFont(42);
   NuisanceParameterFreed18->GetYaxis()->SetTitle("#theta_{fit} - #theta_{initial}/#Delta#theta");
   NuisanceParameterFreed18->GetYaxis()->SetLabelFont(42);
   NuisanceParameterFreed18->GetYaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed18->GetYaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed18->GetYaxis()->SetTitleFont(42);
   NuisanceParameterFreed18->GetZaxis()->SetLabelFont(42);
   NuisanceParameterFreed18->GetZaxis()->SetLabelSize(0.035);
   NuisanceParameterFreed18->GetZaxis()->SetTitleSize(0.035);
   NuisanceParameterFreed18->GetZaxis()->SetTitleFont(42);
   NuisanceParameterFreed18->Draw("hist");
   
   Double_t _fx1018[35] = {
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
   Double_t _fy1018[35] = {
   1.22802e-312,
   -0.7210601,
   -0.4141877,
   -0.3923845,
   -0.3296768,
   -0.1894262,
   -0.1830812,
   -0.1267046,
   -0.110397,
   -0.09354286,
   -0.08518807,
   -0.06086314,
   -0.05512998,
   -0.05130742,
   -0.04546068,
   -0.04285625,
   -0.03032708,
   -0.02510384,
   -0.01746278,
   -0.01662377,
   -0.004992727,
   -0.001296707,
   0.0001684646,
   0.002942687,
   0.00773295,
   0.01150263,
   0.01522992,
   0.03359179,
   0.03541446,
   0.03769599,
   0.03996163,
   0.04125911,
   0.05017321,
   0.06150575,
   0};
   Double_t _fex1018[35] = {
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
   Double_t _fey1018[35] = {
   0,
   0,
   0.6129886,
   0.905098,
   1.067151,
   0.8727897,
   0.6676919,
   0.9925382,
   0.994778,
   0.9854409,
   0.7692631,
   0.9789005,
   0.9938153,
   0.9917281,
   0.9419846,
   2.059698,
   0.9858765,
   0.9923573,
   0.993189,
   0.9562804,
   0.9926142,
   0.9838723,
   1.00467,
   0.9933467,
   0.9933711,
   0.9932128,
   0.992909,
   0.9916333,
   1.10129,
   0.9931419,
   0.7368478,
   0.9930849,
   0.9872759,
   0.990744,
   0.990919};
   TGraphErrors *gre = new TGraphErrors(35,_fx1018,_fy1018,_fex1018,_fey1018);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","",100,0,35.75);
   Graph_Graph1018->SetMinimum(-2.514494);
   Graph_Graph1018->SetMaximum(2.428781);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1018->SetLineColor(ci);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
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
   
   TPaveText *pt = new TPaveText(0.2831727,0.9341608,0.7168273,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("alpha_FT_EFF_Eigen_Light_0");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
