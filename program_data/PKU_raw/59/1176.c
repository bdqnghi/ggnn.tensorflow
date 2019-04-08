
int main()
{
	int n;
	cin >> n;
	char room[100][100];
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> room[i][j];
	int m;
	cin >> m;
	int k;
	for (k = 2; k <= m; k++)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				if (room[i][j] == '@')
				{
					if (j + 1 < n && room[i][j + 1] == '.')
						room[i][j + 1] = '?';
					if (j - 1 >= 0 && room[i][j - 1] == '.')
						room[i][j - 1] = '?';
					if (i + 1 < n && room[i + 1][j] == '.')
						room[i + 1][j] = '?';
					if (i - 1 >= 0 && room[i - 1][j] == '.')
						room[i - 1][j] = '?';
				}
				for (i = 0; i < n; i++)
					for (j = 0; j < n; j++)
						if (room[i][j] == '?')
							room[i][j] = '@';
	}
	int count = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (room[i][j] == '@')
				count++;
	cout << count << endl;
	return 0;
}