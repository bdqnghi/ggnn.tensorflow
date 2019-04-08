int main()
{
	int n, i, year, days, mon1, mon2, tmon1, tmon2,
		month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> year >> tmon1 >> tmon2;
		mon1 = tmon1 < tmon2 ? tmon1 : tmon2;
		mon2 = tmon1 > tmon2 ? tmon1 : tmon2;
		if (mon1 <= 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
			days = 1;
        else 
			days = 0;
		for (; mon1 < mon2; mon1++)
		{
			days += month[mon1 - 1];
		}
		
		if (days % 7 == 0)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}
			