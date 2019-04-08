int monthday[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int leap(int year)
{
	if((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int month, year, year1, year2, month1, month2, day1, day2, day = 0;
	cin >> year1 >> month1 >> day1;
	cin >> year2 >> month2 >> day2;
	for(year = year1 + 1; year <= year2 -1; year++)
	{
		day += 365 + leap(year);
	}
	if(year1 < year2)
	{
		for(month = 1; month < month2; month++)
				day += monthday[month];
		day += day2;
		if(leap(year2) && month2 >= 3)
			day++;
		for(month = month1; month <= 12; month++)
			day+= monthday[month];
		day -= day1;
		if(leap(year1) && month1 < 3)
			day++;
	}
	else
	{
		if(month1 != month2)
		for(month = month1; month < month2; month++)
		{
			
			{
				day += monthday[month];
				day += day2;
				day -= day1;
				if(leap(year1) && month1 < 3)
					day++;
			}
			
		}
		else
				day = day2 - day1;
	}
	cout << day << endl;
	return 0;
}