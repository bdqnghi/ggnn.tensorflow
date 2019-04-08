main()
{
	int n,i,m;
	int a[num];
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=n+m-1;i>=m;i--)
		a[i]=a[i-m];/*????m*/
	for (i=0;i<m;i++)
		a[i]=a[i+n];
	for (i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[n-1]);
}