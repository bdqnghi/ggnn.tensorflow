int main()
{
	int a[102][102] = {0}, b[102][102] = {0};
	char c;
	int i, j, n, d, k = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			cin >> c;
			if (c == '.')
				a[i][j] = b[i][j] = 1;
			if (c == '@')
				a[i][j] = b[i][j] = -1;
			if (c == '#')
				a[i][j] = b[i][j] = 0;
		}
	cin >> d;
	d--;
	while (d--)
	{
		
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
			{
				if (a[i][j] == -1)
				{
					if(b[i][j + 1] == 1)
						b[i][j + 1] = -1;
					if(b[i][j - 1] == 1)
						b[i][j - 1] = -1;
					if(b[i - 1][j] == 1)
						b[i - 1][j] = -1;
					if(b[i + 1][j] == 1)
						b[i + 1][j] = -1;
				}
			}
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				a[i][j] = b[i][j];
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			if (a[i][j] == -1)
				k++;
		}
		cout << k;
	return 0;
}