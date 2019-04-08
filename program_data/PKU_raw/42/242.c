void main()
{
	int i,j,n;
	long int k,a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	scanf("%ld",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			i=i-1;
			n=n-1;
		}
	}
	printf("%ld",a[0]);
	for(i=1;i<n;i++)
	{
		printf(" %ld",a[i]);
	}
}
