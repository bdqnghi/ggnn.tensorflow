int main()
{
	char s[100][100], a[100][100] ={0};
	int m, n, i, j, k, sum = 0;
	cin >> n;
	for(i = 0 ; i < n ; i++)
	{
		for( j = 0 ; j < n ; j++)
		{
			cin >> s[i][j];
		}
	}
	cin >> m ;
	for(k = 1 ; k < m ; k++)
	{
		for( i = 0 ; i < n ; i++)
		{
			for(j = 0; j < n ; j++)
			{
				if(s[i][j] == '@')
				{
					if(j - 1 >= 0)
					{
						if(s[i][j - 1] != '#')
							a[i][j - 1] = '@';
					}
					if(j + 1 < n)
					{
						if(s[i][j + 1] != '#')
							a[i][j + 1] = '@';
					}
					if(i - 1 >= 0)
					{
						if(s[i - 1][j] != '#')
							a[i - 1][j] = '@';
					}
					if(i + 1 < n)
					{
						if(s[i + 1][j] != '#')
							a[i + 1][j] = '@';
					}
				}
			}
		}
		for(i = 0 ; i < n ; i++)
		{
			for(j = 0 ; j < n ; j++)
			{
				if(a[i][j] == '@')
					s[i][j] = '@';
			}
		}
	}
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			if(s[i][j] == '@')    
				sum ++;
		}
	}
	cout << sum;
	return 0;
}