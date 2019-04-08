

int main()
{
	int n , x = 0 ;  // x???????
	cin >> n ;
	int a[n] , k = -1 ;
	for( int i = 0 ; i < n ; i ++ )    // ????????????
	{
		cin >> x ;
		if( x % 2 == 1 )
		{
			k ++ ;
			a[k] = x ;
		}
	}
	int t = 0 ;  // t ?????????
	for( int i = 0 ; i <= k ; i ++ )   // ???????????????
		for( int j = 0 ; j < k - i ; j ++ )
		{
			if( a[j] > a[j+1] )
			{
				t = a[j] ;
				a[j] = a[j+1] ;
				a[j+1] = t ;
			}
		}
	cout << a[0] ;      //??????‘?’???a[0]??
	for( int i = 1 ; i <= k ; i ++ )
		cout << "," << a[i] ;
	cout << endl ;  //endl???
    return 0 ;
}
