#define MAX 100

typedef int DaySo[MAX];

void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
int TinhTong(DaySo a, int n);
int TinhGTNN(DaySo a, int n);
int VT_CuoiGTNN(DaySo a, int n);
void HoanVi(int &a, int &b);
void So0Dau_TangDan(DaySo a, int n);
void So0Cuoi(DaySo a, int n);

void NhapMang(DaySo a, int n)
{
	int i,
	max = 5, 
	min = -5;

	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % (max - min) + min;
	}
}

void XuatMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << '\t';
}

int TinhTong(DaySo a, int n)
{
	int i,
		tong = 0;
	for (i = 0; i < n; i++)
		tong += a[i];
	return tong;
}

int TinhGTNN(DaySo a, int n)
{
	int i,
		min = a[0];
	for (i = 1; i < n; i++)
		if (a[i] < min)
			min = a[i];
	return min;
}

int VT_CuoiGTNN(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (TinhGTNN(a, n) == a[i])
			return i;
}

void HoanVi(int &a, int &b)
{
	int tam = a;
	a = b;
	b = tam;
}


void So0Dau_TangDan(DaySo a, int n)
{
	int i,
		j,
		tam = 0;
		
	for (i = n - 1; i > 0; i--)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if ((a[i] > 0 && a[j] > 0 && a[i] > a[j]) ||
				(a[i] == 0 && a[j] != 0) ||
				(a[i] > a[j]));
			HoanVi(a[i], a[j]);
		}
	}
}

void So0Cuoi(DaySo a, int n)
{
	int i,
		j,
		tam;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if ((a[i] == 0 && a[j] != 0) || 
				(a[i] > a[j]));
				HoanVi(a[i], a[j]);
		}
	}
}