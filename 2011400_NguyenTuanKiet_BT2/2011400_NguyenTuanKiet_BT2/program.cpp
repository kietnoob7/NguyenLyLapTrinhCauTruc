#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

#include "2011400_thuvien.h"
#include "2011400_menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu,
		soMenu = 6,
		n;
	DaySo a;

	do
	{
		cout << "\nNhap so phan tu cua mang: ";
		cin >> n;
	} while (n <= 0);

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}