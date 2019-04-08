
void change(int n,int a[])
{
	int i;
	for(i=n-1;i>=1;i--)
	{
		a[i-1]=a[i-1]+a[i];
		a[i]=a[i-1]-a[i];
		a[i-1]=a[i-1]-a[i];
	}
}

void main(void)
{
	int m,n,a[100];
	scanf("%d %d",&n,&m);

	int i;
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);

	for(i=1;i<=m;i++)
		change(n,a);

	for(i=0;i<=n-2;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[n-1]);
}