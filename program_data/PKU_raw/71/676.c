int main()
{
	int n, k, year, mon, mona, monb, monc, leap, days;
	cin >> n;
	for (k = 1; k <= n; k++)
	{
		days = 0;
		cin >> year >> mona >> monb;
		leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
		if (mona < monb)
		{
		}
			else
			{
				monc = mona;
				mona = monb;
				monb = monc;
			}
			for (mon = mona; mon <= monb - 1; mon++)
			{
				switch (mon)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					{
						days += 31;
						break;
					}
				case 4:
				case 6:
				case 9:
				case 11:
					{
						days += 30;
						break;
					}
				case 2:
					{
						days += 28 + leap;
						break;
					}
				}
			}
			//cout << "days=" << days << endl;
			if (days % 7 == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
	}
	return 0;
	
}