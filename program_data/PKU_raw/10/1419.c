void main()
{
	int a[25],b[25];
	int i,j,k;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
	for(i=k-2;i>=0;i--)
	{
		for(j=i+1;j<=k-1;j++)
		{
			if(a[i]>=a[j])
			{
				if(b[j]>=b[i])
					b[i]=b[j]+1;
			}
		}
	}
	for(i=0;i<k-1;i++)
	{
		if(b[i]>b[i+1])
		{
			j=b[i];
			b[i]=b[i+1];
			b[i+1]=j;
		}
	}
	printf("%d\n",b[k-1]);
}