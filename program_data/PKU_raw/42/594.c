void main()
{
	int n,k,a[100000],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n");
	scanf("%d",&k);
    for(i=0,j=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			a[j]=a[i];
			j++;
		}
	}
	for(i=0;i<(j-1);i++)
		printf("%d ",a[i]);
	printf("%d",a[j-1]);
	printf("\n");
}
