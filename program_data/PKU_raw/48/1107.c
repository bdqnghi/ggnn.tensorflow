int a[9][9] , board[9][9] ;
void add( int i , int j )
{
	if ( a[i][j] > 0 )
	{
		int m ;
		m = a[i][j] ;
		a[i][j] = 0 ;
		board[i][j] = board[i][j] + m*2 ;
		board[i+1][j] = board[i+1][j] + m ;
		board[i-1][j] = board[i-1][j] + m ;
		board[i][j+1] = board[i][j+1] + m ;
		board[i][j-1] = board[i][j-1] + m ;
		board[i+1][j+1] = board[i+1][j+1] + m ;
		board[i+1][j-1] = board[i+1][j-1] + m ;
		board[i-1][j+1] = board[i-1][j+1] + m ;
		board[i-1][j-1] = board[i-1][j-1] + m ;
		add( i+1 , j ) ;
		add( i-1 , j ) ;
		add( i , j+1 ) ;
		add( i , j-1 ) ;
		add( i+1 , j+1 ) ;
		add( i-1 , j-1 ) ;
		add( i+1 , j-1 ) ;
		add( i-1 , j+1 ) ;
	}
}
int main()
{
	int i , j , m , d , sum = 0 , k ;
	cin >> m >> d ;
	for ( i = 0 ; i < 9 ; i++ )
		for ( j = 0 ; j < 9 ; j++ )
			a[i][j] = 0 ;
	a[4][4] = m ;
	for ( k = 0 ; k < d ; k++ )
	{
		for ( i = 0 ; i < 9 ; i++ )
			for ( j = 0 ; j < 9 ; j++ )
				board[i][j] = 0 ;
		add ( 4 , 4 )	;	
		for ( i = 0 ; i < 9 ; i++ )
			for ( j = 0 ; j < 9 ; j++ )
				a[i][j] = board[i][j] ;
	}
	for ( i = 0 ; i < 9 ; i++ )
	{
		for ( j = 0 ; j < 8 ; j++ )
			cout << a[i][j] << " " ;
		cout << a[i][8] << endl ;
	}
	return 0 ;
}
