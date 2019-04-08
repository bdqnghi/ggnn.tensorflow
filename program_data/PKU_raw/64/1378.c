/* ????????.cpp
 * ???1200012826 ??
 * ??? 2012?12?14?
 */
struct  point
{
	int x, y, z;
} p[10];
struct distance
{
	int a,b;
	double dis;
} d[45], tr;
int main()
{
	int n, i, j, k=0; 
	cin >> n;
	for(i=0; i<n; i++)
	{
		cin >> p[i].x >> p[i].y >> p[i].z;
	}
	for(i=0; i<n-1; i++)
		for(j=i+1; j<n; j++)
		{
			d[k].dis=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y)+(p[i].z-p[j].z)*(p[i].z-p[j].z));
			d[k].a=i;
			d[k].b=j;
			k++;
		}
	for(i=0; i<k-1; i++)
		for(j=0; j<k-i-1; j++)
		{
			if(d[j].dis < d[j+1].dis)
			{
				tr=d[j]; d[j]=d[j+1]; d[j+1]=tr;
			}
		}
	for(i=0; i<k; i++)
	{
		cout << "(" << p[d[i].a].x << "," << p[d[i].a].y << "," << p[d[i].a].z << ")-(" << p[d[i].b].x << "," << p[d[i].b].y <<  "," << p[d[i].b].z << ")=";
		cout << fixed << setprecision(2) << d[i].dis << endl;
	}
	return 0;
} 