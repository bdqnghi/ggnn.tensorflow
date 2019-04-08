void main()
{
	int n,a[20000],i=2,j,k;
	scanf("%d",&n);
	scanf("%d",&a[1]);
	while(i<=n)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	printf("%d",a[1]);
	for(i=2;i<=n;i=i+1)
	{
		if(a[i]==a[1]) a[i]=0;
	}
	for(k=2;k<=n;k=k+1)
	{
		if(a[k]!=0)
		{
		printf(" %d",a[k]);
		for(j=k+1;j<=n;j=j+1)
		{
			if(a[j]==a[k])
			{a[j]=0;}
		}
		}
	}
}