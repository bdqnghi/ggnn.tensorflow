void main()
{
	int n,a[100],i,m;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i<m)
		printf("%d ",a[n-m+i]);
		else if(i<n-1)
		printf("%d ",a[i-m]);
		else
		printf("%d",a[n-1-m]);
	}
}
