void main()
{
	int i,n,m,a[100],j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<m;j++)
	{
		if(j==0)
			printf("%d",a[j+n-m]);
		if(j!=0)
			printf(" %d",a[j+n-m]);
	}
	for(j=0;j<n-m;j++)
		printf(" %d",a[j]);
	printf("\n");
}
