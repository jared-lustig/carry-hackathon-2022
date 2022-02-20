#include "libraries.h"
#include "User.h"
#include "functions.h"
/* This will be our main function */

int main()
{
	cout << "Hello World" << endl;

	User cougUsers[100];

	cougUsers[0].setFirstName("jared");
	cougUsers[0].setLastName("lustig");

	cougUsers[1].setFirstName("daniel");

	// Will print out users that are entered in terminal
	// Right now these are hard coded above, will need to CIN >> to get from terminal
	for (int i = 0; cougUsers[i].getFirstName() != "Butch"; i++) 
	{
		cout << cougUsers[i].getFirstName() << " " << cougUsers[i].getLastName() << endl << endl; 
	}

	openFile(cougUsers); //Will print same info to ResponseLog

	menu1(cougUsers[0]);

	/*

	1. Need to make a menu

	2.Need to Class User that handles persons name, email, ex...
		a.Within main we will make an array of persons

	3.User can login and post "does anyone need help" then logout

	4. After they logout another user can login
		a. Respond to posting

	5. Responses can be stored in a txt log file
	*/


	return 0;
}