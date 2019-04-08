void main()
{
	int n,m,i,a[100];
	int *p;
	scanf("%d%d",&n,&m);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	p=&a[0];
	printf("%d",*(p+n-m));
	for(i=n-m+1;i<=2*n-m-1;i++)
		printf(" %d",*(p+i%n));
}