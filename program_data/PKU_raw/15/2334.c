int main()
{
	int n;
	cin >> n;
	int a[n][n];
	int i, j;
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	for ( i = 0; i < n; i++ )
	{
		for ( j = 0; j < n; j++ )
		{
			cin >> a[i][j];
			if ( a[i][j] == 0 )
			{
				x1 = i;
				y1 = j;
			}
		}
	}
		
	for ( i = n - 1; i >= 0; i-- )
	{
		for ( j = n - 1; j >= 0; j-- )
		{
			if ( a[i][j] == 0 )
			{
				x2 = i;
				y2 = j;
			}
		}
	}
	
	cout << ( x1 - x2 - 1 ) * ( y1 - y2 - 1 );
	
	return 0;
}