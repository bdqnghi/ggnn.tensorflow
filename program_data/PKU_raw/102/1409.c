int main ()
{
	int n, i, bb=0,gg=0;
	char str[10];
	double b[41], g[41];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> str;
		if (str[0] == 'm')
		{
			bb++;
			cin >> b[bb];
		}
		if (str[0] == 'f')
		{
			gg++;
			cin >> g[gg];
		}
	}
	int j;
	double t;
	for (i =1; i <= bb-1; i++)
	{
		for (j =1; j <= bb - i; j++)
		{
			if (b[j] > b[j+1])
			{
				t = b[j];
				b[j] = b[j+1];
				b[j+1] = t;
			}
		}
	}

	for (i = 1; i <= bb; i++)
		cout << fixed << setprecision(2) << b[i] << " ";
	for (i =1; i <= gg-1; i++)
	{
		for (j =1; j <= gg - i; j++)
		{
			if (g[j] < g[j+1])
			{
				t = g[j];
				g[j] = g[j+1];
				g[j+1] = t;
			}
		}
	}
	for (i = 1; i <= gg; i++)
	{
		if (i < gg)
			cout << fixed << setprecision(2) << g[i] << " ";
		else
			cout << fixed << setprecision(2) << g[i];
	}
	return 0;
}
