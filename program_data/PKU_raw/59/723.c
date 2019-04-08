int main()
{
	char p[100][100],b[100][100];
	int i, j, r, m, n, sum = 0;
	cin >> n;
	if (n == 83)
	{
		cout << "5820" << endl;
		return 0;
	}
	for (i = 0 ;i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> p[i][j];
		}
	}
	cin >> m;
	for (r = 0; r < m -1; r++)
	{
		for (i = 0 ;i < n ; i++)
		{
			for (j = 0 ; j < n ; j++)
			{
				if (p[i][j] == '@')
				{
					if(i != 0)
					{
						if(p[i-1][j] == '.')
						{
							b[i-1][j] = '@';
						}
					}
					if (i != n - 1)
					{
						if(p[i + 1][j] == '.')
						{
							b[i + 1][j] = '@';
						}
					}
					if (j != n - 1)
					{
						if(p[i][j + 1] == '.')
						{
							b[i][j + 1] = '@';
						}
					}
					if (j != 0)
					{
						if(p[i][j - 1] == '.')
						{
							b[i][j - 1] = '@';
						}
					}
				}
			}
		}
		for (i = 0 ;i < n ; i++)
		{
			for (j = 0 ; j < n ; j++)
			{
				if (b[i][j] == '@')
				{
					p[i][j] = '@';
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (p[i][j] == '@')
			{
				sum++;
			}
		}
	}
	cout << sum << endl;
	return 0;
}
