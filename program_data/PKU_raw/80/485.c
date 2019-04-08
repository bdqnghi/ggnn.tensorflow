
int accountdays(int year, int month, int day)
{
	int days = 0,i;
	for(i = 1; i <= month; i++)
	{
		if(i == 4 || i == 6 || i == 9 || i == 11)
			days += 30;
		else if(i == 2)
		{
			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				days += 29;
			else days += 28;
		}
		else days += 31;
	}
	i = month;
	if(i == 4 || i == 6 || i == 9 || i == 11)
			days = days - (30 - day);
	else if(i == 2)
		{
			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				days -= 29 - day;
			else days -= 28 - day;
		}
	else days -= 31 - day;
	return days;
}



int main()
{
	int year[2], month[2], day[2], days1, days2 ,i;

	cin >> year[0] >> month[0] >> day[0];
	cin >> year[1] >> month[1] >> day[1];

	days1 = accountdays(year[0],month[0],day[0]);
	days2 = accountdays(year[1],month[1],day[1]);
	if(year[1] > year[0])
	{
		for(i = year[0] + 1; i < year[1]; i++)
		{
			if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
				days2 += 366;
			else days2 += 365;
		}
		i = year[0];
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			days2 += 366 - days1;
		else days2 += 365 - days1;
		cout << days2;
	}
	else cout << days2 - days1;
	return 0;
}