void main()
{
	int a[100000],b[100000],d[100000],i,j,n,t,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&d[i]);
		d[i]=b[i]+d[i];
	}
	for(i=0;i<3;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if (d[j]>d[j-1])
			{
				t=d[j];s=a[j];
				d[j]=d[j-1];a[j]=a[j-1];
				d[j-1]=t;a[j-1]=s;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d %d\n",a[i],d[i]);
	}
}
