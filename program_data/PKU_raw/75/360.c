int main()
{
	int n , i , j = 1 , x[ 9999 ] = { 0 } , y[ 9999 ] , non[ 9999 ] , p[ 9999 ] = { 0 } , max_p , min , max , len ;

	char str[ 9999 ] ;
	
	/*for( i = 1 ; ; i ++ )
	{
		cin >> x[ i ] ;

		cin.get( non , 1 ) ;

		if( non[ 0 ] == '\n' )
			break ;
	}**/

	cin.getline( str , 9999 ) ;

	len = strlen( str ) ;

	for( i = 0 ; i <= len ; i ++ )
		if( str[ i ] == ',' || str[ i ] == '\0' )
		{
			non[ j ] = i ;

			j ++ ;
		}

	n = j - 1 ;

	for( j = 0 ; j < non[ 1 ] ; j ++ )
		x[ 1 ] = 10 * x[ 1 ] + str[ j ] - '0' ;

	for( i = 2 ; i <= n ; i ++ )
		for( j = non[ i - 1 ] + 1 ; j < non[ i ] ; j ++ )
			x[ i ] = 10 * x[ i ] + str[ j ] - '0' ;

	for( i = 1 ; i <= n ; i ++ )
	{
		cin >> y[ i ] ;

		cin.get() ;
	}

	min = x[ 1 ] , max = y[ 1 ] ;

	for( i = 1 ; i <= n ; i ++ )
	{
		if( min > x[ i ] )
			min = x[ i ] ;

		if( max < y[ i ] )
			max = y[ i ] ;
	}

	for( i = min ; i <= max ; i ++ )
		for( j = 1 ; j <= n ; j ++ )
			if( x[ j ] <= i && y[ j ] >= i + 1 )
				p[ i ] ++ ;

	max_p = p[ min ] ;

	for( i = min + 1 ; i <= max ; i ++ )
		if( max_p < p[ i ] )
			max_p = p[ i ] ;
		
	cout << n << ' ' << max_p ;

	return 0 ;
}