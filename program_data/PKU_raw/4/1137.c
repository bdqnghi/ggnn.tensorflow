/*
 * point1005.cpp
 *
 *  Created on: 2013-12-4
 *      Author: weng
 */


int main()
{
	int n , m , i , j ;
	cin >> n >> m ;
	int a[n][m] ;
	for( i = 0 ; i < n ; i ++ )
		for( j = 0 ; j < m ; j ++ )
			cin >> a[i][j] ;
	int * p = NULL ;
	for( i = 0 , j = 0 ; i < n ; i ++ )
	{
		for( ; j < m ; j ++ )
		{
			p = &a[0][0] + m * i + j ;
			for( int k = 0 ; k <= j && k <= m && k <= n && k < n - i ; k ++ )
				cout << * ( p + ( m - 1 ) * k ) << endl ;
		}
		j -- ;
	}
	return 0 ;
}
