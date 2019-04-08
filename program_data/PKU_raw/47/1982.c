void diverse( int x )//??
{
	int c , p = x ;
	char ch ;
	cin >> c ;
	cin.get( ch ) ;
	if ( ch == '\n' )
	{
		cout << c ;
		if ( x != 0 )
			cout << ' ' ;
		return ;
	}
	else
	{
		p++ ;
		diverse( p ) ;
	}
	cout << c ;
	if ( x != 0 )
		cout << ' ' ;
}
int main()
{
	int n ;
	cin >> n ;
	cin.get() ;//???
	int x = 0 ;
	diverse( 0 ) ;
	return 0 ;
}