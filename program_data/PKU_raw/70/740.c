main()
{
	double a[300]={0},b[300]={0},d,c=0;
	int i,r,n;
	scanf ("%d",&n);
    for (i=0;i<=n-1;i++)
	{
		scanf ("%lf",&a[i]);
		scanf ("%lf",&b[i]);
	}
	for (i=0;i<=n-2;i++)
	{
		for (r=i+1;r<=n-1;r++)
		{
			d=sqrt((a[i]-a[r])*(a[i]-a[r])+(b[i]-b[r])*(b[i]-b[r]));
			if (c<d)
				c=d;
		}
	}
    printf("%.4f\n",c);
}