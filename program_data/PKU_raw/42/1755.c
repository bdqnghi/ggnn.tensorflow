
int main()
{
	int n , m = 0 , t = 0 ;
	cin >> n ;
	int a[n] ;
	for( int i = 0 ; i < n ; i ++ )
		cin >> a[i] ;
	cin >> m ;
	for( int i = 0 ; i + t < n ; i ++ )
	{
		a[i] = a[i+t] ;
			if( a[i+t] == m )
			{
				t ++ ;
				a[i] = a[i+t] ;
				i -- ;
			}
	}
	for( int i = n - t ; i < n ; i ++ )
			{
			if( m == 0 ) a[i] = 1 ;
			else a[i] = 0 ;
			}
	for( int i = 0 ; i + t < n ; i ++ )
	{
		if( i == 0 ) cout << a[i] ;
		else cout << " " << a[i] ;
	}

    cout << endl ;
	return 0 ;
}
