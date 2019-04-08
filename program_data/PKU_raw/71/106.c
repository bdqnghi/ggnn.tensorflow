int main()
{
	int n, y, m, t, a[13], sum;
	for (int i = 1; i < 8; i = i + 2)
		a[i] = 31;
	a[8] = 31;
	a[10] = 31;
	a[12] = 31;
	a[4] = 30;
	a[6] = 30;
	a[9] = 30;
	a[11] = 30;
	cin >> n;
	for (int i = 0; i < n; i ++)
	{
		cin >> y >> m >> t;
		sum = 0;
		if (m > t)
		{
			int j = m;
			m = t;
			t = j;
		}
		if ( y % 100 == 0)
		{
			if (y / 100 % 4 == 0)
				a[2] = 29;
			else
				a[2] = 28;
		}
		else
		{
			if (y % 4 == 0)
				a[2] = 29;
			else
				a[2] = 28;
		}
		for (int i = m; i < t; i ++)
			sum = sum + a[i];
		if (sum % 7 == 0)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}