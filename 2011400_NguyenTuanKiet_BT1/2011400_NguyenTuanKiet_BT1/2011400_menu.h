void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned int n);


void XuatMenu()
{
	cout << "\n+--------------------------------------------------------------+";
	cout << "\n|                        CHON CHUC NANG                        |";
	cout << "\n+--------------------------------------------------------------+";
	cout << "\n|  0. Thoat khoi chuong trinh                                  |";
	cout << "\n|  1. Xuat n so nguyen duong dau tien                          |";
	cout << "\n|  2. Dem so luong cac chu so cua n                            |";
	cout << "\n|  3. Xac dinh chu so dau tien trong n                         |";
	cout << "\n|  4. Tinh tong cac chu so trong n                             |";
	cout << "\n+--------------------------------------------------------------+";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0.." << soMenu << "] de chon chuc nang: stt = ";
		cin >> stt;
		if (soMenu >= 0 && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, unsigned int n)
{
	system("CLS");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat khoi chuong trinh";
		break;
	case 1:
		cout << "\n1. Xuat n so nguyen duong dau tien";
		cout << "\nn = " << n << "\n\n";
		N_SoNguyenDuongDauTien(n);
		break;
	case 2:
		cout << "\n2. Dem so luong cac chu so cua n";
		cout << "\nn = " << n << "\n\n";
		cout << "So luong cac chu so cua n la: " << DemChuSo(n);
		break;
	case 3:
		cout << "\n3. Xac dinh chu so dau tien trong n";
		cout << "\nn = " << n << "\n\n";
		cout << "Chu so dau tien la: " << ChuSoDauTien(n);
		break;
	case 4:
		cout << "\n4. Tinh tong cac chu so trong n";
		cout << "\nn = " << n << "\n\n";
		cout << "Tong = " << TinhTong(n);
		break;
	}
	_getch();
}