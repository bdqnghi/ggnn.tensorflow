int main()
{
	int a[300];
	double b[300];
	int n;
	int i,j;
	double zong=0;
	double max=0;
	double ping;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		zong=zong+a[i];
	}
	ping=zong/n;
	for(i=0;i<=n-1;i++)
	{
		if(ping-a[i]>=0)
			b[i]=ping-a[i];
		else
			b[i]=a[i]-ping;
	}
	for(i=0;i<=n-1;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	for(i=0,j=0;i<=n-1;i++)
	{
		if(b[i]==max)
		{
			j++;
			if(j==1)
				printf("%d",a[i]);
			else
				printf(",%d",a[i]);
		}
	}
	printf("\n");
	return 0;
}