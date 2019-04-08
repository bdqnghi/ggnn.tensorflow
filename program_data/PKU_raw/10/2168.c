main ()
{
	int n,i,j,a[30],b[30],max=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i-1]);
	}
	for(i=1;i<=n;i++)
	{
		b[i-1]=1;
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			if(a[n-i]>=a[n-i+j]&&b[n-i]<=b[n-i+j])
			{
				b[n-i]=1+b[n-i+j];
			}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		if(b[i-1]>max)
		max=b[i-1];
	}
	printf("%d",max);
}