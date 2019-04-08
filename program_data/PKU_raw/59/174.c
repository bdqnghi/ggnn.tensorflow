

int main()
{
	int n, i, j, sum, m, t;
	char a[200][200], b[200][200];
	cin >> n;
	sum = 0;
	for(i = 0; i <= n + 1; i ++)
	{
		for(j = 0; j <= n + 1; j ++)
		{
			if(i == 0 || i == n + 1 || j == 0 || j == n + 1)
				a[i][j] = '#';
			else
				cin >> a[i][j];
		}
	}
	for(i = 0; i <= n + 1; i ++)
	{
		for(j = 0; j <= n + 1; j ++)
		{
			b[i][j] = a[i][j];
		}
	}
	cin >> m;
	for(t = 1; t < m; t ++)
	{
		for(i = 1; i <= n; i ++)
		{
			for(j = 1; j <= n; j ++)
			{
				if(a[i][j] == '@')
				{
					if(a[i - 1][j] == '.')
						b[i - 1][j] = '@';
					if(a[i + 1][j] == '.')
						b[i + 1][j] = '@';
					if(a[i][j - 1] == '.')
						b[i][j - 1] = '@';
					if(a[i][j + 1] == '.')
						b[i][j + 1] = '@';
				}
			}
		}
		for(i = 1; i <= n; i ++)
		{
			for(j = 1; j <= n; j ++)
			{
				a[i][j] = b[i][j];
			}
		}
	}
	for(i = 1; i <= n; i ++)
	{
		for(j = 1; j <= n; j ++)
		{
			if(a[i][j] == '@')
				sum ++;
		}
	}
	cout << sum << endl;
	return 0;
}