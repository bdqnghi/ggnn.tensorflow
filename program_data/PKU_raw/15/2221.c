int main()
{
	int n, i, j, flag = 0;
	cin >> n;
	int a[100][100];
	int *q = NULL;
	for( i = 1; i <= n; i++ )
	{
		for( j = 1; j <= n; j++ )
		{
			cin >> a[i][j];
		}
	}
	for( i = 1; i <= n; i++ )
	{
		for( j = 1; j <= n; j++ )
		{
			q = ( *( a + i ) + j );
			if( *q == 0 )
			{
				flag = 1;
				break;
			}
		}
		if( flag )
			break;
	}
	int len = 1, wid = 1;
	int j1 = j ;
	for( j = j + 1; j <= n; j++ )
	{
		q = ( *( a + i ) + j );
		if( *q == 0 )
			len++;
		else
			break;
	}
	for( i = i + 1; i <= n; i++ )
	{
		q = ( *( a + i ) + j1 );
		if( *q == 0 )
			wid++;
		else
			break;
	}

	cout << ( len - 2 ) * ( wid - 2 );
	return 0;
}