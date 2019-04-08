int juzhen(int);
int zhen[100][100];
int main()
{
	int n, i, j, k;
	cin >> n;
	for( k = 0; k < n; k++)
	{
		memset(zhen, 0, sizeof(zhen));
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				cin >> zhen[i][j];
			}
		}
		cout << juzhen(n) << endl;
	}
	return 0;
}
int juzhen(int n)
{
	int i, j, min, num;
	if( n == 1 )
		return 0;
	for( i = 0; i < n; i ++)
	{
		min = zhen[i][0];
		for(j = 0; j < n; j++)
		{
			if( zhen[i][j] < min )
				min = zhen[i][j];
		}
		for(j = 0; j < n; j ++)
		{
			zhen[i][j] -= min;
		}
	}
    for( j = 0; j < n; j++ )
	{
		min = zhen[0][j];
		for( i = 0; i < n; i++ )
		{
			if( zhen[i][j] < min )
				min = zhen[i][j];
		}
		for( i = 0; i < n; i++ )
		{
			zhen[i][j] -= min;
		}
	}
	num = zhen[1][1];
	for( i = 0; i < n; i++ )
	{
		for( j = 0; j < n; j++ )
		{
			if( i > 1 && j > 1 )
				zhen[i - 1][j - 1] = zhen[i][j];
			if( i > 1 && j < 1 )
				zhen[i - 1][j] = zhen[i][j];
			if( i < 1 && j > 1 )
				zhen[i][j - 1] = zhen[i][j];
		}
	}
	return num + juzhen(n - 1);
}
