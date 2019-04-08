int main()
{
	int n;
	cin >> n;
	double x[101], y[101];
	for(int i = 1; i <= n; i ++)
	{
		cin >> x[i] >> y[i];
	}
	double dis[101][101];
	double max = 0;
	for( int i = 1; i <= n-1; i++)
	{
		for(int j = i + 1; j <= n; j++)
		{
			dis[i][j] = (x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]);
			dis[i][j] = sqrt ( dis[i][j] );
			if( dis[i][j] > max )
				max = dis[i][j];
		}
	}
	printf("%.4lf\n", max);
	return 0;
}