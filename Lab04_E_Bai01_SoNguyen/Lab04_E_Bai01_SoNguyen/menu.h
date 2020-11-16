// Khai bao nguyen mau ham
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

// Dinh nghia ham

// Ham XuatMenu():
void XuatMenu()
{
	cout << "\n===== CHON CHUC NANG =====\n";
	cout << "\n0. Thoat khoi chuong tirnh";
	cout << "\n1. Xuat so tu 1 den n";
	cout << "\n2. Dem so luong so chia het cho 3, khong chia het cho 4 [1..n]";
	cout << "\n3. Dem so luong chu so cua n";
	cout << "\n4. Dao nguoc so n";
	cout << "\n5. Tinh tong cac chu so trong n";
	cout << "\n6. Chu so dau tien trong n";
	cout << "\n7. Tim so nguyen m lon nhat(1+2+...+m <= n)";
	cout << "\n============================";
}

// Ham ChonMenu():
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so stt(1 <= " << soMenu << ") de chon menu: stt = ";
		cin >> stt;
		if (stt >= 0 && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu)
{
	int n;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat khoi chuong trinh.\n";
		break;
	case 1:
		cout << "\nNhap n: ";
		cin >> n;
		cout << "\n1. Xuat so tu 1 den " << n << ":\n";
		XuatSo(n);
		break;
	case 2:
		cout << "\nNhap n: ";
		cin >> n;
		cout << "\n2. Dem so luong so chia het cho 3, khong chia het cho 4 [1.."<< n << "]:\n";
		cout << DemSo(n);
		break;
	case 3:
		cout << "\nNhap n: ";
		cin >> n;
		cout << "\n3. Dem so luong chu so cua " << n << ":\n";
		cout << SoLuong(n);
		break;
	case 4:
		cout << "\nNhap n: ";
		cin >> n;
		cout << "\n4. Dao nguoc so " << n << ":\n";
		cout << DaoNguoc(n);
		break;
	case 5:
		cout << "\nNhap n: ";
		cin >> n;
		cout << "\n5. Tinh tong cac chu so trong " << n << ":\n";
		cout << TinhTong(n);
		break;
	case 6:
		cout << "\nNhap n: ";
		cin >> n;
		cout << "\n6. Chu so dau tien trong " << n << ":\n";
		cout << SoDauTien(n);
		break;
	case 7: 
		cout << "\nNhap n: ";
		cin >> n;
		cout << "\n7. Tim so nguyen m lon nhat(1+2+...+m <= n):\n";
		cout << mLonNhat(n);
		break;
	}
	_getch();
}