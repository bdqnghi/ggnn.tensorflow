//???2010?12?1?

//???1000010586_???

//????????????

int make( int a[100][100] , int l , int num , int n );
int main()
{
	int n , i , j , k , l , num , ans = 0;
	int a[100][100];
	cin >> n;
	for ( i = 1 ; i <= n ; i++ )
	{
		ans = 0;
		for ( j = 0 ; j <= n - 1 ; j++ )
		{
			for ( k = 0 ; k <= n - 1 ; k++ )
			{
				cin >> a[j][k];
			}
		}
		for ( l = 1 ; l <= n - 1 ; l++ )
		{
			num = l;
			ans = ans + make( a , l , num , n );
		}
		cout << ans << endl;
	}
	return 0;
}
int make( int a[100][100] , int l , int num , int n)
{
	int min1 , min2 , i , j , k , p , q , m;
	for ( k = 0 ; k <= n - 1 ; k++ )
	{
		min1 = a[k][0];
	    for ( i = l ; i <= n - 1 ; i++ )
		{
		    if ( a[k][i] < min1 )
			   min1 = a[k][i];
		}
	    for ( j = 0 ; j <= n - 1 ; j++ )
		{
		    a[k][j] = a[k][j] - min1;
		}
	}
	for ( p = 0 ; p <= n - 1 ; p++ )
	{
		min2 = a[0][p];
		for ( q = l ; q <= n - 1 ; q++ )
		{
			if ( a[q][p] < min2 )
				min2 = a[q][p];
		}
		a[0][p] = a[0][p] - min2;
		for ( m = l ; m <= n - 1 ; m ++ )
		{
			a[m][p] = a[m][p] - min2;
		}
	}
	num--;
	if ( num == 0 )
		return a[l][l];
	else
		return make( a , l , num , n );
}
