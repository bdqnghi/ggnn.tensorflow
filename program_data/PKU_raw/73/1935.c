int main()
{
	int s[ 6 ][ 6 ] = { 0 } , i , j , t[ 6 ][ 6 ] , a , b , c = 0 , m = 0 ;

	for( i = 1 ; i <= 5 ; i ++ )
		for( j = 1 ; j <= 5 ; j ++ )
			cin >> s[ i ][ j ] ;

	for( i = 1 ; i <= 5 ; i ++ )
	{
		a = i , b = 1 , t[ a ][ b ] = s[ i ][ 1 ] ;

		for( j = 1 ; j <= 5 ; j ++ )
			if( t[ a ][ b ] < s[ i ][ j ] )
				a = i , b = j , t[ a ][ b ] = s[ i ][ j ] ;

		for( j = 1 ; j <= 5 ; j ++ )
			if( t[ a ][ b ] <= s[ j ][ b ] )
				c ++ ;

		if( c == 5 )
		{
			cout << a << ' ' << b << ' ' << t[ a ][ b ] << endl ;
			m = 1 ;
		}

		c = 0 ;
	}

	if( m == 0 )
		cout << "not found" << endl ;
	
	return 0 ;
}



