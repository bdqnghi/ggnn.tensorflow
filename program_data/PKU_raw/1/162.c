//???2010?12?1?

//???1000010586_???

//???????

int m , num;
int make( int a );
int pan( int a );
int main()
{
	int n , a , i;
	cin >> n;
	for( i = 1 ; i <= n ; i++ )
	{
		cin >> a;
		num = 0;
		m = a;
		cout << make( a ) << endl;
	}
	return 0;
}
int pan( int a )
{
	int n = 0 , i;
    for ( i = 1 ; i <= sqrt( a ) ; i ++ )
	{
		if ( a % i == 0 )
			n++;
	}
    if ( n == 1 )
		return 0;
	else
		return 1;
}
int make( int a )
{
	int i , j , ans;
	ans = sqrt( a );
	if ( pan( a ) == 0 )
	{
		num++;
		return num;
	}
	else
	{
		num++;
		for ( i = m / a ; i <= ans ; i++ )
		{
			if ( i == 1 ) continue;
			if ( a % i == 0 )
			{
				m = a;
			    num = make( a / i );
			}
		}
		if ( i == ans + 1 )
			return num;
	}
	return num;
}
