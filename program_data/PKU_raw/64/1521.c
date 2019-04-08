
int main()
{
	int i, j, k = 0, x[10], y[10], z[10];
	int n;
	struct distance
	{
		int x1;
		int y1;
		int z1;
		int x2;
		int y2;
		int z2;
		double d;
	}dis[100], t;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
		cin >> y[i];
		cin >> z[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			dis[k].x1 = x[i];
			dis[k].y1 = y[i];
			dis[k].z1 = z[i];
			dis[k].x2 = x[j];
			dis[k].y2 = y[j];
			dis[k].z2 = z[j];
			dis[k].d = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
			k++;
		}
	}
	for (i = 0; i < k - 1; i++)
	{
		for (j = 0; j < k - 1 - i; j++)
		{
			if (dis[j].d < dis[j + 1].d)
			{
				t = dis[j];
				dis[j] = dis[j + 1];
				dis[j + 1] = t;
			}
		}
	}
	for (i = 0; i < k; i++)
	{
		cout << "(" << dis[i].x1 << ","
			 << dis[i].y1 << "," 
			 << dis[i].z1 << ")-(" 
			 << dis[i].x2 << "," 
			 << dis[i].y2 << "," 
			 << dis[i].z2 << ")=" 
			 << fixed << setprecision(2) << dis[i].d << endl;
	}
	return 0;
}
