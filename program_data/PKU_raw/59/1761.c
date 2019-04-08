//*********************************************
//*???????                             *
//*??????                               *
//*???1300012888                           *
//*???2013.11.12                           *
//*********************************************

int main()
{
	char area[101][101];
	int n, i, j, m, k;

	cin >> n;
	for (i = 0; i <= 100; i++)
	{
		for (j = 0; j <= 100; j++)
			area[i][j] = '#';
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			cin >> area[i][j];
	}
	cin >> m;
	for (k = 1; k <= m - 1; k++)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (area[i][j] == '@')
				{
					if (area[i - 1][j] == '.')
						area[i - 1][j] = '%';
					if (area[i + 1][j] == '.')
						area[i + 1][j] = '%';
					if (area[i][j - 1] == '.')
						area[i][j - 1] = '%';
					if (area[i][j + 1] == '.')
						area[i][j + 1] = '%';
				}
			}
		}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (area[i][j] == '%')
					area[i][j] = '@';
			}
		}

	}
	k = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (area[i][j] == '@')
				k++;
		}
	}
	cout << k << endl;

	return 0;
}