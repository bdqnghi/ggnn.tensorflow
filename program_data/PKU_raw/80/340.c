int main()
{
	int day = 0, i;
	int year1, year2, m1, m2, d1, d2;
	cin >> year1 >> m1 >> d1;
	cin >> year2 >> m2 >> d2;
	int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int b[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
	if ( (year2 - year1) == 0 )
	{
		if ( m1 == m2 )
			day = d2 -d1;
		else
		{
		if ( (year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0) )
		{
			for ( i = m1+1; i <= m2-1; i++ )
				day = day + b[i];
		day = day + b[m1] - d1 + d2;
		}
		else
		{
			for ( i = m1+1; i <= m2-1; i++ )
				day = day + a[i];
		day = day + a[m1] - d1 + d2;
		}
		}
	}
	if ( (year2 - year1) == 1 )
	{
		day = 0;
		if ( (year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0) )
		{
			for ( i = m1 + 1; i <= 12; i++ )
				day = day + b[i];
		day = day + b[m1] - d1;
		}
		else
		{
			for ( i = m1 + 1; i <= 12; i++ )
				day = day + a[i];
		day = day + a[m1] - d1;
		}
		if ( (year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0) )
		{
			for ( i = 1; i <= m2 - 1; i++ )
				day = day + b[i];
			day = day + d2;
		}
		else
		{
				for ( i = 1; i <= m2 - 1; i++ )
				day = day + a[i];
			day = day + d2;
		}
	}
	if ( (year2 - year1) > 2 )
	{
		day = 0;
		for ( i = year1 + 1; i <= year2 - 1; i++ )
		{
			if  ( (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0) )
				day = day + 366;
			else
				day = day + 365;
		}
		if ( (year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0) )
		{
			for ( i = m1 + 1; i <= 12; i++ )
				day = day + b[i];
		day = day + b[m1] - d1;
		}
		else
		{
			for ( i = m1 + 1; i <= 12; i++ )
				day = day + a[i];
		day = day + a[m1] - d1;
		}
		if ( (year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0) )
		{
			for ( i = 1; i <= m2 - 1; i++ )
				day = day + b[i];
			day = day + d2;
		}
		else
		{
				for ( i = 1; i <= m2 - 1; i++ )
				day = day + a[i];
			day = day + d2;
		}
	}
cout << day <<endl;
return 0;
	}




