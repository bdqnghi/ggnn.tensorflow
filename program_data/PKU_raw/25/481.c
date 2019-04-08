int main()
{
	int i, n, m, flag = 0, k;
	int a[40] = {0};
	cin >> n;
	a[39] = 1;
	m = 0;
	for (k = 1; k <= n; k ++)
	{
		for (i = 39; i >= 1; i --)
		{
			if (a[i] >= 5)
			{
				a[i] = a[i] * 2 - 10 + m;
				m = 1;
			}
			else 
			{
				a[i] = a[i] * 2 + m;
				m = 0;
			}
		}
	}
	for (i = 0; i <= 39; i ++)
	{
		if (a[i] != 0)
			flag = 1;
		if (flag != 0)
			cout << a[i];
	}
	return 0;
}