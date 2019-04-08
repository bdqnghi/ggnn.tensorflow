int main ()
{
	int n , i , j , a[101][101] , p , q , l , m ;
	cin >> n ;
	for ( i = 1 ; i <= n ; i ++ )
	{
		for ( j = 1 ; j <= n ; j ++ )
		{
			cin >> a[i][j] ; 
			if ( a[i][j] == 0 )
			{
				p = i ; q = j ;
			}
		}
	}
	for ( i = 1 ; i <= p ; i ++ )
	{
		for ( j = 1 ; j <= q ; j ++ )
		{
			if ( a[i][j] == 0 )
			{
				l = i ; m = j ; i = p ;
				break ;
			}
		}
	}
	j = ( p - l - 1 ) * ( q - m - 1 );
	cout << j ;
	return 0 ;	
}
 