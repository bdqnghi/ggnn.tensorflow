int main()
{
	int n,i,j;
	scanf("%d\n",&n);
	int a[200],b[200];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		j=n+1-i;
		b[j]=a[i];
	}
	j=1;
	while(j<n)
	{
		printf("%d ",b[j]);
		j=j+1;
	}
	printf("%d",b[j]);
	return 0;
}