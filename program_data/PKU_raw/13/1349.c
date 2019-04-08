int main()
{
	int n,i,j;
	int timer=0;
	int a[20001],b[20001];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			if(a[j]!=a[i])
			{
				timer++;
			}
		}
		if(timer!=i-1)
		{
			a[i]=1;
		}
		timer=0;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==1)
		{
			timer++;
		}
		else
		{
			a[i-timer]=a[i];
		}
	}
	for(i=1;i<n-timer;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[n-timer]);
	return 0;
}