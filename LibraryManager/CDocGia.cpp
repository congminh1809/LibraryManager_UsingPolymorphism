#include "CDocGia.h"

// <kiểu dữ liệu><tên lớp>::<thuộc tính hay phương thức cần gọi ra>
// "::" ==> thuộc

// phương thức nhập thông tin độc giả
void CDocGia::Input()
{
	cin.ignore();
	cout << endl << "Nhap ho ten doc gia: ";
	getline(cin, hoten);

	//cin.ignore();
	cout << endl << "Nhap ngay lap the(dd/mm/yyyy): ";
	getline(cin, ngaylapthe);

	//cin.ignore();
	cout << endl << "Nhap so thang co hieu luc: ";
	cin >> sothangcohieuluc;
}

// phương thức xuất thông tin độc giả
void CDocGia::Output()
{
	cout << endl << "Ho ten doc gia: " << hoten;
	cout << endl << "Ngay lap the (dd/mm/yyyy): " << ngaylapthe;
	cout << endl << "So thang co hieu luc: " << sothangcohieuluc;

}
