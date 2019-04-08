int main()
{
	int startYear, startMonth, startDay, endYear, endMonth, endDay, ans = 0, day = 0, i;
	cin >> startYear >> startMonth >> startDay >> endYear >> endMonth >> endDay;
	for (i = startYear; i < endYear; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			ans = ans + 366;
		else
			ans = ans + 365;
	}
	for (i = 1; i < startMonth; i++)
	{
		if ((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12))
			day = day + 31;
		else if (i == 2)
			{
				if ((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0))
					day = day + 29;
				else
					day = day + 28;
			}
			else
				day = day + 30;
	}
	for (i = 1; i < startDay; i++)
		day++;
	ans = ans - day;
	day = 0;
	for (i = 1; i < endMonth; i++)
	{
		if ((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12))
			day = day + 31;
		else if (i == 2)
			{
				if ((endYear % 4 == 0 && endYear % 100 != 0) || (endYear % 400 == 0))
					day = day + 29;
				else
					day = day + 28;
			}
			else
				day = day + 30;
	}
	for (i = 1; i < endDay; i++)
		day++;
	ans = ans + day;
	cout << ans << endl;
	return 0;
}

