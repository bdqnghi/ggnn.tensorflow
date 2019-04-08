int main()
{
	int n, m, i, j, k, count = 0;
	char s[102][102];
	for(i = 0; i < 102; i++)
		for(j = 0; j < 102; j++)
			s[i][j] = '#';
	cin >> n;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
			cin >> s[i][j];
	cin >> m;
	for(k = 1; k < m; k++)
	{
		int a[102][102] = {0};
		for(i = 1; i <= n; i++)
			for(j = 1; j <= n; j++)
			{
				if(s[i][j] == '@' && a[i][j] == 0)
				{
					if(s[i - 1][j] == '.')
					{
						s[i - 1][j] = '@';
						a[i - 1][j] = 1;
					}
					if(s[i + 1][j] == '.')
					{
						s[i + 1][j] = '@';
						a[i+1][j] = 1;
					}
					if(s[i][j - 1] == '.')
					{
						s[i][j - 1] = '@';
						a[i][j - 1] = 1;
					}
					if(s[i][j + 1] == '.')
					{
						s[i][j + 1] = '@';
						a[i][j + 1] = 1;
					}
				}
			}
	}
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n; j++)
		{
			if(s[i][j] == '@')
				count++;
		}
	}
	cout << count << endl;
	return 0;
}
