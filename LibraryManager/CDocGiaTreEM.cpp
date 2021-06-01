#include "CDocGiaTreEM.h"

// phương thức nhập thông tin độc giả trẻ em
void CDocGiaTreEM::Input()
{
	// gọi lại phương thức nhập ở class cha
	CDocGia::Input();


	cin.ignore();
	cout << endl << "Nhap ho ten nguoi dai dien: ";
	getline(cin, hotenNDD);
}
	

// phương thức xuất thông tin độc giả trẻ em
void CDocGiaTreEM::Output()
{
	// gọi lại phương thức xuất ở class cha
	CDocGia::Output();
	cout << endl << "Ho ten nguoi dai dien: " << hotenNDD;
}

//phương thức tính tiền
int CDocGiaTreEM::TinhTienLamThe()
{
	return sothangcohieuluc * 5000;
}