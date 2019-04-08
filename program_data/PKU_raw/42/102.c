void main()
{
	int n,i,j,b;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&b);
	i=0,j=0;
	while(i<n)
	{
		if (a[i]!=b)
		{
			a[j]=a[i];
			i++,j++;
		}
		else i++;
	}
	for(i=0;i<(j-1);i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[j-1]);
}