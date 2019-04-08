int main()
{
	int a[100],sum=0,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a[i]=i;
		if(i%7==0||i%10==7||i>=70&&i<=79)
		{
			a[i]=0;
		}
		if(a[i]!=0)
		{
			sum+=a[i]*a[i];
		}
	}
	printf("%d",sum);
	return 0;
}
