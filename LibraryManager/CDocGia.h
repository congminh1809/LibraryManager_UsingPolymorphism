#pragma once //tránh tình trạng đụng độ thư viện, trong mọi tình huống chỉ có 1 thư viện được tạo ra ở tất cả các file
#include<iostream>
#include<string>
using namespace std;
class CDocGia //base class
{
protected:
	string hoten;
	string ngaylapthe; //dd/mm/yyyy
	int sothangcohieuluc;
	bool KT; //true: trẻ em; false: người lớn

public:
	virtual void Input(); //Phương thức ảo nhập thôgn tin độc giả
	virtual void Output(); //Phương thức ảo xuất thôgn tin độc giả
	virtual int TinhTienLamThe() = 0; //khai báo hương thức thuần ảo 

	// GETTER-SETTER KT
	bool Getter_KT()
	{
		return KT;
	}
	void Setter_KT(bool kt)
	{
		KT = kt;
	}
	//CDocGia();
	//~CDocGia();
};

