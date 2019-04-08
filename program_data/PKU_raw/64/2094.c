int main()
{
	struct sanD
	{
		int x;
		int y;
		int z;
	}room[10];
	int n, i, j;
	double dis[100];
	double temp;
	int x1[100], x2[100], y1[100], y2[100], z1[100], z2[100];
	int k = 1;
	cin >> n;
	for(i = 0; i < n; i++)
		cin >> room[i].x >> room[i].y >> room[i].z;
	for(i = 0; i < n; i++)
		for(j = i + 1; j < n; j++)
		{
		    x1[k] = room[i].x;
	        y1[k] = room[i].y;
		    z1[k] = room[i].z;
			x2[k] = room[j].x;
			y2[k] = room[j].y;
			z2[k] = room[j].z;
			dis[k] = sqrt((x1[k] - x2[k]) * (x1[k] - x2[k]) + (y1[k] - y2[k]) * (y1[k] - y2[k]) + (z1[k] - z2[k]) * (z1[k] - z2[k]));
			k++;
		}
	for(i = 1; i <= n * (n - 1) / 2; i++)
	{
		for(j = n * (n - 1) / 2; j >= 1 + i	; j--)
		{
            if(dis[j] > dis[j - 1])
			{
				temp = dis[j - 1];
				dis[j - 1] = dis[j];
				dis[j] = temp;
				temp = x1[j - 1];
				x1[j - 1] = x1[j];
				x1[j] = temp;
				temp = x2[j - 1];
				x2[j - 1] = x2[j];
				x2[j] = temp;
				temp = y1[j - 1];
				y1[j - 1] = y1[j];
				y1[j] = temp;
				temp = y2[j - 1];
				y2[j - 1] = y2[j];
				y2[j] = temp;
				temp = z1[j - 1];
				z1[j - 1] = z1[j];
				z1[j] = temp;
				temp = z2[j - 1];
				z2[j - 1] = z2[j];
				z2[j] = temp;
			}
		}
	}
    for(i = 1; i <= n * (n - 1) / 2; i++)
		cout << "(" << x1[i] << "," << y1[i] << "," << z1[i] << ")-(" << x2[i] << "," << y2[i] << "," << z2[i] << ")=" << fixed << setprecision(2) << dis[i] << endl;
	return 0;
}
