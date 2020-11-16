// Khai bao nguyen mau ham
void XuatSo(int n);
int DemSo(int n);
int SoLuong(int n);
int DaoNguoc(int n);
int TinhTong(int n);
int SoDauTien(int n);
int mLonNhat(int n);

// Dinh nghia ham

// Ham XuatSo()
void XuatSo(int n)
{
	
	for (int i = 1; i <= n; i++)
	{
		if (i % 10 != 0)
			cout << i << "\t";
		else
			cout << i << "\n";
	}
}

int DemSo(int n)
{
	int x = 0;
	for (int i = 1; i <= n; i++)
	{
		if ((i % 3 == 0) && (i % 4 != 0))
			x++;
	}
	return x;
}

int SoLuong(int n)
{
	int i = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return i;
}

int DaoNguoc(int n)
{
	int DaoNguoc = n % 10;
	n /= 10;
	int soCuoi;
	while (n > 0)
	{
		soCuoi = n % 10;
		n /= 10;
		DaoNguoc = DaoNguoc * 10 + soCuoi;
	}
	return DaoNguoc;
}

int TinhTong(int n)
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

int SoDauTien(int n)
{
	do
	{
		n /= 10;
	} while (n / 10 != 0);
	return n;
}

int mLonNhat(int n)
{
	int x = 0, i;
	for (i = 1; ; i++)
	{
		x += i;
		if (x > n)
			if (x == n)
				break;
			else
			{
				i--;
				break;
			}
	}
	return i;
}
