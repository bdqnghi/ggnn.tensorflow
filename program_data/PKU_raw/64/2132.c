//*******************************
//*???????              **
//*?????? 1300012965     **
//*???20131211              **
//*******************************
struct zb
	{
		int x;
		int y;
		int z;
	}a[11];//??????
int main()
{
	double l[100] = {0.0};
	int i, j, k, n, co = 0, q[100] = {0}, temp, x1, y1, co1 = 0; 
	double lo, t;
	cin >> n;
	for(int p=1; p<=n*(n-1)/2; p++)
		q[p] = p;//???????
	for(i=1; i<=n; i++)
		cin >> a[i].x >> a[i].y >> a[i].z;
	for(j=1; j<=n-1; j++)
		for(k=j+1; k<=n; k++)
		{
			lo = sqrt(((a[j].x-a[k].x)*(a[j].x-a[k].x)+
			(a[j].y-a[k].y)*(a[j].y-a[k].y)+
			(a[j].z-a[k].z)*(a[j].z-a[k].z))*1.0);//????
			co++;
			l[co] = lo;
		}
		
	for(int x=1; x<=n*(n-1)/2-1; x++)
		for(int y=1; y<=n*(n-1)/2-x; y++)
			if(l[y] < l[y+1])
			{
				t = l[y];
				l[y] = l[y+1];
				l[y+1] = t;//????
				temp = q[y];
				q[y] = q[y+1];
				q[y+1] = temp;//????????
			}
	for(int x=1; x<=n*(n-1)/2; x++)
	{
		co1++;
		for(int y=1; y<=n; y++)
		{
			
			if(q[co1] > n-y)
				q[co1] -= n-y;
			else
			{
				x1 = y;
				y1 = q[co1] + y;//???????
				break;
			}
		}
		cout << "(" << a[x1].x << "," << a[x1].y << "," << a[x1].z << ")-("
			<< a[y1].x << "," << a[y1].y << "," << a[y1].z << ")=" << fixed <<
			setprecision(2) << l[x] << endl;
	}
	return 0;
}