int main()
{
	int a[100];
	int max,smax,i,n;
	max=smax=i=n=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[1]>a[2])
	{
		max=a[1];
		smax=a[2];
	}
	else
	{
		max=a[2];
		smax=a[1];
	}
	for(i=3;i<=n;i++)
	{
		if(a[i]>max)
		{
			smax=max;
			max=a[i];
		}
		else if(a[i]<=max&&a[i]>smax)
		{
			smax=a[i];
		}
	}
	printf("%d\n%d",max,smax);
	return 0;
}
