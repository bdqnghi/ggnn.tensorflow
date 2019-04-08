/**
 * ??? ???
 * ??? 1000012844
 * ??? ????
 **/


int timesPerMin( int *, int );

int main()
{
	int i, j, n;
	int failedTimes[ 100 ];
	int num[ 100 ][ 100 ] = { 0 };

	cin >> n;

	for ( i = 0; i < n; i++ )
	{
		cin >> failedTimes[ i ];
		for ( j = 0; j < failedTimes[ i ]; j++ )
		{
			cin >> num[ i ][ j ];
		}
	}

	for ( i = 0; i < n; i++ )
	{
			cout << timesPerMin( num[ i ], failedTimes[ i ] ) << endl;
	}

	return 0;
}

int timesPerMin( int num[], int failed )
{
	int i = 0;

	for ( i = 0; ;i++ )
	{
		if ( num[ i ] == 0 )
		{
			num[ i ] = 60;
			break;
		}
	}
	
	for ( i = 0; ;i++ )
	{
		if ( ( num[ i ] + i * 3 <= 60 ) &&
			( num[ i ] + i * 3 + 3 > 60 ) )
		{
			return num[ i ];
			break;
		}
		else
		{
			if ( num[ i ] + i * 3 + 3 <= 60 &&
				 i * 3 + 3 + num[ i + 1 ] > 60 )
			{
				return 60 - i * 3 - 3;
				break;
			}
		}
	}

}