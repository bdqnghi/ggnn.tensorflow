int main()
{
	int num , len = 0 , i = 0;
	char *p = NULL;
	char a[ 10000 ];
	cin.getline( a , 10000 );
	len = strlen( a );
	p = &a[ len - 1 ];
	for( i = 0 ; i <= len - 1 ; i++ )
		cout << *( p - i );
	return 0;
}