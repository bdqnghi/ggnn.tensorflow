int main()
{
	int n,i,s,j;
	struct point
	{
		int a,b,c;
	}p[10];
	struct distance
	{
		double d;
		int x1,x2,y1,y2,z1,z2;
	}dis[45],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&p[i].a,&p[i].b,&p[i].c);
	i=0;
	j=1;
	for(s=0;s<n*(n-1)/2;s++)
	{
		dis[s].x1=p[i].a;
		dis[s].x2=p[j].a;
		dis[s].y1=p[i].b;
		dis[s].y2=p[j].b;
		dis[s].z1=p[i].c;
		dis[s].z2=p[j].c;
		j++;
		if(j==n)
		{
			i++;
			j=i+1;
		}
	}
	for(s=0;s<n*(n-1)/2;s++)
		dis[s].d=sqrt((dis[s].x1-dis[s].x2)*(dis[s].x1-dis[s].x2)+(dis[s].y1-dis[s].y2)*(dis[s].y1-dis[s].y2)+(dis[s].z1-dis[s].z2)*(dis[s].z1-dis[s].z2));
	for(j=1;j<n*(n-1)/2;j++)
	{
		for(i=0;i<n*(n-1)/2-j;i++)
		{
			if(dis[i].d<dis[i+1].d)
			{
				temp=dis[i];
				dis[i]=dis[i+1];
				dis[i+1]=temp;
			}
		}
	}
	for(s=0;s<n*(n-1)/2;s++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",dis[s].x1,dis[s].y1,dis[s].z1,dis[s].x2,dis[s].y2,dis[s].z2,dis[s].d);
	return 0;
}