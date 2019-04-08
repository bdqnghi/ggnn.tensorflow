int main()
{
	int n,tmp;
	int high[30]={0};
	int a[30]={1};
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&high[i]);
	}
	for(i=0;i<30;i++)
	{
		a[i]=1;
	}
	for(i=n;i>=1;i--)
	{
		for(j=n;j>i;j--)
		{
			if(high[j]<=high[i])
			{
				if(a[j]+1>a[i])
					a[i]=a[j]+1;
			}
		}
	}
	tmp=0;
	for(i=1;i<=n;i++)
	{
		if(a[i]>tmp)
			tmp=a[i];
	}
	printf("%d",tmp);
	return 0;
}