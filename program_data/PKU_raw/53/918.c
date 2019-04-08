void main()
{
	int a[300];
	int n,i,j,k,w;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			w=j;
			if (a[i]==a[j])
			{
				n=n-1;
				for (k=j;k<n;k++)
				{
					a[k]=a[j+1];
					j=j+1;
				}
				j=w-1;
			}
		}
	}
	for (i=0;i<n-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d",a[n-1]);
}