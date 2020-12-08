#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh()
{
	int menu, soMenu = 13;
	String a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a);
	} while (menu > 0);

}

int main()
{
	ChayChuongTrinh();
	return 1;
}