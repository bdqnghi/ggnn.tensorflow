int main()
{
	int i , n , j , sum = 0 , len , sum1 ;
	char before[500][40] , c , *p ;
	cin >> n ; 
	for ( i = 0 ; i < n ; i++ )
	{
		j = 0 ;
		p = *( before + i ) ;
		while ( 1 )
		{
			c = cin.get() ;
			if ( c == ' ' || c == '\n' )
				continue ;
			else
				break ;
		}
		*p = c ;
		while ( 1 ) 
		{
			c = cin.get() ;
			if ( c == ' ' || c == '\n' )
				break ;
			else
				*++p = c ;
		}
		*++p = '\0' ;
	}
	/*	for ( i = 0 ; i < n ; i++ )
	{
		cout << before[i] << " " ;
	}*/
	for ( i = 0 ; i < n ; i++ )
	{
		len = strlen( before[i] ) ;
		sum = sum + len ;
		sum1 = sum + 1 + strlen( before[i+1] ) ;
		if ( sum > 80 )
		{
			sum = len ;
			sum1 = sum + 1 + strlen( before[i+1] ) ;
			cout << endl ;
		}
		cout << before[i] ;
		if ( i < n - 1 &&  sum1 <= 80 )
		{	
			cout << " " ;
			sum++ ;
		}
		else
			sum++ ;
	}
	return 0 ;
}
