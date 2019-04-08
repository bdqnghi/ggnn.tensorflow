
int main()
{
	int n;
	cin>>n;
	char a[102][102];
	int i,j,m,s = 0;

	for (i = 1;i <= n;i++)
		for (j = 1;j <= n;j++)
			cin>>a[i][j];

	cin>>m;

	while(m > 1)
	{
		for (i = 1;i <= n;i++)
		{
			for (j = 1;j <= n;j++)
			{
				if (a[i][j] == '@')
				{
					if (a[i+1][j] == '.')
						a[i+1][j] = '*';
			        if(a[i-1][j] == '.')
						a[i-1][j] = '*';
					if(a[i][j+1] == '.')
						a[i][j+1] = '*';
					if (a[i][j-1] == '.')
						a[i][j-1] = '*';
				}
			}
		}


		for (i = 1;i <= n;i++)
		{
			for (j = 1;j <= n;j++)
				if (a[i][j] == '*')
					a[i][j] = '@';
		}

		m--;
	}

	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= n;j++)
			if(a[i][j] == '@')
				s++;
	}

	cout<<s<<endl;
	return 0;
}