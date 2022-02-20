#pragma once

#include "Carry-Hackathon.h"

//User class includes listed items below

class User
{
private:
	string firstName;
	string lastName;

	string email;

	
public:
	string username;
	string activity[30];
	int hour;

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
};

