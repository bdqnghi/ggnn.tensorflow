int main()
{
    int n , i , j = 0 ;
	float  average , m = 0 ;
	cin >> n ;
	int a[n] ,  b[n] ;
	for ( i = 0 ; i < n ; i++ )
	{
		cin >> a[i] ;
		average += a[i];
	}
	average /= n ;
	for ( i = 0 ; i < n ; i++ )
		if ( m < fabs( a[i] - average ) )
			m = fabs( a[i] - average );
	for ( i = 0 ; i < n ; i++ )
		if ( m == fabs( a[i] - average ) )
		{
			b[j] = a[i]  ;
			j++;
		}
	int l = j , temp ;
	for ( i = 0 ; i < l ; i++ )
		for ( j = 0 ; j < l - i - 1 ; j++ )
		{
			if ( a[ j ] > a[ j + 1 ])
			{
				temp = a[ j ];
				a[ j ] = a[ j + 1 ];
				a[ j + 1 ] = temp ;
			}
		}
	for ( i = 0 ; i < l - 1 ; i++ )
		cout << b[i] << "," ;
	cout << b[i];
	cin >> i ;
	return 0 ;
}



