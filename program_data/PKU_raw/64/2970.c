int main()
{
	int n,i,j,k=0;
	int x[10],y[10],z[10];
	struct Distance
	{
		int a,b;
		double d;
	}dis[50],t;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	for(i=0;i<=n-1;i++)
		for(j=1+i;j<=n-1;j++)
		{
			if(i==j)
				continue;
			dis[k].d=sqrt((double)((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j])));
			dis[k].a=i;
			dis[k].b=j;
			k++;
		}
	for(i=0;i<=k-2;i++)
		for(j=0;j<=k-2-i;j++)
			if(dis[j].d<dis[j+1].d)
			{
				t=dis[j];
				dis[j]=dis[j+1];
				dis[j+1]=t;
			}
	for(i=0;i<=k-1;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[dis[i].a],y[dis[i].a],z[dis[i].a],x[dis[i].b],y[dis[i].b],z[dis[i].b],dis[i].d);
	return 0;
}