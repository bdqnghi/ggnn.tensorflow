int main()
{
    char a[101][101] = {0};
	int n, i, j, m, day, sum;
	sum = 0;
	cin >> n;
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
		{
            cin >> a[i][j];
		    if(j == n - 1)
				cin.get();
		}
	cin >> m;
	for(day = 1; day < m; day++)
	{
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				if(a[i][j] == '@')
                {
					if(a[i - 1][j] == '.')
					{
						a[i - 1][j] = 'k';
					}
					if(a[i + 1][j] == '.')
					{
						a[i + 1][j] = 'k';
					}
					if(a[i][j - 1] == '.')
					{
						a[i][j - 1] = 'k';
					}
					if(a[i][j + 1] == '.')
					{
						a[i][j + 1] = 'k';
					}
				}
			}
		}
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				if(a[i][j] == 'k')
					a[i][j] = '@';
	}
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
		{
		    if(a[i][j] == '@')
				sum++;
		}
    cout << sum << endl;
	return 0;
}
