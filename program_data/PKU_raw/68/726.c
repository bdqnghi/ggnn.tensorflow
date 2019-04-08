
int isprime(int p)
{
	int q,m;
	if(p%2==0) return 0;
	m=sqrt(p);
	for(q=3;q<=m;q+=2)
	{
		if(p%q==0) return 0;
	}
	return 1;
}

void main()
{
	int n,p,i;
	scanf("%d",&n);

	for(i=6;i<=n;i+=2)
	{
		for(p=3;p<=i/2;p+=2)
		{
			if(isprime(p)&&isprime(i-p))
			{
				printf("%d=%d+%d\n",i,p,i-p);
				break;
			}
		}
	}
}
