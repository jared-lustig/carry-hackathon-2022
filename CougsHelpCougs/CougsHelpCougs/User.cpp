#include "User.h"

int main(void)
{
	int option = 0;

	option = display_menu();

	if (option == 1)
	{
		menu1();
	}
	else
	{
		menu2();
	}




}
