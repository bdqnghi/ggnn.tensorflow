int main()
{
	int n , m , i , j , k , ct[ 150 ] = { 0 } , t[ 27 ] = { 0 } , len , a , f = 0 ;

	char str[ 100001 ] ;

	cin >> n ;

	for( m = 1 ; m <= n ; m ++ )
	{
		cin >> str ;

		len = strlen( str ) ;

		//????
		for( i = 97 ; i <= 122 ; i ++ )
			ct[ i ] = 0 ;

		//????
		for( i = 0 ; i <= 26 ; i ++ )
			t[ i ] = 0 ;

		for( i = 0 ; i < len ; i ++ )
		{
			a = str[ i ] ;

			//?ct[]??
			ct[ a ] ++ ;
		}

		for( i = 97 , j = 0 ; i <= 122 ; i ++ )
			if( ct[ i ] == 1 )
			{
				t[ j ++ ] = i ; //t[]?????????ascll
				//cout << i ;
			}

		//????
		f = 0 ;

		for( i = 0 ; i < len ; i ++ )
			for( k = 0 ; k < j ; k ++ )
				if( t[ k ] == str[ i ] && f == 0 )
				{
					a = i ;
					f = 1 ;
				}

		if( f == 0 )
			cout << "no" << endl ;
		else
			cout << str[ a ] << endl ;
	}

	return 0 ;
}