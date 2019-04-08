void main()
{
	int a[302];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]==a[i])a[j]=-1;
		}
	}
	printf("%d",a[0]);
	for(i=1;i<=n-1;i++)
	    if(a[i]>=0)printf(",%d",a[i]);
}

