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

public:
	void Input(); //Phương thức nhập thôgn tin độc giả
	void Output(); //Phương thức xuất thôgn tin độc giả
	//CDocGia();
	//~CDocGia();
};

