#pragma once

#include<iostream>
#include<string>
#include"CDocGia.h"
#include"CDocGiaTreEM.h";
#include"CDocGiaNguoiLon.h"
#include<vector>

using namespace std;

class CThuVien
{
private:
	vector<CDocGiaTreEM> ds_docgiatreem;
	vector<CDocGiaNguoiLon> ds_docgianguoilon;
public:
	void Input();
	void Output();
	int Tinh_Tong_Tien_Lam_The();
	//CThuVien();
	//~CThuVien();
};

