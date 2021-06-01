#pragma once
#include<iostream>
#include<string>
#include"CDocGia.h"
using namespace std;

// lớp kế thừa lớp cha CDocGia
class CDocGiaNguoiLon : public CDocGia
{
private:
	string CCCD;

public:
	void Input();
	void Output();
	int TinhTienLamThe(); //phương thưc tính tiền làm thẻ
	//CDocGiaNguoiLon();
	//~CDocGiaNguoiLon();
};

