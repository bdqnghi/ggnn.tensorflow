
int main()
{
	int n;int m;scanf("%d %d",&n,&m);
	int a[100];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[100];
	
	for(i=0;i<n;i++)
	{
		if(i<n-m)
		{
			b[i+m]=a[i];
		}
		else if(i>=n-m)
		{
			b[i-n+m]=a[i];
		}
	}
	for(i=0;i<n-1;i++){printf("%d ",b[i]);}printf("%d",b[n-1]);

	return 0;
}