
int main()
{
	int m,n,p;
	cin >> m;
	n = m;p = m;
	while(n --)
	{
		m = p;
		int sum = 0,i,j,a[120][120],min;
	//	cin >> m;
		for ( i = 0; i < m; i ++)
			for ( j = 0; j < m; j ++)
				cin >> a[i][j];
		while( -- m)
		{
			for ( i = 0; i <= m; i ++)
			{
				for ( min = a[i][0],j = 0; j <= m; j ++)
					if (a[i][j] < min) min = a[i][j];
				for ( j = 0; j <= m; j ++)
					a[i][j] -= min;
			}
			for ( j = 0; j <= m; j ++)
			{
				for ( min = a[0][j], i = 0; i <= m; i ++)
					if ( a[i][j] < min) min = a[i][j];
				for ( i = 0;i <= m; i ++)
					a[i][j] -= min;
			}
			sum += a[1][1];
			for ( i = 0; i <= m; i ++)
				for ( j = 1; j <= m; j ++)
					a[i][j] = a[i][j+1];
			for ( j = 0; j <= m-1; j ++)
				for ( i = 1; i <= m; i ++)
					a[i][j] = a[i+1][j];
		}
		cout << sum << endl;
	}
	return 0;
}