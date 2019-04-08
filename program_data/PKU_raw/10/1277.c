void main()
{
	int n,a[25],b[25]={0},i,j,max=0;
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
	
	for(i=1;i<=n-1;i++)
	{
		for (j=n-i;j<=n-1;j++)
		{
			if(a[n-1-i]>=a[j])
			{
				if(b[n-i-1]<b[j]+1)
				{
					b[n-i-1]=b[j]+1;
				}
			}
		}
	}
	for (i=0;i<=n-1;i++)
	{
		if(max<b[i]) max=b[i];
	}
	printf("%d",max);

}