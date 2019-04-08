int main()
{
	int n , len = 0 , l = 0;
	int i , j;
	char a[ 1000 ][ 50 ];
	cin >> n;
	for ( i = 0 ; i <= n - 1 ; i++ )
		cin >> a[ i ];
    l = strlen( a[0] );
	cout << a[ 0 ];
	for ( i = 1 ; i <= n - 1 ; i++ )
	{
		len = strlen( a[ i ] );
		if ( l + len + 1 <= 80 )
		{
			l = l + len + 1;
			cout << ' ' << a[ i ];
		}
		else if( l + len + 1 > 80 )
		{
			cout << endl;
			cout << a[ i ];
			l = len;
		}
	}
	return 0;
}

