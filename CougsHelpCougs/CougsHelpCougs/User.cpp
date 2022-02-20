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