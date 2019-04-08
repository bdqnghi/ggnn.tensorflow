int main()
{
	int n,a[20000],i,j;
	scanf("%d",&n);
	while(n<1||n>20000)
	{
		scanf("%d",n);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		while(a[i]<10||a[i]>100)
		{
			scanf("%d",&a[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])a[j]=0;
		}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(a[i]>0)printf(" %d",a[i]);
	}

	return 0;
}
			




