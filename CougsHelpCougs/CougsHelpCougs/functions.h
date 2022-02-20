#include "libraries.h"
#include "User.h"

// Protypes for functions.cpp listed below

//typedef struct
//{
//	string firstname[30];
//	string lastname[30];
//	string username[30];
//	string email[30];
//	string activity[30];
//	int hour[30] = { 0 };
//}User;

typedef struct
{
	string firstname;
	string lastname;
	string username;
	string email;
	string activity;
	int hour;
}New;




int display_menu(void);
int menu1(User newUser);
//int menu2(User newUser[], fstream infile, fstream outfile);

void openFile(User newUser[]);


