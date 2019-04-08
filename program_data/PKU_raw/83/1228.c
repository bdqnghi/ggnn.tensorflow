void main()
{
	double a[10],b[10],c[10];
	double x=0,y=0;
	int n,i;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		scanf("%lf",&b[i]);
	}
	for (i=0;i<n;i++)
	{
		if (b[i]<=100&&b[i]>=90)
		c[i]=4.0*a[i];
		if (b[i]<=89&&b[i]>=85)
		c[i]=3.7*a[i];
		if (b[i]<=84&&b[i]>=82)
		c[i]=3.3*a[i];
		if (b[i]<=81&&b[i]>=78)
		c[i]=3.0*a[i];
		if (b[i]<=77&&b[i]>=75)
		c[i]=2.7*a[i];
		if (b[i]<=74&&b[i]>=72)
		c[i]=2.3*a[i];
		if (b[i]<=71&&b[i]>=68)
		c[i]=2.0*a[i];
		if (b[i]<=67&&b[i]>=64)
		c[i]=1.5*a[i];
		if (b[i]<=63&&b[i]>=60)
		c[i]=1.0*a[i];
		if (b[i]<60)
		c[i]=0*a[i];
	}
	for (i=0;i<n;i++)
	{
		x=x+a[i];
	}
	for (i=0;i<n;i++)
	{
		y=y+c[i];
	}
	printf("%.2lf",y/x);
}

