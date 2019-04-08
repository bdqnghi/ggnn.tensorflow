int main()
{
	int a[21],i,b[21],n;
	scanf("%d",&n);
	b[0]=1;
	b[1]=1;
	for(i=2;i<=20;i++)
		b[i]=b[i-1]+b[i-2];	
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i-1]);
	printf("%d\n",b[(a[i-1]-1)]);
	}
	scanf("%d",&a[n-1]);
	printf("%d",b[(a[n-1])-1]);

	return 0;
}
