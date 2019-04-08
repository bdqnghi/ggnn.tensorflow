int main()
{
	int n;
	scanf("%d",&n);
	double x[10],y[10];
	double dis=0;
	double m;
	int i,j;
	for(i=0;i<n;i++)
	{
		double a,b;
		scanf("%lf %lf",&a,&b);
		x[i]=a;
		y[i]=b;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			m=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			if(dis<=m)
			{
				dis=m;
			}
		}
	}
	printf("%.4f\n",dis);
	return 0;
}