void main()
{
	int a[100];
	int t[100];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	i=0;
	for(j=n-1;j>=0;j--)
	{
		t[i]=a[j];
		i=i+1;
	}
	for(j=0;j<n-1;j++)
		printf("%d ",t[j]);
	printf("%d",t[n-1]);
}