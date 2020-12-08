// =====================
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, String &a);
// =====================
void XuatMenu()
{
	cout << "\n============ CHON CHUC NANG ============";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap chuoi";
	cout << "\n2. Xem chuoi";
	cout << "\n3. Tinh chieu dai chuoi";
	cout << "\n4. Chen ky tu x vao dau chuoi";
	cout << "\n5. Chen ky tu x vao cuoi chuoi";
	cout << "\n6. Chen ky tu x vao chuoi a tai vi tri cho truoc";
	cout << "\n7. Xoa ky tu dau chuoi";
	cout << "\n8. Xoa ky tu cuoi chuoi";
	cout << "\n9. Xoa ky tu tai vi tri cho truoc";
	cout << "\n10. Cat ky tu dau chuoi roi chen vao vi tri cuoi chuoi(da cat)";
	cout << "\n11. Cat ky tu cuoi chuoi roi chen vao vi tri dau chuoi(da cat)";
	cout << "\n12. Xoa tat ca ky tu x cho truoc khoi chuoi";
	cout << "\n13. Thay the tat ca ky tu x trong chuoi thanh ky tu y";
	cout << "\n========================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang [0.." << soMenu << "]: stt = ";
		cin >> stt;
		if (stt >= 0 && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, String &a)
{
	system("CLS");
	char x, y;
	int vt, kq;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat khoi chuong trinh";
		break;
	case 1:
		cout << "\n1. Nhap chuoi: ";
		cout << "\nNhap chuoi a: ";
		cin.ignore();
		_flushall();
		gets_s(a, MAX);
		cout << "\nChuoi vua nhap la: " << a;
		break;
	case 2:
		cout << "\n2. Xem chuoi";
		cout << "\nXem chuoi: " << a;
		break;
	case 3:
		cout << "\n3. Tinh chieu dai chuoi";
		cout << "\nXem chuoi: " << a;
		cout << "\nl = " << TinhChieuDaiChuoi(a);
		break;
	case 4:
		cout << "\n4. Chen ky tu x vao dau chuoi";
		cout << "\nXem chuoi: " << a;
		cout << "\nNhap ky tu x: ";
		cin >> x;
		ChenDau_KT(a, x);
		cout << "\nChuoi sau khi chen: " << a;
		break;
	case 5:
		cout << "\n5. Chen ky tu x vao cuoi chuoi";
		cout << "\nXem chuoi: " << a;
		cout << "\nNhap ky tu x: ";
		cin >> x;
		ChenCuoi_KT(a, x);
		cout << "\nChuoi sau khi chen: " << a;
		break;
	case 6:
		cout << "\n6. Chen ky tu x vao chuoi a tai vi tri cho truoc";
		cout << "\nXem chuoi: " << a;
		cout << "\nNhap ky tu x: ";
		cin >> x;
		cout << "\nNhap vi tri: ";
		cin >> vt;
		kq = ChenKT_VT(a, x, vt);
		if (kq == 0)
			cout << "\nVi tri khong nam trong chuoi (vt = " << vt << ", Chuoi = [1.." << TinhChieuDaiChuoi(a) << "])";
		else
		{
			cout << "\nChuoi sau khi chen: " << a;
		}
		break;
	case 7:
		cout << "\n7. Xoa ky tu dau chuoi";
		cout << "\nXem chuoi: " << a;
		XoaDau_KT(a);
		cout << "\nChuoi sau khi xoa: " << a;
		break;
	case 8:
		cout << "\n8. Xoa ky tu cuoi chuoi";
		cout << "\nXem chuoi: " << a;
		XoaCuoi_KT(a);
		cout << "\nChuoi sau khi xoa: " << a;
		break;
	case 9:
		cout << "\n9. Xoa ky tu tai vi tri cho truoc";
		cout << "\nXem chuoi: " << a;
		cout << "\nNhap vi tri: ";
		cin >> vt;
		XoaKT_VT(a, vt);
		cout << "\nChuoi sau khi xoa: " << a;
		break;
	case 10:
		cout << "\n10. Cat ky tu dau chuoi roi chen vao vi tri cuoi chuoi(da cat)";
		cout << "\nXem chuoi: " << a;
		CatDauChenCuoi(a);
		cout << "\nChuoi sau khi cat: " << a;
		break;
	case 11:
		cout << "\n11. Cat ky tu cuoi chuoi roi chen vao vi tri dau chuoi(da cat)";
		cout << "\nXem chuoi: " << a;
		CatCuoiChenDau(a);
		cout << "\nChuoi sau khi cat: " << a;
		break;
	case 12:
		cout << "\n12. Xoa tat ca ky tu x cho truoc khoi chuoi";
		cout << "\nXem chuoi: " << a;
		cout << "\nNhap ky tu x: ";
		cin >> x;
		Xoa_x(a, x);
		cout << "\nChuoi sau khi xoa: " << a;
		break;
	case 13:
		cout << "\n13. Thay the tat ca ky tu x trong chuoi thanh ky tu y";
		cout << "\nXem chuoi: " << a;
		cout << "\nNhap ky tu x: ";
		cin >> x;
		cout << "\nNhap ky tu y";
		cin >> y;
		cout << "\nChuoi sau khi thay the " << x << " thanh " << y << ":\n";
		cout << a;
		break;
	}
	_getch();
}