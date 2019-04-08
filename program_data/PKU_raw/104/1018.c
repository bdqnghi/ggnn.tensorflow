 /* homework2.cpp
 *
 *  Created on: 2012-11-10
 *      Author: Lixurong
 */


int gcd( int m, int n );

int main()
{
	int x, y;
	cin >> x >> y;
	cout << gcd( x, y );
	return 0;
}

int gcd( int m, int n )
{
	if( n>m )
		return gcd( m, n/2 );
	else if( m>n)
		return gcd( m/2, n );
	else
		return m;
}
