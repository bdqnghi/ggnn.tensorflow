int main()
{
	int n,m,num,i,j,k,a[102][102],b[101][101];
	char c;
	cin >> n;
	for (i = 0; i <= n + 1 ; i++)
	{
		for (j = 0; j <= n + 1; j++)
		{
			a[i][j] = 2;
		}
	}
	for (i = 1; i <= n ; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cin >> c;
			switch(c)
			{
				case '.': a[i][j] = 1;break;
				case '@': a[i][j] = 0;break;
				case '#': a[i][j] = 2;break;
			}
		}
	}
	cin >> m;
	for (k = 1; k <= m - 1; k++)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (a[i][j] == 1 && (a[i + 1][j] == 0 || a[i - 1][j] == 0 || a[i][j + 1] == 0 || a[i][j - 1] == 0))
					b[i][j] = 0;
				else
					b[i][j] = a[i][j];
			}
		}
		for (i = 1; i <= n; i++)
		{
			for (j = 1;j <= n; j++)
			{
				a[i][j] = b[i][j];
			}
		}
	}

	num = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1;j <= n; j++)
		{
			if (a[i][j] == 0)
			{
				num++;
			}
		}
	}
	cout << num  << endl;
	return 0;
}
