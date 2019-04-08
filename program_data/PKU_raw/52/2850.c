void main()
{
	int a[1000];
	int n,m,i;
	scanf("%d %d",&n,&m);
	i=1;
	while(i<=n)
	{	
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=1;
	while(i<=n-m)
	{	
		a[n+i]=a[i];
		i=i+1;
	}
	i=(n-m)+1;
	while(i<=n+(n-m))
	{
		a[i-(n-m)]=a[i];
		i=i+1;
	}
	printf("%d",a[1]);
	i=2;
	while(i<=n)
	{	
		printf(" %d",a[i]);
		i=i+1;
	}
}