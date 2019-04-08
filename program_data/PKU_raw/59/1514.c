//********************************
//*???????   **
//*????? 1300012707 **
//*???2013.11.06  **
//********************************
int main()
{
	int a[101][101], n, m, num, i ,j;
	char c;
	cin >> n;
	num = 0;
	for ( i = 1; i <= n; i = i + 1)
	{
		for ( j = 1; j <= n; j = j + 1)
		{
			cin >> c;
			if ( c == '@')
			{
				num = num + 1;
				a[i][j] = 1;
			}
			if ( c == '.')
			{
				a[i][j] = 0;
			}
			if ( c == '#')
			{
				a[i][j] = -1;
			}
		}
	}
	cin >> m;
	for ( int k = 2; k <= m; k = k + 1)
    {
		for ( i = 1; i <= n; i = i + 1)
		{
			for ( j = 1; j <= n; j = j + 1)
			{
				if ( ( a[i][j] > 0) && ( a[i][j] < k))
				{
					if ( ( a[i + 1][j] == 0) && ( i < n))
					{
						a[i + 1][j] = k;
						num = num + 1;
					}
					if ( ( a[i - 1][j] == 0) && ( i > 1))
					{
						a[i - 1][j] = k;
						num = num + 1;
					}
					if ( (a[i][j + 1] == 0) && ( j < n))
					{
						a[i][j + 1] = k;
						num = num + 1;
					}
					if ( ( a[i][j - 1] == 0) && ( j > 1))
					{
						a[i][j - 1] = k;
						num = num + 1;
					}
				}
			}
		}
	}
	cout << num << endl;
	return 0;
}