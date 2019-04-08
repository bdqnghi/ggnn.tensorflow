void main()
{
	double a[20][2],m[20],max;
	int i,j,n,p;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		for (j=0;j<2;j++)
			scanf("%lf", &a[i][j]);
    for (i=0;i<n-1;i++)
	{
		double b[20];
		for (j=i+1;j<n;j++)
		{
			double t1=pow(a[i][0]-a[j][0],2);
			double t2=pow(a[i][1]-a[j][1],2);
			 b[j-i-1]=pow(t1+t2,0.5);
		}
		m[i]=b[0];
		for (p=0;p<n-i-1;p++)
		{
			if (m[i]<b[p])
				m[i]=b[p];
		}
	}
	max=m[0];
	for (i=0;i<n-1;i++)
	{
		if (max<m[i])
			max=m[i];	
	}
	printf("%.4lf\n",max);
}

