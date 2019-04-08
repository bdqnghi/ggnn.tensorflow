int main()
{
	int n, i, j, k, m, number = 0;
	char p, str[102][102];
	cin >> n;
	p = cin.get();
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			str[i][j] = cin.get();
			if (j == n)
				p = cin.get();
		}
	}
	cin >> m;
	for (k = 1; k <= m - 1; k++)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (str[i][j] == '@')
				{
					if (str[i - 1][j] != '#' && str[i - 1][j] != '@')
						str[i - 1][j] = '0';
					if (str[i + 1][j] != '#' && str[i + 1][j] != '@')
						str[i + 1][j] = '0';
					if (str[i][j - 1] != '#' && str[i][j - 1] != '@')
						str[i][j - 1] = '0';
					if (str[i][j + 1] != '#' && str[i][j + 1] != '@')
						str[i][j + 1] = '0';
				}
			}
		}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (str[i][j] == '0')
					str[i][j] = '@';
			}
		}

	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (str[i][j] == '@')
				number++;
		}
	}
	cout << number;
	return 0;
}
