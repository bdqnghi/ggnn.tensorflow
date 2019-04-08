int main()
{
	int i,j,n;
	double max=0,dis2,dis;
	struct point {
		double x;
		double y;
	}points[100];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%lf%lf",&points[i].x,&points[i].y);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			dis2=(points[i].x-points[j].x)*(points[i].x-points[j].x)+(points[i].y-points[j].y)*(points[i].y-points[j].y);
			if(dis2>max)
			{
				max=dis2;
			}
		}
	}
	dis=pow(max,0.5);
	printf("%.4lf\n",dis);
	return 0;
}
	