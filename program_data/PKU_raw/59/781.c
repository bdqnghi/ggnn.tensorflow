//============================================================================
// Name        : Test1.cpp
// Author      : ???? 
// Version     :
// Copyright   : Copyright Aircy
// Description : Tomorrow never knows? 
//============================================================================

//#include <iomanip>


int main() {
	int n;
	cin >> n;
	getchar();
        //????????
	char room[n+2][n+2];
	char roomOld[n+2][n+2];
	int i,j;
	for (i = 1; i <= n;i ++)
	{
		for (j = 1; j <= n + 1; j ++)
		{
               char c;
               c = getchar();
               if(c != '\n')
               {
                       room[i][j] = c;

               }
  
         }
         cout << endl;
	}
	//roomold?????? 
		for (i = 1;i <= n; i ++ )
       {
		   for (j = 1; j <= n; j ++ )
		    {
		     	roomOld[i][j] =room[i][j];
	     	}
	   }
	int days;
	cin >> days;
	int k;//?????
	for (k = 1; k < days; k++)
	{
		for (i = 1;i <= n; i ++ )
		{
			for (j = 1; j <= n; j ++ )
			{
				
					if((roomOld[i][j] != '@'))
				    {
				         	continue;
				     }
				
						if(room[i + 1][j] == '.')
						{
							room[i + 1][j] = '@';
                        }
						if(room[i - 1][j] == '.')
						    room[i - 1][j] = '@';
						
						if(room[i][j + 1] == '.')
							room[i][j + 1] = '@';
						
						if(room[i][j - 1] == '.')
							room[i][j - 1] = '@';	
			}
		}
		//??roomOld 
	   for (i = 1;i <= n; i ++ )
        {
		   for (j = 1; j <= n; j ++ )
		    {
		     	roomOld[i][j] =room[i][j];
	     	}
	   }
	}
	int num = 0;
	for (i = 1;i <= n; i ++ )
	{
		for (j = 1; j <= n; j ++ )
		{
			if (room [i][j] == '@')
				num ++;
		}
	}
	cout << num;
	//cin >> num;

}
