
int main()
{
	int a[4] , c ;
	for( a[0] = 10 ; a[0] < 60 ; a[0] += 10 )
	for( a[1] = 10 ; a[1] < 60 ; a[1] += 10 )
	{
		if( a[1] == a[0] )continue ;
		for( a[2] = 10 ; a[2] < 60 ; a[2] += 10 )
		{
			if( a[2] == a[0] || a[2] == a[1] ) continue ;
			for( a[3] = 10 ; a[3] < 60 ; a[3] += 10 )
			{
				if( a[3] == a[0] || a[3] == a[1] || a[3] == a[2] ) continue ;
				if( a[0] + a[1] == a[2] + a[3] && a[0] + a[3] > a[2] + a[1] && a[0] + a[2] < a[1] )
				{
					a[0] = a[0] * 1000 + 'z' ;
					a[1] = a[1] * 1000 + 'q' ;
					a[2] = a[2] * 1000 + 's' ;
					a[3] = a[3] * 1000 + 'l' ;
					for( int i = 0 ; i < 4 ; i ++ )
					for( int j = 0 ; j < 3 - i ; j ++ )
					if( a[j] < a[j+1] )
					{
						c = a[j] ;
						a[j] = a[j+1] ;
						a[j+1] = c ;
					}
					for( int i = 0 ; i < 4 ; i ++ )
					cout << ( char )( a[i] % 1000 ) << " " << a[i] / 1000 << endl ;
				}
			}
		}
	}
	return 0 ;
} 