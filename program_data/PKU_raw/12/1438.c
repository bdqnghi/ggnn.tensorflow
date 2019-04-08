int main()
{
	int a[15] = { 0 } , num = 1 , num1 = 1 , i = 1 , k , j , c = 0 ; 
	while ( num1 != -1 )
	{ 
		cin >> num1 ;
		a[0] = num1 ;
		while ( num != 0 )
		{
			cin >> num ;
			a[i] = num ;
			i++ ;
		}
	    for ( k = 0 ; k <= i - 2 ; k++ )
		    for ( j = k + 1 ; j <= i - 2 ; j++ )
			    if ( a[k] == 2 * a[j] || a[j] == 2 * a[k] )
					c++ ;
		cout << c << endl ;
		int a[15] = { 0 } ;
		c = 0 ;
		i = 1 ;
		num = 1 ;
	}
    return 0 ;
}
