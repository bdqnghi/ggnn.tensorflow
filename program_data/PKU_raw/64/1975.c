//********************************
//*???????   **
//*?????? 1300012713 **
//*???2013.12.14  **
//********************************
int main()
{
	int n, b = 0,a[15][3];
	struct distance
	{
		double ds;
		int a1;
		int a2;
	}d[50];
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i][0] >> a[i][1] >> a[i][2];
	for(int j = 1; j <= n; j++)
	{
		for(int k = j + 1; k <= n; k++)
		{
			b++;
			d[b].ds = sqrt((a[j][0]-a[k][0])*(a[j][0]-a[k][0])
				+(a[j][1]-a[k][1])*(a[j][1]-a[k][1])
				+(a[j][2]-a[k][2])*(a[j][2]-a[k][2]));
			d[b].a1 = j;
			d[b].a2 = k;
		}
	}
	for(int p = 1; p <= b; p++)
	{
		for(int q = 1; q <= b-p+1; q++)
		{
			if(d[q].ds < d[q+1].ds)
			{
				double b0 = d[q].ds; int b1 = d[q].a1; int b2 = d[q].a2;
				d[q].ds = d[q+1].ds; d[q].a1 = d[q+1].a1; d[q].a2 = d[q+1].a2;
				d[q+1].ds = b0; d[q+1].a1 = b1; d[q+1].a2 = b2;
			}
		}
	}
	for(int l = 1; l <= b; l++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[d[l].a1][0],a[d[l].a1][1],a[d[l].a1][2],a[d[l].a2][0],a[d[l].a2][1],a[d[l].a2][2],d[l].ds);
	return 0;
}