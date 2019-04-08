//************************
//???????
//?????
//???2011-12-14
//************************
int main()
{
	int x[10], y[10], z[10], n, i, j;
	struct distance
	{
		int x1;             //??
		int y1;
		int z1;
		int x2;
		int y2;
		int z2;
		double c;           //??
	}dis[46];
	cin >> n;
	cout << fixed;
	for(i = 0;i < n;i++)
	{
		cin >> x[i] >> y[i] >> z[i];           //????
	}
	int k = 0;
	for(i = 0;i < n;i++)             //??????????????
		for(j = i + 1;j < n;j++)
		{
			dis[k].x1 = x[i];
			dis[k].y1 = y[i];
			dis[k].z1 = z[i];
			dis[k].x2 = x[j];
			dis[k].y2 = y[j];
			dis[k].z2 = z[j];
			dis[k++].c = sqrt((dis[k].x1 - dis[k].x2) * (dis[k].x1 - dis[k].x2) + (dis[k].y1 - dis[k].y2) * (dis[k].y1 - dis[k].y2) + (dis[k].z1 - dis[k].z2) * (dis[k].z1 - dis[k].z2));
		}
	int t, t1;
	for(i = 0;i < n * (n - 1) / 2 - 1;i++)
		for(j = i + 1;j < n * (n - 1) / 2;j++)
		{
			if(dis[j].c - dis[i].c > 1e-6)     //??????????????????     
			{
				dis[45] = dis[j];
				for(t = j, t1 = j;t > i;t--)
				{
					dis[t] = dis[--t1];
				}
				dis[i] = dis[45];
			}
		}
	for(i = 0;i < n * (n - 1) / 2;i++)         //??
	{
		cout << "(" << dis[i].x1 << "," << dis[i].y1 << "," << dis[i].z1 << ")" << "-" << "(" << dis[i].x2 << "," << dis[i].y2 << "," << dis[i].z2 << ")" << "=" << setprecision(2) << dis[i].c << endl;
	}
	return 0;
}