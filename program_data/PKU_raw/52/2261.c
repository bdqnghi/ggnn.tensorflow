void main()
{
	int a[200];int i,j,k;
	int n,m;
	scanf("%d%d",&n,&m);
	for(i=0;i<=n-1;i++)
	{scanf("%d",&a[i]);}
	for(j=n;j<=2*n-1;j++)
	{a[j]=a[j-n];}
	printf("%d",a[n-m]);
	for(k=n-m+1;k<=2*n-1-m;k++)
	{printf(" %d",a[k]);}
	printf("\n");
}
