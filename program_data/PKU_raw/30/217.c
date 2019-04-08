int main()
{
	int n,a[100],i;
	long c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i%7==0) || (i%10==7) || (i/10==7))
			a[i]=0;
		else a[i]=i;
		c+=a[i]*a[i];
	}
	printf("%d",c);
	return 0;
}
