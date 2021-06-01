#include "CThuVien.h"


// phương thức nhập thông tin các loại đọc giả
int luachon;
void CThuVien::Input()
{
	while(true)
	{
		system("cls");
		cout << endl << "--------------THU VIEN NHAP--------------";
		cout << endl << "1. Doc gia tre em: ";
		cout << endl << "2. Doc gia nguoi lon";
		cout << endl << "0. Thoat";
		cout << endl << "-------------------END-------------------";
		cout << endl;

		
		cout << endl << "Nhap lua chon: ";
		cin >> luachon;
		if (luachon == 1) 
		{
			CDocGiaTreEM x;
			cout << endl << "Nhap thong tin doc gia tre em: ";
			x.Input();
			ds_docgiatreem.push_back(x); // thêm đôi tượng đọc giả trẻ em vào mảng vector dộc giả 
		}
		else if (luachon == 2)
		{
			CDocGiaNguoiLon x;
			cout << endl << "Nhap thong tin doc gia nguoi lon: ";
			x.Input();
			ds_docgianguoilon.push_back(x); // thêm đôi tượng đọc giả người lớn vào mảng vector dộc giả 
		}
		else if (luachon == 0)
		{
			break;
		}
		else
		{
			cout << endl << "Lua chon khong hop le";
			system("pause");
		}
	}
}


// phương thức nhập thông tin các loại đọc giả
void CThuVien::Output()
{

	while (true)
	{
		system("cls");
		cout << endl << "--------------THU VIEN XUAT--------------";
		cout << endl << "1. Doc gia tre em: ";
		cout << endl << "2. Doc gia nguoi lon";
		cout << endl << "0. Thoat";
		cout << endl << "-------------------END-------------------";
		cout << endl;


		cout << endl << "Nhap lua chon: ";
		cin >> luachon;
		if (luachon == 1)
		{// xuất ds thông tin độc giả trẻ em
			cout << endl << "Danh sach doc gia tre em: ";
			for (int i = 0; i < ds_docgiatreem.size(); i++)
			{
				cout << endl << "Thong tin doc gia tre em thu " << i + 1 << ": ";
				ds_docgiatreem[i].Output();
				cout << endl << "So tien phai tra: " << ds_docgiatreem[i].TinhTienLamThe();
				cout << endl;
				cout << endl;
				system("pause");
				cout << endl;
				cout << endl;
			}
		}
		else if (luachon == 2)
		{
			// xuất ds thông tin độc giả người lớn
			cout << endl << "Danh sach doc gia nguoi lon: ";
			for (int i = 0; i < ds_docgianguoilon.size(); i++)
			{
				cout << endl << "Thong tin doc gia nguoi lon thu " << i + 1 << ": ";
				ds_docgianguoilon[i].Output();
				cout << endl << "So tien phai tra: " << ds_docgianguoilon[i].TinhTienLamThe();
				cout << endl;
				cout << endl;
				system("pause");
				cout << endl;
				cout << endl;
			}
		}
		else if (luachon == 0)
		{
			break;
		}
		else
		{
			cout << endl << "Lua chon khong hop le";
			system("pause");
		}
	}
	

	
}


// phương thức tính tổng tiền làm thẻ
int CThuVien::Tinh_Tong_Tien_Lam_The()
{
	int sum = 0;
	//duyệt ds trẻ em
	for (int  i = 0; i < ds_docgiatreem.size(); i++)
	{
		sum = sum + ds_docgiatreem[i].TinhTienLamThe();
	}
	// duyệt ds người lớn
	for (int i = 0; i < ds_docgianguoilon.size(); i++)
	{
		sum = sum + ds_docgianguoilon[i].TinhTienLamThe();
	}
	return sum;
}