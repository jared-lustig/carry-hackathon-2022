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

User compare_users_hobby(User cougUsers[], int x)
{
	int n = 0;
	int len = sizeof(cougUsers);
	while(n < len -1)
	{
		
        if (cougUsers[x].gethobby() == cougUsers[n].gethobby())
		{
			return cougUsers[n+1];
		}
	}
		

}

User compare_users_academic_interest(User cougUsers[], int x)
{
	int n = 0;
	int len = sizeof(cougUsers);
	while(n < len -1)
	{
		
        if (cougUsers[x].getacademic_interest() == cougUsers[n].getacademic_interest())
		{
			return cougUsers[n+1];
		}
	}
		

}

User compare_users_recreation(User cougUsers[], int x)
{
	int n = 0;
	int len = sizeof(cougUsers);
	while(n < len -1)
	{
		
        if (cougUsers[x].getrecreation() == cougUsers[n].getrecreation())
		{
			return cougUsers[n+1];
		}
	}
		

