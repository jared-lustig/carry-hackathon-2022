#include "User.h"


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
		

