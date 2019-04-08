int main()
{
	int shu[9][9], qi[9][9], i, j, k, m, n;
	cin >> m >> n;
	memset(shu, 0, sizeof(shu));
	shu[4][4] = m;
	for( i = 1; i <= n; i++ )
	{
		memset(qi, 0, sizeof(qi));
		for( j = 0; j < 9; j++ )
		{
			for( k = 0; k < 9; k++ )
			{
				if( shu[j][k] != 0)
				{
					qi[j][k + 1] = qi[j][k + 1] + shu[j][k];
                    qi[j][k - 1] = qi[j][k - 1] + shu[j][k];
                    qi[j - 1][k] = qi[j - 1][k] + shu[j][k];
                    qi[j + 1][k] = qi[j + 1][k] + shu[j][k];
					qi[j + 1][k + 1] = qi[j + 1][k + 1] + shu[j][k];
					qi[j + 1][k - 1] = qi[j + 1][k - 1] + shu[j][k];
					qi[j - 1][k + 1] = qi[j - 1][k + 1] + shu[j][k];
					qi[j - 1][k - 1] = qi[j - 1][k - 1] + shu[j][k];
					shu[j][k] = shu[j][k] * 2;
				}
			}
		}
		for( j = 0; j < 9; j++ )
		{
			for( k = 0; k < 9; k++ )
			{
				shu[j][k] = shu[j][k] + qi[j][k];
			}
		}
	}
	for( i = 0; i < 9; i++ )
	{
		for( j = 0; j < 9; j++ )
		{
			if( j == 8)
				cout << shu[i][j] << endl;
			else
				cout << shu[i][j] << " ";
		}
	}
	return 0;
}