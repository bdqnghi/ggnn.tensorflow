int main()
{
	int n, i, j, a[301], sum = 0, p;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}
    for (j = 1; j < n; j++)
	{
		for (i = 1; i <= n -j; i++)
		{
			if (a[i] > a[i+1])
			{
				p = a[i];
				a[i] = a[i+1];
				a[i+1] = p;
			}
		}
	}
    int  g[301],num[301] = {0};
    double sum1, aver, b[301], q= 0;
	sum1 = sum;
	aver = sum1 /n;
    for (i = 1; i <= n; i++)
	{
		if (a[i] - aver < 0) b[i] = aver - a[i];
		else b[i] = a[i] -aver;
		if (b[i] > q)
		{
			q = b[i];
		}
	}
    for (i = 1; i <= n; i++)
	{
		if (b[i] == q)
		{
			num [i] = i;
		}
	}
	q = 1;
    for (i = 1; i <= n; i++)
	{
		if (num[i] == 0) continue;
		else
		{
			g[i] = q;
			q++;
		}
	}
    for (i = 1; i <= n; i++)
	{
		if (num[i] == 0) continue;
		else
		{
			if (g[i] == 1) cout <<a[i];
			else
			{
				cout << "," << a[i];
			}
		}
	}
	return 0;
}



