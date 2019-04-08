int main()
{
	char a[100][100];
	int n, i, j, k, m, sum = 0;
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	cin >> m;
	for (k = 1; k < m; k++)
	{
		for (i = 0; i < n; i++)
		  for (j = 0; j < n; j++)
		  {
			  if (a[i][j] == '@' && a[i - 1][j] == '.' && i != 0)
				  a[i - 1][j] = 'a';
			  if (a[i][j] == '@' && a[i + 1][j] == '.' && i != n - 1)
				  a[i + 1][j] = 'a';
			  if (a[i][j] == '@' && a[i][j - 1] == '.' && j != 0)
				  a[i][j - 1] = 'a';
			  if (a[i][j] == '@' && a[i][j + 1] == '.' && j != n - 1)
				  a[i][j + 1] = 'a';
		  }
		 for (i = 0; i < n; i++)
		  for (j = 0; j < n; j++)
			  if (a[i][j] == 'a')
				  a[i][j] = '@';
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n;j++)
			if (a[i][j] == '@')
				sum++;
	cout << sum;
	return 0;
}