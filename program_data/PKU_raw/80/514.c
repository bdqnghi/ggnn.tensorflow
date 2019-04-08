int main ()
{
	int month1[13] = {0, 31, 28, 31, 30 ,31, 30 ,31, 31,30,31,30,31};
	int month2[13] = {0, 31, 29, 31, 30 ,31, 30 ,31, 31,30,31,30,31};
	int ye1,mon1,day1,ye2,mon2,day2,sum = 0,i;
	cin >> ye1 >> mon1 >> day1 >> ye2 >> mon2 >> day2;
	if (ye1 == ye2)
	{
		if (mon1 == mon2)
		{
			cout << day2 - day1;
			return 0;
		}
		else 
		{
			if ((ye1% 4 == 0 && ye1 % 100 != 0) || (ye1 % 400 == 0)) 
			{
				sum = sum + month2[mon1] - day1;
				for ( i = mon1 + 1; i< mon2; i++)
				{
					sum = sum + month2[i];
				}
				sum = sum +  day2;
				cout << sum;
			}
			else
			{
				sum = sum + month1[mon1] - day1;
				for ( i = mon1 + 1; i< mon2; i++)
				{
					sum = sum + month1[i];
				}
				sum = sum +  day2;
				cout << sum;
			}
		}
	}
	else
	{
		if ((ye1 % 4 == 0 && ye1 % 100 != 0) || (ye1 % 400 == 0)) 
		{
			sum = sum + month2[mon1] - day1;
			for (i = mon1 + 1; i <= 12; i++)
			{
				sum = sum + month2[i];
			}
		}
		else
		{
			sum = sum + month1[mon1] - day1;
			for (i = mon1 + 1; i <= 12; i++)
			{
				sum = sum + month1[i];
			}
		}
		for (i = ye1 + 1; i<= ye2 - 1; i++)
		{
			if ((i % 4 == 0 && i% 100 != 0) || (i % 400 == 0)) 
				sum = sum + 366;
			else 
				sum = sum + 365;
		}
			if ((ye2 % 4 == 0 && ye2 % 100 != 0) || (ye2 % 400 == 0)) 
		{
			sum = sum + day2;
			for (i = 1; i <= mon2 - 1; i++)
			{
				sum = sum + month2[i];
			}
		}else
		{
			sum = sum + day2;
			for (i = 1; i <= mon2 - 1; i++)
			{
				sum = sum + month1[i];
			}
		}
		cout << sum;
	}
	return 0;
}


			
			

