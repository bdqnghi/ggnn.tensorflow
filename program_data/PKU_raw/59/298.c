int main()
{
	int n,i,j,k,m,count = 0;
	char a[101][101],b[101][101];
	cin >> n;
	for(i = 0 ; i < n + 2; i++)
	{
		for(j = 0 ; j < n + 2; j++)
		{
			a[i][j] = '#';
			b[i][j] = '#';
		}
	}
	for(i = 1 ; i <= n; i++)
	{
		for(j = 1 ; j <= n ; j++)
		{
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	cin >> m;
	for( k = 0 ; k < m - 1 ; k++)
	{
		for(i = 1 ; i <= n ; i++)
		{
			for(j = 1 ; j <= n ; j++)
			{
				if(b[i][j] == '@' && b[i+1][j] == '.')
					a[i+1][j] = '@';
				if(b[i][j] == '@' && b[i-1][j] == '.')
					a[i-1][j] = '@';
				if(b[i][j] == '@' && b[i][j+1] == '.')
					a[i][j+1] = '@';
				if(b[i][j] == '@' && b[i][j-1] == '.')
					a[i][j-1] = '@';
			}
		}
		for(i = 0 ; i < n + 2; i++)
		{
			for(j = 0 ; j < n + 2; j++)
			{
				b[i][j] = a[i][j];
			}
		}
	}
	for(i = 1 ; i <= n; i++)
	{
		for(j = 1 ; j <= n ; j++)
		{
			if(a[i][j] == '@')
				count++;
		}
	}
	cout << count;
	return 0;
}

