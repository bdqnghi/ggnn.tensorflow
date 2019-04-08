void huiwen( int k ,char a[] )
{
	int i,shime = 1 ;
	for ( i = 0 ; i <= k / 2 ; i ++ )
		if ( a[i] != a[ k - i - 1 ] )
			shime = 0 ;
	if ( shime )
	{
		for ( i = 0 ; i < k ; i ++ )
			cout << a[i];
		cout << endl;
	}
}
int main ()
{
	char yuan[500],yiduan[500];
	int n,i,j,k ;
	cin >> yuan ;
	n = strlen ( yuan ) ;
	for ( k = 2 ; k <= n ; k = k + 2 )
	{
		for ( i = 0 ; i + k <= n ; i ++ )
		{
			for ( j = i ; j <= i + k ; j ++ )
				yiduan[j - i] = yuan[j] ;
			huiwen ( k , yiduan );
		}
	}
	return 0 ;
}