void main()
{
	int i,j,n,c[100],max;
	double a[100];
    memset(c,0,sizeof(c));
    scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%lf",&a[i]);
	c[n-1]=1;
	for (i=n-1;i>=0;i--)
	{
		max=0;
		for (j=i+1;j<n;j++)
			if(a[j]<=a[i]&&c[j]>max)
				max=c[j];
		c[i]=max+1;
	}
	max=0;
    for (i=0;i<n;i++)
		if (c[i]>max)
			max=c[i];
	printf("%d",max);
    
}
