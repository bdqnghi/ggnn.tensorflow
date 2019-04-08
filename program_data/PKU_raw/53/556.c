void main()
{
	int n,a[300],i,j,k,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	m=n;
	i=0;
	while(i<m)
	{
		for(j=i+1;j<m;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
					a[k]=a[k+1];
				m=m-1;j=j-1;
			}
		}
		i=i+1;
	}
	printf("%d",a[0]);
	for(i=1;i<m;i++)
	printf(",%d",a[i]);
}