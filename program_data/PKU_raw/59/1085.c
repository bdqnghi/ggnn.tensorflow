int main()
{
	int n, m, i, j, day[103][103] = {0}, k;
	char room[103][103];
	memset(room, '#', 103 * 103 * sizeof(char));
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cin >> room[i][j];
			if (room[i][j] == '@')
			{
				day[i][j] = 1;
			}
		}
	}
	cin >> m;
	for (k = 2; k <= m; k++)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (room[i][j] == '@' && day[i][j] == k - 1)
				{
					if (room[i-1][j] == '.')
					{
						room[i-1][j] = '@';
						day[i-1][j] = k;
					}
					if (room[i+1][j] == '.')
					{
						room[i+1][j] = '@';
						day[i+1][j] = k;
					}
					if (room[i][j+1] == '.')
					{
						room[i][j+1] = '@';
						day[i][j+1] = k;
					}
					if (room[i][j-1] == '.')
					{
						room[i][j-1] = '@';
						day[i][j-1] = k;
					}
				}
			}
		}
	}
	int count = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (room[i][j] == '@')
			{
				count++;
			}
		}
	}
	cout << count;
	return 0;
}