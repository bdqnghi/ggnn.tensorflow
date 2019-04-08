int main()
{
	int n;
	cin >> n;
	char a[102][103];
	char temp[102][103];

	for (int i = 1; i <= n; i++)
		cin >> a[i] + 1;
	memcpy(temp,a,102*103);
	int m;
	cin >> m;
	for (int o = 0; o < m - 1; o++)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= strlen(a[i]+1); j++)
				if (a[i][j] == '@')
				{
					if (a[i+1][j] == '.')
						temp[i+1][j] = '@';
					if (a[i-1][j] == '.')
						temp[i-1][j] = '@';
					if (a[i][j+1] == '.')
						temp[i][j+1] = '@';
					if (a[i][j-1] == '.')
						temp[i][j-1] = '@';
				}
		}
		memcpy(a,temp,102*103);
	}
	int c = 0;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= strlen(a[i]+1); j++)
				if (a[i][j] == '@')
					c++;
		cout << c;

}

