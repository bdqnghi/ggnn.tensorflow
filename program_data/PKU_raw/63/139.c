int main()
{
	int x1, y1, x2, y2, i, j, k;
	int ju1[101][101], ju2[101][101], ans[101][101] = {0};
	cin >> x1 >> y1;
	for( i = 0; i < x1; i ++ )
	{
		for( j = 0; j < y1; j ++ )
		{
			cin >> ju1[i][j];
		}
	}
	cin >> x2 >> y2;
	for( i = 0; i < x2; i ++ )
	{
		for( j = 0; j < y2; j ++ )
		{
			cin >> ju2[i][j];
		}
	}
	for( i = 0; i < x1; i ++ )
	{
		for( j = 0; j < y2; j ++ )
		{
			for( k = 0; k < y1; k ++ )
			{
				ans[i][j] = ans[i][j] + ju1[i][k] * ju2[k][j];
			}
		}
	}
	for( i = 0; i < x1; i ++ )
	{
		for( j = 0; j < y2; j ++ )
		{
			if( j == y2 - 1)
				cout << ans[i][j] << endl;
			else
				cout << ans[i][j] << " ";
		}
	}
	return 0;
}
