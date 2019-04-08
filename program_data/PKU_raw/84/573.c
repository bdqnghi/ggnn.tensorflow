int main()
{
	int i,n,e;
	int prime[N];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&prime[i]);
	}
	for(i=0;i<n;i++)
	{
		if(prime[i]>prime[i+1])
			e=prime[i],prime[i]=prime[i+1],prime[i+1]=e;
	}
	for(i=0;i<n;i++)
	{
		if(prime[i]>prime[i+1])
			e=prime[i],prime[i]=prime[i+1],prime[i+1]=e;
	}
	printf("%d\n",prime[n]);
	printf("%d\n",prime[n-1]);
	return 0;
}