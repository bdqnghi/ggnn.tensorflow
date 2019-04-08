// ???? ?? 1000062708
int main()
{
	struct num
	{
		int x;
		int y;
		int z;
	}a[10];
	int i, j, k, n, xx, yy;
	double b[10][10], m = 0;
	cin >> n;
	for(i = 0;i < n;i++)
		cin >> a[i].x >> a[i].y >> a[i].z;
	for(i = 0;i < n;i++)
		for(j = i + 1;j < n;j++)
			b[i][j] = sqrt((double)(a[i].x - a[j].x) * (a[i].x - a[j].x) + (double)(a[i].y - a[j].y) * (a[i].y - a[j].y) + (double)(a[i].z - a[j].z) * (a[i].z - a[j].z));
	for(k = 0;k < n * (n - 1) / 2;k++)
	{
		m = 0;
		for(i = 0;i < n;i++)
			for(j = i + 1;j < n;j++)
			{
				if(b[i][j] > m)
				{
					xx = i;
					yy = j;
					m = b[i][j];
				}
			}
		cout << "(" << a[xx].x << "," << a[xx].y << "," << a[xx].z << ")-(" << a[yy].x << "," 
			<< a[yy].y << "," << a[yy].z << ")=" << fixed << setprecision(2) << m <<  endl;
		b[xx][yy] = 0;
	}
	return 0;
}
			

