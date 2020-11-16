// Thu vien co san
#include <iostream>
#include <conio.h>

using namespace std;

// Thu vien tu tao
#include "thuvien.h"
#include "menu.h"
void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 7;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);
}
