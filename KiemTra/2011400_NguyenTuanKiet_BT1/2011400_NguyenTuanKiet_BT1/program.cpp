#include <iostream>
#include <conio.h>

using namespace std;

#include "2011400_thuvien.h"
#include "2011400_menu.h"

void ChayChuongTrinh()
{
	int menu,
		soMenu = 4;
	int n;
	do
	{
		system("CLS");
		cout << "\nNhap 1 so nguyen duong: ";
		cin >> n;
	} while (n <= 0);
	
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