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
	/*vector<CDocGiaTreEM> ds_docgiatreem;
	vector<CDocGiaNguoiLon> ds_docgianguoilon;*/
	vector<CDocGia*> ds_docgia; //khai báo mảng 1 chiều chứa lớp cha - vì có virtual nên nó có thể đa hình sang từng lớp con tương ứng

public:
	void Input();
	void Output();
	int Tinh_Tong_Tien_Lam_The();
	//CThuVien();
	//~CThuVien();
};

