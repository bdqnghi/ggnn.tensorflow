/* title:???*
 * author:???*
 * time:2011.9.28*/

   


int main()
{
	int n, year, month1, month2, i, j, t, day;
	int month[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int rmonth[13]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> year >> month1 >> month2;
                  day = 0;
		if (month1 > month2)
		{
			t = month1;
			month1 = month2;
			month2 = t;
		}
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			for (j = month1; j < month2; j++)
			{
				day = day + rmonth[j];
			}
		}
		else
		{
            for (j = month1; j < month2; j++)
			{
				day = day + month[j];
			}
		}
		if(day % 7 == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}

