// Khai bao nguyen mau ham
int KT_SNT(int x); 
void XuatSNT_N(int n);
int SoLuongN(int n);
int SoCuoi(int n);
int TinhTich(int n);

// Dinh nghia ham





int KT_SNT(int x)
{
	int dem = 0;
	for (int i = 2; i <= x; i++)
		if (x % i == 0)
			dem++;
	if (dem == 1)
		return 1;
	return 0;
}

void XuatSNT_N(int n)
{
	int dem = 0;
	for (int i = 1; ; i++)
	{
		if (KT_SNT(i))
		{
			dem++;
			
			cout << i << "\t";
			if (dem % 5 == 0)
				cout << "\n";
			if (dem == n)
				break;	
		}
			
	}
}

int SoLuongN(int n)
{
	int i = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return i;
}

int SoCuoi(int n)
{
	int soCuoi;
	soCuoi = n % 10;
	return soCuoi;
}

int TinhTich(int n)
{
	int soCuoi, Tich = 1;
	while (n > 0)
	{
		soCuoi = n % 10;
		Tich *= soCuoi;
		n /= 10;
	}
	return Tich;
}