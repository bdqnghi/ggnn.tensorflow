
int main()
{
	int n , m ;
	char c ;
	cin >> n ;
	int a[n][n] ;
	for( int i = 0 ; i < n ; i ++ )
	{
		getchar() ;
		for( int j = 0 ; j < n ; j ++ )
		{
			cin.get( c ) ;
			if( c == '.' ) a[i][j] = 1 ;
			if( c == '#' ) a[i][j] = 0 ;
			if( c == '@' ) a[i][j] = 2 ;
		}
	}
	cin >> m ;
	for( int i = 2 ; i < 1 + m ; i ++ )
	{
		for( int j = 0 ; j < n ; j ++ )
			for( int k = 0 ; k < n ; k ++ )
			{
				if( a[j][k] == i )
				{
					if( a[j-1][k] == 1 && j > 0 ) a[j-1][k] = i + 1 ;
					if( a[j+1][k] == 1 && j < n - 1 ) a[j+1][k] = i + 1 ;
					if( a[j][k-1] == 1 && k > 0 ) a[j][k-1] = i + 1 ;
					if( a[j][k+1] == 1 && k < n - 1 ) a[j][k+1] = i + 1 ;
				}
			}
	}
	m = 0 ;
	for( int i = 0 ; i < n ; i ++ )
		for( int j = 0 ; j < n ; j ++ )
		{
			if( a[i][j] > 1 ) m ++ ;
		}
	cout << m ;
	return 0 ;
}