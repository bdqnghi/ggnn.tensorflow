//**************************************
//* ???????                     *
//* ????? 1300017657              *
//* ???2013.11.12                   *
//**************************************

int main()
{
	int n, m, num = 0;
	char a[102][102], b[102][102];

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	cin >> m;

	for (int d = 1; d < m; d++)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (a[i][j] == '@')
				{
					if (a[i+1][j] == '.')
					{
						b[i+1][j] = '@';
					}
					if (a[i-1][j] == '.')
					{
						b[i-1][j] = '@';
					}
					if (a[i][j+1] == '.')
					{
						b[i][j+1] = '@';
					}
					if (a[i][j-1] == '.')
					{
						b[i][j-1] = '@';
					}
				}
			}
		}

		for (int p = 1; p <= n; p++)
		{
			for (int q = 1; q <= n; q++)
			{
				a[p][q] = b[p][q];
			}
		}
	}

	for (int r = 1; r <= n; r++)
	{
		for (int s = 1; s <= n; s++)
		{
			if (a[r][s] == '@') num++;
		}
	}

	cout << num;
	
	return 0;
}