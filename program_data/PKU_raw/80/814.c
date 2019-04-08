int main()
{
	int y1, m1, d1, y2, m2,d2;
	cin >> y1 >> m1 >>d1 >> y2 >> m2 >> d2;
	int yg1 = 0, yg2 = 0;
	if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
		yg1 = 1;
	if ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
		yg2 = 1;
	int date1 = 0, date2 = 0;
	int i, j;
	for (i = 1; i < m1; i++)
	{
		if ( i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 1 || i == 10 || i == 12)
			date1 = date1 + 31;
		if ( i == 4 || i == 6 || i == 9 || i == 11 )
			date1 = date1 + 30;
		if (i == 2)
		{
			if (yg1)
				date1 = date1 + 29;
			else
				date1 = date1 + 28;
		}
	}
	date1 = date1 + d1;
	for (i = 1; i < m2; i++)
	{
		if ( i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 1 || i == 10 || i == 12)
			date2 = date2 + 31;
		if ( i == 4 || i == 6 || i == 9 || i == 11 )
			date2 = date2 + 30;
		if (i == 2)
		{
			if (yg2)
				date2 = date2 + 29;
			else
				date2 = date2 + 28;
		}
	}
	date2 = date2 + d2;
	int date = 0;
	for (i = y1; i < y2; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			date = date + 366;
		else 
			date = date + 365;
	}
	date = date + date2 - date1;
	cout << date;
	return 0;
}