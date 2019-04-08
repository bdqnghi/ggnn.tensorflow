int main()
{
	int n , m , len1 , len2 , i = 0 , j = 0 ;

	char jian[ 1001 ] , bjian[ 1001 ] ;

	int jn[ 1001 ] , bj[ 1001 ] ;
		
	cin >> n ;

	for( m = 1 ; m <= n ; m ++ )
	{
		cin >> bjian >> jian ;

		len1 = strlen( bjian ) ;
		len2 = strlen( jian ) ;
		
		memset( jn , 0 , sizeof( jian ) ) ;
		memset( bj , 0 , sizeof( bjian ) ) ;

		//cout << bjian << endl << jian << endl ;

		j = 0 ;

		//???????????????
		for( i = len1 - 1 ; i >= 0 ; i -- )
			bj[ j ++ ] = bjian[ i ] - '0' ;

		j = 0 ;

		//???????????????
		for( i = len2 - 1 ; i >= 0 ; i -- )
			jn[ j ++ ] = jian[ i ] - '0' ;

		if( strcmp( bjian , jian ) != 0)
		{

			//????
			for( i = 0 ; i <= len1 ; i ++ )
			{
				bj[ i ] = bj[ i ] - jn[ i ] ;

				if( bj[ i ] < 0 )
				{
					bj[ i + 1 ] -- ;
					bj[ i ] += 10 ;
				}
			}

			i = len1 ;

			//???????0??
			while( bj[ i ] == 0 ) 
				i -- ;

			for( ; i >= 0 ; i -- )
				cout << bj[ i ] ;

			cout << endl ;
		}

		else
			cout << '0' << endl ;
	}

	return 0 ;
}

