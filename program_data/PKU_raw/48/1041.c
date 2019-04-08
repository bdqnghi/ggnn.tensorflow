//****************************
//**Title:????????  **
//**Author:?? 1300012732  **//Std: '56 280 728 1232 1456 1232 728 280 56'
                              // Out: '56 204 494 760 904 760 494 204 56'

                               //  Input of in case 0:
                                 //    14 4
//**Date?2013.11.4         **
//**File?2.cpp             **
//****************************
int dish[11][11];
int die[11][11];
int increase[11][11];

void breed (int day, int count)
{
	int i, j;
	if (count > day)
	{
		for (i = 1; i < 10; i++)
		{
			for (j = 1; j < 9; j++)
				cout << dish[i][j] << ' ';
			cout << dish[i][9] << endl;
		}
		return;
	}
	else 
	{
		for (i = 1; i < 10; i++)
			for (j = 1; j < 10; j++)
			{
				if (dish[i][j] != 0)
				{
					increase[i][j] += 2 * dish[i][j];
					increase[i][j + 1] += dish[i][j];
					increase[i][j - 1] += dish[i][j];
					increase[i - 1][j] += dish[i][j];
					increase[i + 1][j] += dish[i][j];
					increase[i + 1][j - 1] += dish[i][j];
					increase[i + 1][j + 1] += dish[i][j];
					increase[i - 1][j - 1] += dish[i][j];
					increase[i - 1][j + 1] += dish[i][j];
				}
			}
		for (i = 1; i < 10; i++)
			for (j = 1; j < 10; j++)
			{
				dish[i][j] += increase[i][j];
				dish[i][j] -= die[i][j];
			}
		for (i = 1; i < 10; i++)
			for (j = 1; j < 10; j++)
			{
				die[i][j] = increase[i][j];
				increase[i][j] = 0;
			}
     	breed (day, count + 1);
	}
}

int main()
{
	int num, day, i, j;
	cin >> num >> day;
	for (i = 0 ; i < 11; i++)
		for (j = 0; j < 11; j++)
			dish[i][j] = die[i][j] = 0;
	dish[5][5] = die[5][5] = num;
	breed (day, 1);
	return 0;
}

 
			