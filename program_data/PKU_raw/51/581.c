int main()
{
	char a[501];
	int n, i, j, e, t = 0, s, g, m = 0;
	char b[500][6];
	char c[6];
	int d[500];
	cin >> n;
	cin >> a;
	e = strlen(a);
	for(i = 0; i <= e - n; i ++)
	{
		s = 0;
		g = 0;
		for(j = i; j <= i + n - 1; j ++)
		{
			c[s] = a[j];
			s ++;
		}
		c[n] = 0;
		for(j = 0; j <= t - 1; j ++)
		{
			if(strcmp(b[j], c) == 0)
			{
				d[j] = d[j] + 1;
				g = 1;
				break;
			}
		}
		if(g == 0)
		{
			strcpy(b[t], c);
			d[t] = 1;
			t ++;
		}
	}
	for(i = 0; i <= t - 1; i ++)
	{
		if(d[i] > m)
			m = d[i];
	}
	if(m > 1)
	{
		cout << m <<endl;
		for(i = 0; i <= t - 1; i ++)
		{
			if(m == d[i])
				cout << b[i] << endl;
		}
	}
	else
		cout << "NO";
	return 0;
}





