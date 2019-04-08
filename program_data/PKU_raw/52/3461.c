void main()
{
	int n,m,i;
	int a[100];
	int b[100];
    scanf("%d%d",&n,&m);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n-m-1;i++)
		b[i+m]=a[i];
	for(i=n-m;i<=n-1;i++)
		b[i-n+m]=a[i];
	for(i=0;i<=n-1;i++)
		a[i]=b[i];
	printf("%d",a[0]);
	for(i=1;i<=n-1;i++)
		printf(" %d",a[i]);
}
