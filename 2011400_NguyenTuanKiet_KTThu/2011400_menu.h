// Khai bao nguyen mau ham

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, int n);
// Dinh nghia ham

void XuatMenu()
{
	cout << "\n====== CHON CHUC NANG ======";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Xuat n so nguyen to dau tien";
	cout << "\n2. Dem so luong chu so cua n";
	cout << "\n3. Xac dinh chu so cuoi cung trong n";
	cout << "\n4. Tinh tich cac chu so trong n";
	cout << "\n===========================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap stt de chon chuc nang(0 <= stt <= " << soMenu << "): stt = ";
		cin >> stt;
		if (stt >= 0 && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, int n)
{
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Xuat" << n << " so nguyen to dau tien\n";
		XuatSNT_N(n);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Dem so luong chu so cua " << n;
		cout << "\nSo luong: " << SoLuongN(n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Xac dinh chu so cuoi cung trong " << n;
		cout << "\nla: " << SoCuoi(n);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tinh tich cac chu so trong " << n;
		cout << "\nla: " << TinhTich(n);
		break;
	}
	_getch();
}