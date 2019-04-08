int main ()
{
	int n, day, i, j, k, num = 0;
	char x[101][101];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cin >> x[i][j];
		}
	}
	cin >> day;
	for (k = 2; k <= day; k++)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (x[i][j] == '!')
					x[i][j] = '@';
			}
		}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (x[i][j] == '@' && x[i-1][j] =='.')
					x[i-1][j] = '!';
				if (x[i][j] == '@' && x[i+1][j] =='.')
					x[i+1][j] = '!';
				if (x[i][j] == '@' && x[i][j-1] =='.')
					x[i][j-1] = '!';
				if (x[i][j] == '@' && x[i][j+1] =='.')
					x[i][j+1] = '!';
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (x[i][j] == '@' || x[i][j] == '!')
				num++;
		}
	}
	cout << num;
	return 0;
}