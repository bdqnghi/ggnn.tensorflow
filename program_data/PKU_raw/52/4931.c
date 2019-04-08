int main()
{
	int m,n,i;
	int a[202];
	scanf("%d %d",&n,&m);
	scanf("%d",&a[1]);
	for(i=2;i<=n;i++)
	{scanf(" %d",&a[i]);}
	for(i=n+1;i<=2*n-m;i++)
	{a[i]=a[i-n];}
	printf("%d",a[n-m+1]);
	for(i=n-m+2;i<=2*n-m;i++)
	{printf(" %d",a[i]);}
	return 0;
}