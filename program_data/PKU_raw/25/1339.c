int main()
{
	char num[10000] , a ;
	int n , i , len = 1 , k ;
	cin >> n ;
	cin.get() ;
	num[0] = '1' ;
	for ( i = 1 ; i <= n ; i++ )
	{
		if ( ( num[0] + num[0] ) > ( '9' + '0' ) )
		{
			len++ ;
			for ( k = len - 1 ; k >= 1 ; k-- )
			{
				num[k] = num[k-1] ;
			}
			num[0] = '1' ;
			if ( len > 2 )
			{
				for ( k = 1 ; k <= len - 2 ; k++ )
				{
					if ( ( num[k] + num[k] ) > ( '9' + '0' ) )
					{
						num[k] = num[k] + num[k] - '9' - '1' + '0' ;
					    if ( ( num[k+1] + num[k+1] ) > ( '9' + '0' ) )
							num[k] = num[k] + '1' - '0' ;
					}
					else
					{ 
						num[k] = num[k] + num[k] - '0' ;
					    if ( ( num[k+1] + num[k+1] ) > ( '9' + '0' ) )
							num[k] = num[k] + '1' - '0' ;
					}
				}
			}
			if ( ( num[len-1] + num[len-1] ) > ( '9' + '0' ) )
			{
				num[len-1] = num[len-1] + num[len-1] - '9' - '1' + '0' ;
			}
			else
			{
				num[len-1] = num[len-1] + num[len-1] - '0' ;
			}
		}
		else
		{
			if ( len > 1 )
			{
				for ( k = 0 ; k <= len - 2 ; k++ )
				{
					if ( ( num[k] + num[k] ) > ( '9' + '0' ) )
					{
						num[k] = num[k] + num[k] - '9' - '1' + '0' ;
						if ( ( num[k+1] + num[k+1] ) > ( '9' + '0' ) )
							num[k] = num[k] + '1' - '0' ;
					}
					else
					{
						num[k] = num[k] + num[k] - '0' ;
						if ( ( num[k+1] + num[k+1] ) > ( '9' + '0' ) )
							num[k] = num[k] + '1' - '0' ;
					}
				}
			}
			if ( ( num[len-1] + num[len-1] ) > ( '9' + '0' ) )
			{
				num[len-1] = num[len-1] + num[len-1] - '9' - '1' + '0' ;
			}
			else
			{
				num[len-1] = num[len-1] + num[len-1] - '0' ;
			}
		}
	}
	for ( k = 0 ; k <= len - 1 ; k++ )
			cout << num[k] ;
	cout << endl ;
	return 0 ;
}
