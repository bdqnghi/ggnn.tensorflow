int f1( int );//??
int f2( int );//??
void opration( int ) ;//??????
int main()//????
{
	int n ;
	cin >> n ;
	opration( n ) ;

	return 0 ;
}
int f1( int n )
{
	return n*3+1 ;
}
int f2( int n )
{
	return n/2 ;
}
void opration( int n )
{
	while ( n != 1 )
	{
		if ( n % 2 == 1 )
		{
			cout << n << "*3+1=" << f1(n) << endl ;
			n = f1(n) ;
		}
		else
		{
			cout << n << "/2=" << f2(n) << endl ;
			n = f2(n) ;
		}
	}
	cout << "End" ;
}
// ( > w < ) finished~