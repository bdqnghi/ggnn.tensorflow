int main ()
{
	int n , i = 0 , j = 0 , x[1001] , y[1001] , sum , max = 0 ;
	char c ;
	do
	{
		cin >> x[i] ;
		c = cin.get() ; 
		i ++ ;
	}while ( c == ',' );
	do
	{
		cin >> y[j] ;
		c = cin.get() ;
		j ++ ;
	}while ( c == ',' ) ;
	cout << i << " " ;
	n = i ;
	for ( i = 0 ; i < n ; i ++ )
	{
		sum = 0 ;
		for ( j = 0 ; j < n ; j ++ )
		{
			if ( ( x[i] >= x[j] ) && ( x[i] < y[j] ) )
			{
				sum = sum + 1 ;
			}
			else
			continue ;
		}
		if ( sum > max )
		{
			max = sum ;
		}
	}
	cout << max ;
	return 0 ;
} 