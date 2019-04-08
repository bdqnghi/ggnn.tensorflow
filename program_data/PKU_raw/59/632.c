int main()
{
	char s[101][101];
	char e[101][101];
	int n,m,i,j,k,count;
	count = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cin >> e[i][j];
		}
	}
	cin >> m;
	for (k = 1; k<= m; k++)
	{
		for (i = 1; i <= n; i++)
	    {
		    for (j = 1; j <= n; j++)
		    {
			    s[i][j] = e[i][j];
		    }
	    }
		for (i = 1; i <= n; i++)
	    {
		    for (j = 1; j <= n; j++)
		    {
			    if (s[i][j] == '@')
				{
					if (i != 1)
					{
						if (s[i-1][j] != '#')
							e[i-1][j] = '@';
					}
					if (i != n)
					{
						if (s[i+1][j] != '#')
							e[i+1][j] = '@';
					}
					if (j != 1)
					{
						if (s[i][j-1] != '#')
							e[i][j-1] = '@';
					}
					if (j != n)
					{
						if (s[i][j+1] != '#')
							e[i][j+1] = '@';
					}
				}
		    }
	    }
	}
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (s[i][j] == '@')
				count++;
		}
	}
	cout << count << endl;
	cin.get();
	cin.get();
	return 0;
}