/*
 * point1002.cpp
 *
 *  Created on: 2013-12-4
 *      Author: weng
 */


int main()
{
	int n , t ;
	cin >> n ;
	int a[n] ;
	int * p = NULL , * q = NULL ;
	for( p = a ; p < a + n ; p ++ )
		cin >> * p ;
	p = a ;
	q = a + n - 1 ;
	for( ; p < q ; p ++ , q -- )
	{
		t = * p ;
		* p = * q ;
		* q = t ;
	}
	p = a ;
	cout << * p ++ ;
	for( ; p < a + n ; p ++ )
		cout << " " << * p ;
	cout << endl ;
	return 0 ;
}

