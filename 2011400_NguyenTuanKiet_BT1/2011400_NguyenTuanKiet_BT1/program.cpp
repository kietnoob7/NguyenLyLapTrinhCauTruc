#include <iostream>
#include <conio.h>

using namespace std;

#include "2011400_thuvien.h"
#include "2011400_menu.h"

void ChayChuongTrinh()
{
	int menu,
		soMenu = 4;
	unsigned int n;
	cout << "\nNhap n = ";
	cin >> n;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, n);
	} while (menu > 0);
}

int main()
{
	ChayChuongTrinh();
	return 1;
}