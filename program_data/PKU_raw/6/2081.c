/*
 * EdgeSum.cpp
 *
 *  Created on: 2012-12-12
 *  Author: ??
 *  ?????????????
 */


int main()
{
	int k , m , n , a[110][110] , sum = 0;
	cin >> k ;
	for( int t = 0 ; t < k ; t++ )
	{
		sum = 0 ;
		cin >> m >> n ;
		for( int i = 0 ; i < m ; i++ )
			for( int j = 0 ; j < n ; j++ )
				cin >> *( *(a+i) + j ) ;    //????
		if( m == 1 )
		{
			for( int i = 0 ; i < n ; i++ )
			sum += *(*(a)+i) ;
			cout << sum << endl ;
			continue ;
		}
		if( n == 1 )
		{
			for( int i = 0 ; i < m ; i++ )
				sum += *(*(a) + i ) ;
			cout << sum << endl ;
			continue ;
		}
		for( int i = 0 ; i < n ; i++ )
			sum = sum + *( *(a) + i ) + *( *( a + m - 1) + i ) ;    //??????
		for( int i = 0 ; i < m ; i++ )
			sum = sum + *( *(a+i) ) + *( *(a + i ) + n - 1 ) ;         //??????
		cout << sum - *(*(a)) - *(*(a)+n-1) - *(*(a+m-1)) - *(*(a+m-1)+ n-1) << endl ;  //???????????????
	}
	return 0 ;
}

