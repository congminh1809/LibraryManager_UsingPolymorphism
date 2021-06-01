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

		CDocGia* x; //khai báo con trỏ lớp cha
		if (luachon == 1) 
		{
			x = new CDocGiaTreEM;
			cout << endl << "Nhap thong tin doc gia tre em: ";
			x->Input();
			x->Setter_KT(true); //đánh dấu đây là độc giả trẻ em
			ds_docgia.push_back(x); // thêm đôi tượng đọc giả trẻ em vào mảng vector độc giả 
		}
		else if (luachon == 2)
		{
			x = new CDocGiaNguoiLon;
			cout << endl << "Nhap thong tin doc gia nguoi lon: ";
			x->Input();
			x->Setter_KT(false); //đánh dấu đây là độc giả người lớn 
			ds_docgia.push_back(x); // thêm đôi tượng đọc giả người lớn vào mảng vector độc giả 
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


// phương thức nhập thông tin các loại độc giả
void CThuVien::Output()
{

	while (true)
	{
		system("cls");
		cout << endl << "--------------THU VIEN XUAT--------------";
		cout << endl << "1. Xuat: ";
		//cout << endl << "2. Doc gia nguoi lon";
		cout << endl << "0. Thoat";
		cout << endl << "-------------------END-------------------";
		cout << endl;


		cout << endl << "Nhap lua chon: ";
		cin >> luachon;
		if (luachon == 1)
		{// xuất ds thông tin độc giả 
			cout << endl << "Danh sach doc gia: ";
			for (int i = 0; i < ds_docgia.size(); i++)
			{
				if (ds_docgia[i]->Getter_KT()==true)
				{
					cout << endl << "Thong tin doc gia tre em thu " << i + 1 << ": ";
					ds_docgia[i]->Output();
					cout << endl << "So tien phai tra: " << ds_docgia[i]->TinhTienLamThe();
					cout << endl;
					cout << endl;
					//system("pause");
					cout << endl;
					cout << endl;
				}
				else
				{
					cout << endl << "Thong tin doc gia nguoi lon thu " << i + 1 << ": ";
					ds_docgia[i]->Output();
					cout << endl << "So tien phai tra: " << ds_docgia[i]->TinhTienLamThe();
					cout << endl;
					cout << endl;
					//system("pause");
					cout << endl;
					cout << endl;
				}
			}
			system("pause");
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
	//duyệt ds độc gải
	for (int  i = 0; i < ds_docgia.size(); i++)
	{
		sum = sum + ds_docgia[i]->TinhTienLamThe();
	}
	//// duyệt ds người lớn
	//for (int i = 0; i < ds_docgianguoilon.size(); i++)
	//{
	//	sum = sum + ds_docgianguoilon[i].TinhTienLamThe();
	//}
	return sum;
}