
main()
{
	int i,n,m,a[200];
	scanf("%d %d",&n,&m);
	for (i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for (i=n+1;i<=n+n-m;i++)
		a[i]=a[i-n];
	for (i=n-m+1;i<n+n-m;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[i]);
}