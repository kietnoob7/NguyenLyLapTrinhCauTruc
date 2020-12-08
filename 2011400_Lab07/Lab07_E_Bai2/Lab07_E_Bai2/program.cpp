#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h"

void ChayChuongTrinh()
{
	SoTuNhienLon m, n, t;
	
	_flushall();
	cout << "\nNhap so nguyen m: ";
	gets_s(m);
	cout << "\nNhap so nguyen n: ";
	gets_s(n);
	CongSoTuNhienLon(m, n, t);
	cout << "Tong: " << m << " + " << n << " = " << t;
	_getch();
}

int main()
{
	ChayChuongTrinh();
	return 1;
}