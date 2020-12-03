#include <iostream>
#include <conio.h>

using namespace std;

#include "2011400_thuvien.h"
#include "2011400_menu.h"

void ChayChuongTrinh()
{
	int n, menu, soMenu = 4;
	cout << "\nNhap n = ";
	cin >> n;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, n);
	} while (menu > 0);
	_getch();
}

int main()
{
	ChayChuongTrinh();
	return 1;
}