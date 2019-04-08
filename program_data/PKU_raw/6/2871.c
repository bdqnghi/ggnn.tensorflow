int main()
{
	int k = 0;
	int juzhen[100][100];
	int m = 0, n = 0;
	cin >> k;
	while (k > 0)
	{
		m = 0;n = 0;
		memset(juzhen , 0 ,sizeof(juzhen));
		cin >> m >> n;
		int i =0, j = 0, sum = 0;
		for(i = 0; i <= m - 1; i++)
		{
			for(j = 0; j <= n - 1; j++)
			{
				cin >> juzhen[i][j];
			}
		}
		for(i = 0; i <= n - 1; i++)
		{
			sum = sum + *(*(juzhen) + i);
		}
		for(i = 0; i <= n - 1; i++)
		{
			sum = sum + *(*(juzhen + m - 1) + i);
		}
		for(j = 1; j <= m - 2; j++)
		{
			sum = sum + *(*(juzhen + j));
		}
		for(j = 1; j <= m - 2; j++)
		{
			sum = sum + *(*(juzhen + j) + n-1);
		}
		cout << sum <<endl;
		k--;
	}
	return 0;
}