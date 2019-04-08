

int main()
{
	int n , i , j , p = 0 ;
	double	num[ 11111 ] , s = 0 , max = 0 , t ;

	cin >> n ;

	for( i = 1 ; i <= n ; i ++ )
	{
		cin >> num[ i ] ;

		s = s + num[ i ] ;
	}

	s = s / n ;

	for( j = 1 ; j <= n ; j ++ )
		for( i = j ; i <= n - j ; i ++ )
			if( num[ i ] > num[ i + 1 ] )
			{
				t = num[ i ] ;
				num[ i ] = num[ i + 1 ] ;
				num[ i + 1 ] = t ; 
			}
	
	for( i = 1 ; i <= n ; i ++ )
		if( max <= fabs( num[ i ] - s ) )
			max = fabs( num[ i ] - s ) ;

	for( i = 1 ; i <= n ; i ++ )
		if( max - fabs( num[ i ] - s ) < 0.0001 )
		{
			if( p == 0 )
			{
				cout << num[ i ] ;
				p = 1 ;
			}
			
			else
				cout << "," << num[ i ] ;
		}

	return 0 ;
}







