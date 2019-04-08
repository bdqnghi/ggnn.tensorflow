void main()
{
	int n,m,i,j,a[201];
	char str[101];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if (i>=m && i<n)
		{
			a[i+n]=*(a+i-m);
		}
		else a[i+n]=*(a+i+n-m);
	}
	for(i=0;i<n;i++)
	{
		if (i!=0)
		printf(" %d",a[i+n]);
		else printf("%d",a[i+n]);
	}
}
