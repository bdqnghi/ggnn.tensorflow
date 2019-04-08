void main()
{
	int n,i,j,m=0;
    double dis[1000],x[100],y[100],q;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&x[i],&y[i]);
    }
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			dis[m]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			m=m+1;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-i-1;j++)
		{
			if(dis[j]>dis[j+1])
			{
				q=dis[j];
				dis[j]=dis[j+1];
				dis[j+1]=q;
			}
		}
	}
	printf("%.4f\n",dis[m-1]);
}
