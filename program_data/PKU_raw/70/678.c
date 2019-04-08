void main()
{
	int i,j;
	int n;
	double d,max=0,x[100],y[100];
	double distance(double x1,double y1,double x2,double y2);

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&x[i],&y[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			d=distance(x[i],y[i],x[j],y[j]);
			if(d>max)
			{max=d;}
		}
	}
	printf("%.4lf",max);
}
double distance(double x1,double y1,double x2,double y2)
{
	double dis;
	dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return(dis);
}