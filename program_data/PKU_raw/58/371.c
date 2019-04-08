int main()
{
	int n , i , k , len , f ;

	char c[ 99 ] ;

	cin >> n ;
	cin.get() ;

	for( i = 1 ; i <= n ; i ++ )
	{
		cin.getline( c , 99 ) ;

		len = strlen( c ) ;

		f = 0 ;

		if( ( c[ 0 ] < 'A' || ( c[ 0 ] > 'Z' && c[ 0 ] < 'a' ) || c[ 0 ] > 'z' ) && c[ 0 ] != '_' )
		{
			cout << 0 << endl ;
			continue ;
		}

		f = 1 ;

		for( k = 1 ; k < len ; k ++ )
		{
			if( ( c[ k ] >= 'A' && c[ k ] <= 'Z' ) || ( c[ k ] >= 'a' && c[ k ] <= 'z' ) || c[ k ] == '_' || ( c[ k ] >= '0' && c[ k ] <= '9' ) )
				f ++ ;
			else 
				f = 0 ;
		}

		if( f == len )
			cout << 1 << endl ;

		else 
			cout << 0 << endl ;
	}

	return 0 ;
}






