
int main()
{
	int n , c ;
	cin >> n ;     //???
	int x[n] , y[n] , z[n] ;
	c = n * ( n - 1 ) / 2 ;    //????
	int a[c] , b[c] ;        // ????????????????????
	double l[c] ;            //????
	for( int i = 0 ; i < n ; i ++ )      //??
	{
		cin >> x[i] >> y[i] >> z[i] ;
	}
	c = -1 ;
	for( int i = 0 ; i < n - 1 ; i ++ )     //???????
		for( int j = i + 1 ; j < n ; j ++ )
		{
			c ++ ;
			a[c] = i ;
			b[c] = j ;
			l[c] = sqrt( ( x[i] - x[j] ) * ( x[i] - x[j] ) +
					( y[i] - y[j] ) * ( y[i] - y[j] ) + ( z[i] - z[j] ) * ( z[i] - z[j] ) ) ;
		}
	double t1 = 0 ;
	int t = 0 ;
	for( int i = 0 ; i <= c ; i ++  )          //??????????????
		for( int j = 0 ; j <= c - 1 - i ; j ++ )
		{
			if( l[j] < l[j+1] )
			{
              t1 = l[j] ; l[j] = l[j+1] ; l[j+1] = t1 ;
              t = a[j] ; a[j] = a[j+1] ; a[j+1] = t ;
              t = b[j] ; b[j] = b[j+1] ; b[j+1] = t ;
			}
		}
	cout << fixed << setprecision(2) ;    //????????
	for( int i = 0 ; i <= c ; i ++ )
	{
		cout << "(" << x[a[i]] << "," << y[a[i]] << "," << z[a[i]] << ")-("
				<< x[b[i]] << "," << y[b[i]] << "," << z[b[i]] << ")="
				<< l[i] << endl ;
	}



	return 0 ;
}
