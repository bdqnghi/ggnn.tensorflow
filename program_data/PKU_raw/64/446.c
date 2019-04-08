
int main()
{
	struct info1
	{
		int a[3];
	}
	point[N];
	struct info2
	{
		int f[3],l[3];
		double result;
	}
	dist[N*(N-1)/2];
	int n,i,j,k=0,p;
	double tmpdist;
	int tmppoint;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d %d %d",&point[i].a[0],&point[i].a[1],&point[i].a[2]);
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			dist[k].result=sqrt((double)(point[i].a[0]-point[j].a[0])*(point[i].a[0]-point[j].a[0])+(point[i].a[1]-point[j].a[1])*(point[i].a[1]-point[j].a[1])+(point[i].a[2]-point[j].a[2])*(point[i].a[2]-point[j].a[2]));
			for (p=0;p<3;p++)
			{
				dist[k].f[p]=point[i].a[p];
				dist[k].l[p]=point[j].a[p];
			}
			k++;
		}
	}
	for (j=1;j<k;j++)
	{
		for (i=0;i<k-j;i++)
		{
			if (dist[i].result<dist[i+1].result)
			{
				tmpdist=dist[i].result;
				dist[i].result=dist[i+1].result;
				dist[i+1].result=tmpdist;
				for (p=0;p<3;p++)
				{
					tmppoint=dist[i].f[p];
					dist[i].f[p]=dist[i+1].f[p];
					dist[i+1].f[p]=tmppoint;
					tmppoint=dist[i].l[p];
					dist[i].l[p]=dist[i+1].l[p];
					dist[i+1].l[p]=tmppoint;
				}
			}
		}
	}
	for (i=0;i<k;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",dist[i].f[0],dist[i].f[1],dist[i].f[2],dist[i].l[0],dist[i].l[1],dist[i].l[2],dist[i].result);
	}
	return 0;
}