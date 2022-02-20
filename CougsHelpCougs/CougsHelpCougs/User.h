#pragma once

#include "libraries.h"

//User class includes listed items below

class User
{
private:
	string firstName;
	string lastName;
	
public:
	string username;
	string activity;
	int hour;
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
	
	string gethobby() //Sets last name and returns to user
	{
		return hobby;
	}

	string getacademic_interest() //Sets last name and returns to user
	{
		return academic_interest;
	}

	string getrecreation() //Sets last name and returns to user
	{
		return recreation;
	}

	void setFirstName(string first) //sets the first name
	{
		firstName = first;
	}
	
	void setLastName(string last) //sets the last name
	{
		lastName = last;
	}

	void sethobby(string user_hobby)
	{
		hobby = user_hobby;
	}

	void set_academic_interest(string user_academic_interest)
	{
		academic_interest = user_academic_interest;
	}

	void set_recreation(string user_recreation)
	{
		recreation = user_recreation;
	}

};

