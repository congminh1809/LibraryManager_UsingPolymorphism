// LibraryManager.cpp 
//

#include <iostream>
//#include"CDocGia.h"
//#include"CDocGiaTreEM.h"
//#include"CDocGiaNguoiLon.h"
#include"CThuVien.h"
using namespace std;


int main()
{

	int choice;
	CThuVien* x = new CThuVien;
	while (true)
	{
		system("cls");
		cout << endl << "--------------THU VIEN CUA BE--------------";
		cout << endl << "1. NHAP";
		cout << endl << "2. XUAT";
		cout << endl << "3. TONG SO TIEN";
		cout << endl << "0. Thoat";
		cout << endl << "--------------------END--------------------";
		cout << endl;


		cout << endl << "Nhap lua chon: ";
		cin >> choice;
		if (choice == 1)
		{
			x->Input();
		}
		else if (choice == 2)
		{
			x->Output();
			system("pause");
		}
		else if (choice == 3)
		{
			cout << endl << "Tong so tien lam the:" << x->Tinh_Tong_Tien_Lam_The();
			cout << endl;
			cout << endl;
			system("pause");
		}
		else if (choice == 0)
		{
			break;
		}
		else
		{
			cout << endl << "Lua chon khong hop le";
			system("pause");
		}
	}
    delete x;

    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


