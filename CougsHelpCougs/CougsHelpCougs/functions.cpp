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

int display_menu()
{
	int temp = 0;
	int option = 0;
	int i = 0;

	do {
		cout << "**********************COUGS MEET COUGS****************************" << endl;
		cout << "THE BEST FRIEND FINDER IN PULLMAN!!!!!!\n";
		cout << "WE ALWAYS FIND OUR WAY BACK HOME\n";
		cout << "WHY NOT FIND FRIENDS TO MAKE YOUR COLLEGE EXPERIENCE UNFORGETTABLE AS WELL?\n";
		cout << "*********************OPTIONS**********************************\n";
		cout << "1) MAKE A REQUEST TO FIND NEW FRIENDS\n";
		cout << "2) LOOK AT POSTED REQUESTS FROM FUTURE FRIENDS\n";
		cin >> option;
	} while (option < 1 || option > 2);

	return option;
}

int menu1(New User, FILE* infile, FILE* outfile)
{
	int choice = 0;
	int i = 0;
	char yesno = 0;
	int listing = 0;
	int temp = 0;
	int count = 0;
	int time = 0;
	int AMPM = 0;

	printf("What is your first name?");
	scanf("%s", &User.firstname);
	printf("What is your last name?");
	scanf("%s", &User.lastname);
	printf("What is your username?");
	scanf("%s", &User.username);
	printf("What is your email?");
	scanf("%s", &User.email);

	do {
		cout << "1) GYM BUDDIES\n";
		cout << "2) SPORT BUDDIES\n";
		cout << "3) HIKING BUDDIES\n";
		cout << "4) STUDY BUDDIES\n";
		cout << "5) CYCLING BUDDIES\n";
		cout << "6) EXIT\n";
		cin >> choice;
	} while (choice < 1 || choice > 6);


	switch (choice)
	{
	case 1: // gym buddies
		do {
			printf("*********************WHICH GYM ARE YOU LOOKING TO WORKOUT AT?**********************\n");
			printf("1) UREC\n 2) Chinook \n 3) Stephenson\n");
			scanf("%d", &temp);
		} while (temp < 1 || temp > 3);

		if (temp == 1)
		{
			printf("YOUR GYM SELECTION: UREC\n");
			User.activity = "GYM/UREC";
			printf("What time are you planning to workout at? (12 PM to 11 PM) \n");
			scanf("%d", & User.hour);
		}
		if (temp == 2)
		{
			User.activity = "GYM/CHINOOK";
			printf("YOUR GYM SELECTION: Chinook\n");
			printf("What time are you planning to workout at? (12 PM to 11 PM) \n");
			scanf("%d", &User.hour);
		}
		if (temp == 3)
		{
			User.activity = "GYM/STEPHENSON";
			printf("YOUR GYM SELECTION: Stephenson\n");
			printf("What time are you planning to workout at?\n");
			printf("What time are you planning to workout at? (3 PM to 11 PM) \n");
			scanf("%d", &User.hour);
		}
	case 2: // sport buddies
	{
		do {
			printf("which sport do you want to play?");
			printf("1)Soccer");
			printf("2)Tennis");
			printf("3)Basketball");
			printf("4)Volleyball");
			printf("5)Badminton");
			scanf("%d", &temp);
		} while (temp < 1 || temp > 5);

		if (temp == 1)
		{
			User.activity = "SOCCER";
			printf("SOCCER!\n");
		}
		if (temp == 2)
		{
			User.activity = "TENNIS";
			printf("TENNIS!\n");
		}
		if (temp == 3)
		{
			User.activity = "BASKETBALL";
			printf("BASKETBALL!\n");
		}
		if (temp == 4)
		{
			User.activity = "VOLLEYBALL";
			printf("VOLLEYBALL!\n");
		}
		if (temp == 5)
		{
			User.activity = "BADMINTON";
			printf("BADMINTON\n");
		}
		printf("When would you like to play (12:00 PM - 11:00 PM)?\n");
		scanf("%d", &User.hour);
	}
	case 3: //HIKING
	{
		do
		{
			printf("HIKING SPOT?");
			printf("1)Mountains");
			printf("2)Hills");
			printf("3)Nature-Based");
			scanf("%d", &temp);
		} while (temp < 1 || temp > 5);

		if (temp == 1)
		{
			User.activity = "Mountain Hiking";
			printf("MOUNTAIN HIKING!\n");
		}
		if (temp == 2)
		{
			User.activity = "Hill Hiking";
			printf("HILL HIKING!\n");
		}
		if (temp == 3)
		{
			User.activity = "Nature-Based Hiking";
			printf("NATURE HIKING!\n");
		}
		printf("When would you like to hike (12:00 PM - 11:00 PM)?\n");
		scanf("%d", &User.hour);
	}
	case 4: //study buddies
	{
		do
		{
			printf("Study SPOT?");
			printf("1)Chinook");
			printf("2)Owens Engineering Library");
			printf("3)Spark");
			printf("4)Terrell/Holland Library");
			scanf("%d", &temp);
		} while (temp < 1 || temp > 5);

		if (temp == 1)
		{
			User.activity = "Study/Chinook";
			printf("CHINOOK STUDY SESSION!\n");
		}
		if (temp == 2)
		{
			User.activity = "Study/Owens";
			printf("OWENS STUDY SESSION\n");
		}
		if (temp == 3)
		{
			User.activity = "Study/Spark";
			printf("SPARK STUDY SESSION\n");
		}
		if (temp == 4)
		{
			User.activity = "Study/TerellHoland";
			printf("TERELL/HOLLAND STUDY SESSION");
		}
		printf("When would you like to study (12:00 PM - 11:00 PM)?\n");
		scanf("%d", &User.hour);
	}
	case 5: // cycling buddies
	{
		do
		{
			printf("Cycling Spot?");
			printf("1)To Idaho");
			printf("2)Around Campus");
			printf("3)The Park");
			scanf("%d", &temp);
		} while (temp < 1 || temp > 5);

		if (temp == 1)
		{
			User.activity = "Cycling/Idaho";
			printf("CYCLING TO IDAHO\n");
		}
		if (temp == 2)
		{
			User.activity = "Cycling/Campus";
			printf("CYCLING ON CAMPUS\n");
		}
		if (temp == 3)
		{
			User.activity = "Cycling/Park";
			printf("CYCLING AT PARK\n");
		}
		printf("When would you like to cycle (12:00 PM - 11:00 PM)?\n");
		scanf("%d", &User.hour);
	}
	case 6:
		exit(0);
	}


	fprintf(outfile, "First: %s,Last: %s,Username: %s, Email: %s,Activity: %s,Time: %dPM", User.firstname
	, User.lastname, User.username, User.email, User.activity, User.hour);

}




int menu2(User newUser[], fstream infile, fstream outfile)
{

	//int usernumber[100] = { 0 };
	//int count = 0;
	//int i = 0;
	//int yesno = 0;
	//int listing = 0;

	//string first, last, username, activity, hour;

	//while (!feof(infile))
	//{
	//	std::cout << i + 1, first;
	//	std::cout << "%s\n", newUser.lastname[i];
	//	std::cout << "%s\n", newUser.username[i];
	//	std::cout << "%s\n", newUser.activity[i];
	//	std::cout << "%s\n", newUser.hour[i];

	//	usernumber[i] = i + 1;
	//	i++;
	//	count++;
	//}
	string first, last;

	for (int i = 0; infile.eof(); i++)
	{
		infile >> first;
		infile >> last;
		infile >> newUser[i].activity[0];
		infile >> newUser[i].hour;

		newUser[i].setFirstName(first);
		newUser[i].setLastName(last);
		/*cout << newUser[i].getFirstName() << endl;
		cout << newUser[i].getLastName() << endl;
		cout << newUser[i].activity << endl;
		cout << newUser[i].hour << endl << endl;*/
	}

	//do {
	//	std::cout << "Any Listings you Find Appealing?\n (y/n)";
	//	scanf("%c", &yesno);
	//} while (yesno != 'y' || yesno != 'n');

	//if (yesno == 'y')
	//{
	//	std::cout << "Which Listing?";
	//	scanf("%d", &listing);

	//	for (int j = 0; j < count; j++)
	//	{
	//		if (usernumber[j] == listing)
	//		{
	//			std::cout << "%s, %s, %s, %d", newUser.firstname[i], newUser.lastname[i], newUser.activity, newUser.hour;

	//			std::cout << "You are now matched with %s to do %s. HAVE FUN", newUser.firstname[i], newUser.activity;

	//			// fprintf the matching to an outfile called appointments

	//			break;
	//		}
	//		j++;
	//	}


	//}
	//else
	//{
	//	std::cout << "Shucks, Look Back Later for More Listings!";
	//}
}