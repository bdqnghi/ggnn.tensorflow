int main()
{
	int startyear, startmonth, startday, endyear, endmonth, endday, year, sum = 0, i;
	int m1[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, m2[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> startyear >> startmonth >> startday >> endyear >> endmonth >> endday;
	year = startyear;
	while(year < endyear)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			sum += 366;
		else
			sum += 365;
		year++;
	}
	if ((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0))
	{
		for (i = 1; i < startmonth; i++)
			sum -= m2[i];
		sum -= startday;
	}
	else
	{
		for (i = 1; i < startmonth; i++)
			sum -= m1[i];
		sum -= startday;
	}
	if ((endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0))
	{
		for (i = 1; i < endmonth; i++)
			sum += m2[i];
		sum += endday;
	}
	else
	{
		for (i = 1; i < endmonth; i++)
			sum += m1[i];
		sum += endday;
	}
	cout << sum << endl;
	return 0;
}