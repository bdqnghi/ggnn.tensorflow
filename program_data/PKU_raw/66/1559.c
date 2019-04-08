int main()
{
	int year, mon, day;
	cin >> year >> mon >> day;
	int y,m,sumd=0,lunar=0;
	while (year > 2800)
	{
		year = year % 2800;
	}
	for (y = 1; y < year; y++)
	{
		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		{
			sumd += 366;
		}
		else
		{
			sumd += 365;
		}
	}
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		lunar = 1;
	}
	for (m = 1; m < mon; m++)
	{
		if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10))
		{
			sumd += 31;
		}
		else if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
		{
			sumd += 30;
		}
		else if ((m == 2) && (lunar == 1))
		{
			sumd += 29;
		}
		else
		{
			sumd += 28;
		}
	}
	sumd += day;
	int a = sumd % 7;
	if (a == 0)
		cout << "Sun." << endl;
	if (a == 1)
		cout << "Mon." << endl;
	if (a == 2)
		cout << "Tue." << endl;
	if (a == 3)
		cout << "Wed." << endl;
	if (a == 4)
		cout << "Thu." << endl;
	if (a == 5)
		cout << "Fri." << endl;
	if (a == 6)
		cout << "Sat." << endl;
	return 0;
}