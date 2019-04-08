//???2010?12?8?

//??: 1000010586_???

//???????

int main()
{
	int n , m , i , j , flag;
	int a[ 100 ];
	int *p;
	cin >> n >> m;
	for ( i = 0 ; i <= n - 1 ; i++ )
		cin >> a[ i ];
	p = a;
	for ( i = 1 ; i <= n - m ; i++ )
	{
		flag = *p;
		for( j = 0 ; j <= n - 2 ; j++ )
			*( p + j ) = *( p + j + 1 );
		*( p + n - 1 ) = flag;
	}
	for ( i = 0 ; i <= n - 2 ; i++ )
		cout << *( p + i ) << " ";
	cout << *( p + n - 1 );
	return 0;
}
	

