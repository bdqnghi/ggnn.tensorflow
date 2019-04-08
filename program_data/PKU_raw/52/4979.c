int main()
{
	int n,m,i;
	int a[MAX];
	int *pa=0;
	int x[MAX];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-m;i++)
	{
		pa=&a[i];
		x[i+m]=*pa;
	}
	for(i=n-m;i<n;i++)
	{
		pa=&a[i];
		x[i+m-n]=*pa;
	}
	printf("%d",x[0]);
	for(i=1;i<n;i++)
	{
		printf(" %d",x[i]);
	}
	printf("\n");
	
	return 0;
}
