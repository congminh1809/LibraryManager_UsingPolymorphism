#include "CDocGiaNguoiLon.h"

// phương thức nhập thông tin độc giả người lớn
void CDocGiaNguoiLon::Input()
{
	// gọi lại phương thức nhập ở class cha
	CDocGia::Input();


	cin.ignore();
	cout << endl << "Nhap so can cuoc cong dan: ";
	getline(cin, CCCD);
}


// phương thức xuất thông tin độc giả người lớn
void CDocGiaNguoiLon::Output()
{
	// gọi lại phương thức xuất ở class cha
	CDocGia::Output();
	cout << endl << "So can cuoc cong dan: " << CCCD;
}

//phương thức tính tiền ng lớn
int CDocGiaNguoiLon::TinhTienLamThe()
{
	return sothangcohieuluc * 10000;
}
