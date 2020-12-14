void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n);
// ======================================

void XuatMenu()
{
	cout << "\n+--------------------------------------------------------------+";
	cout << "\n|                        CHON CHUC NANG                        |";
	cout << "\n+--------------------------------------------------------------+";
	cout << "\n|  0. Thoat khoi chuong trinh                                  |";
	cout << "\n|  1. Nhap day so                                              |";
	cout << "\n|  2. Xuat day so                                              |";
	cout << "\n|  3. Tinh tong cac phan tu trong day so                       |";
	cout << "\n|  4. Tinh gia tri nho nhat cua day so                         |";
	cout << "\n|  5. Tim vi tri cuoi cung ma gia tri nho nhat xuat hien       |";
	cout << "\n|  6. Sap xep day so theo de bai                               |";
	cout << "\n+--------------------------------------------------------------+";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\n=> Nhap 1 so trong khoang[0.." << soMenu << "]: de chon chuc nang, stt = ";
		cin >> stt;
		if (stt >= 0 && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, DaySo a, int &n)
{
	int kq;

	system("CLS");
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat khoi chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap day so:";
		NhapMang(a, n);
		cout << "\nDay so hien tai:\n";
		XuatMang(a, n);
		break;
	case 2:
		cout << "\n2. Xuat day so:";
		cout << "\n\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	case 3:
		cout << "\n3. Tinh tong cac phan tu trong day so";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		kq = TinhTong(a, n);
		cout << "\nTong cua day so: " << kq;
		break;
	case 4:
		cout << "\n4. Tinh gia tri nho nhat cua day so";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		kq = TinhGTNN(a, n);
		cout << "\nGTNN cua day so: " << kq;
		break;
	case 5:
		cout << "\n5. Tim vi tri cuoi cung ma gia tri nho nhat xuat hien";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		kq = VT_CuoiGTNN(a, n);
		cout << "\nVi tri cuoi cung xuat hien GTNN: " << kq;
		break;
	case 6:
		cout << "\n6. Sap xep day so theo de bai";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);

		
		cout << "\n\nSap xep day so (0 dau day, tang dan)";
		So0Dau_TangDan(a, n);
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);

		cout << "\n\nSap xep day so (0 cuoi day)";
		So0Cuoi(a, n);
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	}
	_getch();
}