int main()
{
	int n, year, a, b, c, i, j, day;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> year >> a >> b;
		if (a > b)
		{
			c = a;
			a = b;
			b = c;
		}
		day = 0;
		for(j=a;j<b;j++)
		{
			day = day + 31;
			if(j == 4 ||j == 6||j == 9 ||j == 11)
				day = day -1;
			if(j == 2)
			{
				if((year % 4 ==0 && year % 100 != 0) || year % 400 == 0)
					day = day - 2;
				else
					day = day - 3;
			}
		}
		if(day % 7 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
