int main()
{
	int a[100][100] = { 0 } , b[10000] = { 0 } ;
	int r , l ;
	int i , j = 0 , k = 0 ;
	cin >> r >> l ;
    int n = 0 , s = r - 1 , e = l - 1 , w = 0 ;
	for ( i = 0 ; i < r ; i++ )
		for ( j = 0 ; j < l ; j++ )
			cin >> a[i][j] ;
    i = 0 ;
	while ( i <=  r * l )
	{
		k = n ; j = w ;
		for ( j = w ; j <= e ; j++ )
		{
			cout << a[k][j] << endl ;
			i++ ;
			if ( i == r * l )
				break ;
		}// j = e + 1
		if ( i == r * l )
			break ;
		j-- ;
		for ( k = n + 1 ; k <= s - 1 ; k++ )
		{
			cout << a[k][j] << endl ;
			i++ ;
			if ( i == r * l )
			break ;
		}// j=e , k = s - 1 ;
		if ( i == r * l )
			break ;
		for ( j = e ; j >= w ; j-- )
		{
			cout << a[k][j] << endl ;
			i++ ;
			if ( i == r * l )
			break ;
		} // j = w - 1
		if ( i == r * l )
			break ;
		j++ ;
		for ( k = s - 1 ; k >= n + 1 ; k-- )
		{
			cout << a[k][j] << endl ;
			i++ ;
			if ( i == r * l )
			break ;
		}
		// k = n
		if ( i == r * l )
			break ;
		n++ ; s-- ; e-- ; w++ ;
	}
	return 0 ;
}