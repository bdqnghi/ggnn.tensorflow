int main()
{
	int a[ 17 ] , n , m , i = 1 , t = 0 ;

	cin >> a[ 1 ] ;

	while( a[ i ] != -1 )
	{
		while( a[ i ] > 0 ) 
		{
			i = i + 1 ;
			cin >> a [ i ] ;
		} 

		for( m = 1 ; m < i ; m ++ )
			for( n = m + 1 ; n <= i ; n ++ )
				if( a[ m ] == 2 * a[ n ] || a[ n ] == 2 * a[ m ] )
					t = t + 1 ;

		cout << t << endl ;

		for( i = 0 ; i < 17 ; i ++ )
			a[ i ] = 0 ;

		t = 0 ;
		i = 1 ;
		
		cin >> a[ 1 ] ;
	}

	return 0 ;
}