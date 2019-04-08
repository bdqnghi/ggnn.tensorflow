int main()
{
	int i, j, n, day, m, count = 0;
	int b[101][101] = {0};
	char a[101][101] = {'0'};
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == '@')
				b[i][j] = 1;
		}
	cin >> m;
	for (day = 1; day < m; day++)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{
				if (b[i][j] == 1)
				{
					if (a[i-1][j] =='.')
					{
						a[i-1][j] ='@';
					}
					if (a[i+1][j] =='.')
					{
						a[i+1][j] ='@';
					}
					if (a[i][j-1] =='.')
					{
						a[i][j-1] ='@';
					}
					if (a[i][j+1] =='.')
					{
						a[i][j+1] ='@';
					}
				}
			}
       for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{
				if (a[i][j] == '@')
					b[i][j] = 1;
			}
	}
	for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{
				if (b[i][j] == 1)
					count++;
			}
	cout << count << endl;
	return 0;
}