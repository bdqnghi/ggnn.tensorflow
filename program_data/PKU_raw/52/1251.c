void main()
{
	int n,m,i,j,a[101];
	scanf("%d%d",&n,&m); 
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=0;
	while(i!=m)
	{
		for (j=n;j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[0]=a[n];
		i++;
	}
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
	printf("%d",a[n-1]);
}

