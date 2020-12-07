void N_SoNguyenDuongDauTien(unsigned int n);
int DemChuSo(unsigned int n);
int ChuSoDauTien(unsigned int n);
int TinhTong(unsigned int n);
// =====================

void N_SoNguyenDuongDauTien(unsigned int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i > 0)
			cout << i << '\t';
		if (i % 10 == 0)
			cout << "\n";
	}
}

int DemChuSo(unsigned int n)
{
	int dem = 0;
	while (n > 0)
	{
		dem++;
		n /= 10;
	}
	return dem;
}

int ChuSoDauTien(unsigned int n)
{
	do
	{
		n /= 10;
	} while (n / 10 != 0);
	return n;
}

int TinhTong(unsigned int n)
{
	int soCuoi, Tong = 0;
	while (n > 0)
	{
		soCuoi = n % 10;
		Tong += soCuoi;
		n /= 10;
	}
	return Tong;
}