int main()
{
	int n=0,m=0;
	scanf("%d %d\n",&n,&m);
	int a[200];
	for(int i=1;i<=n;i++)
	scanf("%d ",&a[i]);
	for(int j=n;j>=1;j--)
	a[j+m]=a[j];
	for(int b=1;b<=m;b++)
	a[b]=a[n+b];
	for(int c=1;c<=n;c++)
	{
		if(c!=n)
		printf("%d ",a[c]);
		else
		printf("%d",a[n]);
	 } 
	return 0;
}