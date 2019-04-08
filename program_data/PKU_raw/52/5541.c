
int main()
{
	int a[100],i,k,n,m;
	scanf("%d %d",&n,&m);
	for(k=0;k<n;k++)
		scanf("%d",&a[k]);
	for(i=n-m;i<n;i++)
	{
		if(i==n-m)
			printf("%d",a[i]);
		else
		printf(" %d",a[i]);
	}
	for(i=0;i<n-m;i++)
		printf(" %d",a[i]);

	return 0;
}