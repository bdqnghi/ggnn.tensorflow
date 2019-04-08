/*************************
??cpp4
????
???
2013/12/12
**************************/
int main()
{
	int n, i, j, k;
	cin >> n;
	struct point
	{
		int x;
		int y;
		int z;
	} a[12];
	for (i=1; i<=n; i++)
		cin >> a[i].x >> a[i].y >> a[i].z;
	struct distance
	{
		int x1;
		int y1;
		int z1;
		int x2; 
		int y2;
		int z2;
		double l;
	} b[60], temp;
	k=1;
	for (i=1; i <= n-1  ; i++)
	{
		for (j=i+1; j <= n; j++)
		{
			b[k].x1 = a[i].x;
			b[k].y1 = a[i].y;
			b[k].z1 = a[i].z;
			b[k].x2 = a[j].x;
			b[k].y2 = a[j].y;
			b[k].z2 = a[j].z;
			b[k].l = sqrt (	pow ((double)(a[i].x)- (double)(a[j].x) , 2.0) + 	pow ((double)(a[i].y)- (double)(a[j].y) , 2.0) +	pow ((double)(a[i].z)- (double)(a[j].z) , 2.0));
			k++;
		}
	}
	for (i=1; i<= n*(n-1)/2; i++)
	{
		for (j=1; j<=n*(n-1)/2-1 ; j++)
		{
			if (b[j].l < b[j+1].l)
			{
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	} 
	for (i=1; i<=n * (n-1) /2; i++)
	{
		cout << "(" << b[i].x1 << "," << b[i].y1 << "," << b[i].z1 << ")-";
		cout << "(" << b[i].x2 << "," << b[i].y2 << "," << b[i].z2 << ")=" ;
		cout << fixed;
		cout<<  setprecision(2) << b[i].l << endl;
	}
	return 0;
}
