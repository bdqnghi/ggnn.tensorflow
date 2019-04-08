void main()
{
	int i,j,n,a[25],b[25],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>=a[j]&&b[i]<b[j]+1)
				b[i]=b[j]+1;
		}
	}
	max=0;
	for(i=0;i<n;i++)
		max=(max>b[i])?max:b[i];
	printf("%d\n",max);
}
