
char a[101][101], b[101][101];

int main()
{
	int n, i, j, m, k, count = 0;
	for (i = 1; i <= 100; i++)
		for (j = 1; j <= 100; j++)
		{
			a[i][j] = '0';
			b[i][j] = '0';
		}		
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];
	cin >> m;
	for (k = 1; k < m; k++)
	{
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
			{
				if (a[i][j] == '@')
				{
					b[i][j] = '@';
					if (a[i-1][j] != '#')
						b[i-1][j] = '@';
					if (a[i+1][j] != '#')
						b[i+1][j] = '@';
					if (a[i][j-1] != '#')
						b[i][j-1] = '@';
					if (a[i][j+1] != '#')
						b[i][j+1] = '@';
				}
			}
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
			{
				if (b[i][j] == '@')
					a[i][j] = b[i][j];
			}
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			if (a[i][j] == '@')
				count++;
		}
	cout << count;
	return 0;
}