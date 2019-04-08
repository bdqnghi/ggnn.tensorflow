void input( int a[][100] , int m , int n )
{
	for ( int i = 0 ; i < m ; i++ )
		for ( int j = 0 ; j < n ; j++ )
			cin >> * ( * ( a + j ) + i ) ;
}
int main()
{
	int square[100][100] ;
	int k , m , n ;
	cin >> k ;
	for ( int i = 1 ; i <= k ; i++ )
	{
		cin >> m >> n ;
		input( square , m , n ) ;
		int sum = 0 ;
		for ( int j = 0 ; j < m ; j++ )
			sum = sum + * ( * square + j ) + * ( * ( square + n - 1 ) + j ) ;
		for ( int j = 1 ; j < n - 1 ; j++ )
			sum = sum + * * ( square + j ) + *( * ( square + j ) + m - 1 ) ;
		if ( m == 1 )
			sum = sum / 2 ;
		cout << sum << endl ;
	}
	return 0 ;
}
// ( > w < ) finished~