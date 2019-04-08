int main()
{
	int n,i,m;
	int a[200];
	scanf ("%d %d",&n,&m);
	getchar();
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n-m;i++)
	{
		a[n+i]=a[i];
	}
	for (i=0;i<n-1;i++)
	{
		a[i]=a[n-m+i];
		printf ("%d ",a[i]);
	}
	a[n-1]=a[2*n-m-1];
	printf ("%d",a[n-1]);
	return 0;
}
