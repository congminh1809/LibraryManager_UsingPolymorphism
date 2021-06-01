#pragma once
#include<iostream>
#include<string>
#include"CDocGia.h"
using namespace std;

// lớp kế thừa lớp cha CDocGia
class CDocGiaTreEM : public CDocGia
{
private:
	string hotenNDD;

public:
	void Input();
	void Output();
	int TinhTienLamThe(); //phương thưc tính tiền làm thẻ
	//CDocGiaTreEM();
	//~CDocGiaTreEM();
};

