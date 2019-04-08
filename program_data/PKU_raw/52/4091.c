void main()
{
	int a[100],i,n,j,m;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=m;i++)
	{
		a[0]=a[n];
		for(j=n;j>0;j--)
			a[j]=a[j-1];
	}
	for(i=1;i<n;i++)
		printf("%d ",a[i]);
	printf("%d",a[i]);
}
