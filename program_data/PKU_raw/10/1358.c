int main()
{
	int a[30],b[30],n,i,j,max,ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=1;
	}
	for(i=n-1;i>=0;i--)
	{
		max=0;
		for(j=n-1;j>i;j--)
		{
			if(a[i]>=a[j])
			{
				if(b[j]>max){max=b[j];}
			}
			if(a[i]>=a[j]&&b[j]==max)
			{
				b[i]=b[j]+1;
			}
		}
		if(b[j]>ans)ans=b[j];
	}

	printf("%d",ans);
	return 0;
}