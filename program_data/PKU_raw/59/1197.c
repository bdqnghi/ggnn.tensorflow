int main()
{
	int m, n, i, j, k, sum=0;
	char a[102][102];
	cin >> n;
	for(i=1; i <= n; i++)
	{
		for(j=1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	for(i=0; i <= n+1; i++)
	{
		a[0][i]=' ';
		a[i][0]=' ';
		a[n+1][i]=' ';
		a[i][n+1]=' ';
	} 
	cin >> m;
	for(k=1; k<m; k++)
	{
		for(i=1; i <= n; i++)
			for(j=1; j <= n; j++)
			{
				if(a[i][j] == '@')
				{
					if(a[i-1][j] == '.')
					{
						a[i-1][j] = '+';
					}
					if(a[i+1][j] == '.')
					{
						a[i+1][j] = '+';
					}
					if(a[i][j-1] == '.')
					{
						a[i][j-1] = '+';
					}
					if(a[i][j+1] == '.')
					{
						a[i][j+1] = '+';
					}
				}
				else
					continue;
			}
		for(i=1; i <= n; i++)
			for(j=1; j <= n; j++)
			{
				if(a[i][j] == '+')
				{
					a[i][j] ='@';
				}
			}
	}
	for(i=1; i <= n; i++)
		for(j=1; j <= n; j++)
		{
			if(a[i][j] == '@')
				sum++;
		}
	cout << sum << endl;
}