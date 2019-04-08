
int main()
{
	char room[100][100];
	int n, m, number = 0;
	cin >> n;
	for( int i = 0; i < n; i++ )
	{
		for( int j = 0; j < n; j++)
		{
			cin >> room[i][j];
		}
	}
	cin >> m;
	for( int k = 1; k < m; k++ )
	{
		for( int i = 0; i < n; i++ )
		{
			for( int j = 0; j < n; j++ )
			{
				if( room[i][j] == '@' )
				{
					if( i != 0 )
					{
						if( room[i-1][j] == '.' )
							room[i-1][j] = '!';
					}
					if( i != n-1 )
					{
						if( room[i+1][j] == '.' )
							room[i+1][j] = '!';
					}
					if( j != 0 )
					{
						if( room[i][j-1] == '.' )
							room[i][j-1] = '!';
					}
					if( j != n - 1 )
					{
						if( room[i][j+1] == '.' )
							room[i][j+1] = '!';
					}
				}
			}
		}
		for( int i = 0; i < n; i++ )
		{
			for( int j = 0; j < n; j++ )
			{
				if( room[i][j] == '!' )
					room[i][j] = '@';
			}
		}
	}
	for( int i = 0; i < n; i++ )
	{
		for( int j = 0; j < n; j++ )
		{
			if( room[i][j] == '@' )
				number++;
		}
	}
	cout << number;
	
	return 0;
}