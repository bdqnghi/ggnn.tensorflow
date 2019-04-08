//****************************************************** 
//* ? ? ?   ?? ? ? ?                           *
//* ? ?      ?? ? ?                              *
//* ? ? ? ??2010 ? 12 ? 15 ?                   * 
//* ? ?      ?1000010185                            *
//****************************************************** 
int main()
{
	struct distance // ???????????????
	{
		int x[3];
		int y[3];
		double d;
	} dis[45], temp;
	int n, a[10][3]; // ??a???n????
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	// ?n?????????????dis?
	int k = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
		{
			for (int p = 0; p < 3; p++)
			{
				dis[k].x[p] = a[i][p];
				dis[k].y[p] = a[j][p];
			}
			k++;
		}

	// ??????????
	int k1 = n * (n - 1) / 2;
	for (int i = 0; i < k1; i++)
	{
		double sum = 0;
		for (int j = 0; j < 3; j++)
			sum += (dis[i].x[j] - dis[i].y[j]) * (dis[i].x[j] - dis[i].y[j]);
		dis[i].d = sqrt(sum);
		for (int j = i - 1; j >= 0; j--)
			if (dis[j + 1].d > dis[j].d)
			{
				temp = dis[j];
				dis[j] = dis[j + 1];
				dis[j + 1] = temp;
			}
	}

	// ???????????
	for (int i = 0; i < k1; i++)
		cout << '(' << dis[i].x[0] << ',' << dis[i].x[1] << ',' << dis[i].x[2] << ")-(" << dis[i].y[0]
			 << ',' << dis[i].y[1] << ',' << dis[i].y[2] << ")=" << fixed << setprecision(2) << dis[i].d << endl;
	return 0;
}