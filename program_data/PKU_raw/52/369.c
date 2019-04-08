
int main()
{
	int n,m,i;
	int *a;

	scanf("%d %d",&n,&m);
	a = (int *)malloc(n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-m;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n-m-1;i++)
	{
		printf("%d ",a[i]);
	}
         printf("%d",a[n-m-1]);
	printf("\n");
	return 0;
}
