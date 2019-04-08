int main()
{
	int num , a[5] , i ,  c , n , j ;
	cin >> num ;
	n = 0 ;
	for ( i = 4 ; i >= 0 ; i-- )
	{
		for ( j = 1 ; j <= i ; j ++ )
			c *= 10 ;
		a[i] =  ( ( num - num % c ) / c ) % 10 ;
		c = 1 ;
	}
	for ( i = 4 ; i >= 0 ; i-- )
	{
		if ( a[i] != 0 )
		{
			n = i ;
    		break;
		}
	}
	for ( i = 0 ; i <= n ; i++ )
		cout << a[i] ;
	return 0 ;
}