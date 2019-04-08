int main()
{
	int m , n;
	int a[ 21 ][ 21 ];
	int i , j;
	cin >> m >> n;
	for ( i = 0 ; i <= m - 1 ; i++ )
	{
		for ( j = 0 ; j <= n - 1 ; j++ )
		{
			cin >> a[ i ][ j ];
		}
	}
	if ( a[ 0 ][ 0 ] >= a[ 0 ][ 1 ] && a[0][0] >= a[1][0] )
		cout << 0 << ' ' << 0 << endl;
	for ( i = 1 ; i <= n - 2 ; i++ )
	{
		if ( a[ 0 ][ i ] >= a[0][i-1] && a[0][i] >= a[0][i+1] && a[0][i] >= a[1][i] )
		{
			cout << 0 << ' ' << i << endl;
		}
	}
	if ( a[ 0 ][ n - 1 ] >= a[ 0 ][ n - 2 ] && a[0][n - 1] >= a[1][n - 1] )
		cout << 0 << ' ' << n - 1 << endl;
	for ( j = 1 ; j <= m - 2 ; j++ )
	{
		if ( a[ j ][ 0 ] >= a[ j ][ 1 ] && a[j][0] >= a[j+1][0] && a[j][0] >= a[j - 1][0] )
		   cout << j << ' ' << 0 << endl;
	    for ( i = 1 ; i <= n - 2 ; i++ )
		{
		   if ( a[ j ][ i ] >= a[j][i-1] && a[j][i] >= a[j][i+1] && a[j][i] >= a[j+1][i] && a[j][i] >= a[j - 1][i] )
		   {
		     	cout << j << ' ' << i << endl;
		   }
		}
    	if ( a[ j ][ n - 1 ] >= a[ j ][ n - 2 ] && a[j][n - 1] >= a[j+1][n - 1]  && a[j][n - 1] >= a[j - 1][n - 1])
	    	cout << j << ' ' << n - 1 << endl;
	}
	if ( a[ m - 1 ][ 0 ] >= a[ m - 1 ][ 1 ] && a[m-1][0] >= a[m-2][0] )
		cout << m - 1 << ' ' << 0 << endl;
	for ( i = 1 ; i <= n - 2 ; i++ )
	{
		if ( a[ m - 1 ][ i ] >= a[m-1][i-1] && a[m-1][i] >= a[m-1][i+1] && a[m-1][i] >= a[m-2][i] )
		{
			cout << m - 1 << ' ' << i << endl;
		}
	}
	if ( a[ m - 1 ][ n - 1 ] >= a[ m - 1 ][ n - 2 ] && a[m-1][n - 1] >= a[m-2][n - 1] )
		cout << m - 1 << ' ' << n - 1 << endl;
	return 0;
}
