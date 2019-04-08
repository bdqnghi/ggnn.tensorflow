int main()
{
	int n;
	scanf("%d",&n);
	int i,a[100],tem=0;
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	if(n%2!=0)
	{
		for(i=0;i<=n/2;i++)
		{
		tem=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=tem;
		}
	}
	if(n%2==0)
	{
		for(i=0;i<=n/2-1;i++)
		{
		tem=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=tem;
		}
	}
	for(i=1;i<n;i++)
	{
	printf("%d ",a[i-1]);//?i?1?????a[i-1]????????a[i-2]????????????	
	}
	printf("%d",a[i-1]);//(???????????????)
	return 0;

} 