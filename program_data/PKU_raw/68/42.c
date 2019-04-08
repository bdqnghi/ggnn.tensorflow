int is_prime(int n)
{
	int i;
	if(n==1)
		return(0);
	for(i=2;i<=sqrt(n);)
	{
		if(n%i==0)
		{
			return(0);

		}
		else
		{
			i++;
		}

	}
	return(1);

}

main()
{
	int k;
	int i;
	int n;
	scanf("%d",&n);
	for(k=6;k<=n;k=k+2)
	{
		for(i=2;i<=k/2;i++)
		{
			if(is_prime(i)==1&&is_prime(k-i)==1)
				break;
		}
		printf("%d=%d+%d\n",k,i,k-i);

	}

}