int main()
{
	int x[100] , n , i , m ;
	char c ;
	cin >> n ;
	for ( i = 1 ; i <= n ; i++ )
	{
		cin >> x[i] ; 
		m = i ;
	}
	for ( i = 1 ; i <= m ; i++ )
	{
		cout << x[m+1-i] ;
		if ( m + 1 - i != 1 )
			cout << " " ;
	}
}