#pragma once

#include "Carry-Hackathon.h"

//User class includes listed items below

class User
{
private:
	string firstName;
	string lastName;
	string username;
	string email;
	string hobby;
	string academic_interest;
	string recreation;


public:
	User() //Constructor - intialized values in private
	{
		firstName = "Butch";
		lastName = "Coug";
		username = "Mascot";
		email = "butch.coug@wsu.edu";
	}

	string getFirstName() //Gets first name and returns to user
	{
		return firstName;
	}

	string getLastName() //Sets last name and returns to user
	{
		return lastName;
	}

	void setFirstName(string first) //sets the first name
	{
		firstName = first;
	}
	
	void setLastName(string last) //sets the last name
	{
		lastName = last;
	}

	void print_hobby(string hobby)
	{
		cout<< hobby;
	}

	void print_academic_interest(string academic_interest)
	{
		cout << academic_interest;
	}

	void print_recreation(string recreation)
	{
		cout << recreation;
	}

	void compare_users_hobby(User cougUsers[], string variable)
	{
		int n = 0;
		int len = sizeof(cougUsers);

		while(n < len -1)
		{
			if (cougUsers[n].variable == cougUsers[n+1].variable)
			{
				cout << cougUsers[n] << "and" << cougUsers[n+1] << "share an interest in" << cougUsers[n].variable;
			}
		}
		


	}

};

