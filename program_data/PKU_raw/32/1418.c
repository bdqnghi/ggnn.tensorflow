int main()
{
	int n , i , k , t , z , b , a , len1 , len2 ;
	char num1[1000][100] , num2[1000][100] ;
	cin >> n ;
	cin.get() ;
	for ( i = 0 ; i < n ; i++ )
	{
		cin >> num1[i] >> num2[i] ;
	}
	for ( i = 0 ; i < n ; i++ )
	{
		len1 = strlen(num1[i]) ;
		len2 = strlen(num2[i]) ;
		for ( k = 0 ; k < len2 ; k++ )
		{
			a = len1-k-1 ;
			b = len2-k-1 ;
			if ( num1[i][a] >= num2[i][b] )
			{
				num1[i][a] = num1[i][a] - num2[i][b] + '0';
			}
			else
			{
				for ( t = a - 1 ; t >= 0 ; t-- )
					if ( num1[i][t] > '0' )
						break ;
				for ( z = t + 1 ; z <= a - 1 ; z++ )
					if ( num1[i][z] == '0' )
						num1[i][z] = '9' ;
				num1[i][t] = num1[i][t] - '1' + '0' ;
				num1[i][a] = num1[i][a] + '1' - '0' + '9' - '0' - num2[i][b] + '0' ;
			}
		}
		while ( 1 ) 
		{
			if ( num1[i][0] != '0' )
				break ;
			else
			{
				for ( z = 0 ; z < len1 ; z++ )
				{
					num1[i][z] = num1[i][z+1] ;
				}
				len1-- ;
			}
		}
		for ( k = 0 ; k < len1 ; k++ )
			cout << num1[i][k] ;
		cout << endl ;
	}
	cin.get() ;
	cin.get() ;
	return 0 ;
}
