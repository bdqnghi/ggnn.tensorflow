int main()
{
	int a [ 500 ], b [ 500 ];
	int i, j = 0, k, l, temp, n, p;
	cin >> n;
	for ( i = 0; i < n; i ++ )
	{
		cin >> l;
		a [ i ] = l;
		if ( a [ i ] % 2 != 0 )
		{
			b [ j ] = a [ i ];
			j ++;
		}
	}
	for ( p = 0; p < j - 1; p ++ )
	for ( k = 0; k < j - 1 - p; k ++ )
	{
		if ( b [ k ] > b [ k + 1 ] )
		{
			temp = b [ k ]; b [ k ] = b [ k + 1 ]; b [ k + 1 ] = temp; 
		}
	}
	cout << b[0];
	for ( p = 1; p < j; p ++ )
	{
		cout << "," << b[p];
	}
	return 0;
}