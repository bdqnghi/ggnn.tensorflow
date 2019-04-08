
int main()
{
	int n ;
	cin >> n ;
	int a[n] ;
	for( int i = 0 ; i < n ; i ++ )
		cin >> a[i] ;
	cout << a[0] ;
	for( int i = 1 ; i < n ; i ++ )
	{
		for( int k = 0 ; k < i ; k ++ )
		{
			if( a[i] == a[k] ) break ;
			if( k == i - 1 ) cout << " " << a[i] ;
		}
	}
	cout << endl ;
	return 0 ;
}
