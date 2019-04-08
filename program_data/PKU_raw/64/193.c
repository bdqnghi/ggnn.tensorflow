int main()
{
	int n, i, j, k = 0, t, x[10], y[10], z[10];
	double dis[10][9] = {0}, dist[50] = {0}, a;
	cin>>n;
	for (i = 0; i < n; i++)
	{
		cin>>x[i]>>y[i]>>z[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			dis[i][j-i-1] = sqrt((x[i] - x[j]) * (x[i] - x[j]) +
								(y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
			dist[k++] = dis[i][j-i-1];
		}
	}
	for (k = 0; k < n * (n - 1) / 2; k++)
	{
		for (t = 0; t < n * (n - 1) / 2 - k - 1; t++)
		{
			if (dist[t] < dist[t + 1])
			{
				a = dist[t];
				dist[t] = dist[t + 1];
				dist[t + 1] = a;
			}
		}
	}
	for (k = 0; k < n * (n - 1) / 2; k++)
	{
		if (k >= 1 && dist[k] == dist[k - 1])
			continue;
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (dis[i][j-i-1] == dist[k])
				{
					cout<<'('<<x[i]<<','<<y[i]<<','<<z[i]<<')'<<'-'<<'('<<x[j]<<','<<y[j]<<','<<z[j]<<')'
						<<'='<<fixed<<setprecision(2)<<dist[k]<<endl;
				}
			}
		}
	}
	return 0;
}
