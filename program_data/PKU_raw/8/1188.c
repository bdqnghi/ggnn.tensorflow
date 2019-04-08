int main ()
{
	int a, b;
	cin >> a >> b;
	void f( int x );
	f(a);
	cout << " " ;
	f(b);
	cout << endl;
}
void f( int x )
{
	int i,t ,j,str[100] = {0};
	for ( i = 1; i <= x; i++ )
		cin >> str[i];
	for ( i = 1; i <= x - 1; i++ )
	{
		for ( j = 1; j <= x- i; j++ )
			if ( str[j] > str[j+1] )
				t = str[j] , str[j] = str[ j+1 ], str[ j+1 ] = t;
	}
	for ( i = 1; i <= x - 1; i++ )
		cout << str[i] << " ";
	cout << str[x] ;
	return ;
}

