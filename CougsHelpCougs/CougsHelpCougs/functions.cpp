#include "functions.h"

//This function will allow response log to save responses from multiple users
void openFile(User newUser[])
{
	fstream file;

	file.open("ResponseLog.txt"); //Opens text file to write 

	for (int i = 0; file.is_open() && newUser[i].getFirstName() != "Butch"; i++)
	{
		file << newUser[i].getFirstName() << " " << newUser[i].getLastName() << endl << endl;
	}

	file.close(); //close file 
}

void menu()
{

}