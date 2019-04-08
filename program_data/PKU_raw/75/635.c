int main()
{
	int a[1000] = { 0 } , b[1000] = { 0 } ;
	int i , total , num , min , max , k ;
	char c ;
	i = 0 ;
	while ( c != '\n' ) 
	{
		cin >> num ;
		a[i] = num ;
		i++ ;
		c = cin.get() ;
	}
	for ( k = 0 ; k <= i - 1 ; k++ )
	{
		cin >> num ;
		b[k] = num ;
		c = cin.get() ;
	}
	total = i ;
	max = b[1] ;
	min = a[1] ;
	for ( i = 0 ; i <= total - 1 ; i++ )
	{
		if ( min >= a[i] )
			min = a[i] ;
		if ( max <= b[i] )
			max = b[i] ;
	}
	int x[1001] = { 0 } ;
	for ( k = 0 ; k <= total - 1 ; k++ )
		for ( i = a[k] ; i <= b[k] - 1 ; i++ )
			x[i] = x[i] + 1 ;
	int max1 = 0 ;
	for ( i = min ; i <= max ; i++ )
	{
		if ( max1 < x[i] )
			max1 = x[i] ;
	}
	cout << total << " " << max1 << endl ;
	return 0 ;
}