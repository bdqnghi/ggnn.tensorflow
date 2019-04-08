void main()
{
	unsigned i,n;
	int checkN(unsigned);
	scanf("%u",&n);
	for(i=6; i<=n; i+=2)
	{
		unsigned j=0;
		for(j=3; j<=i-3;j++)
		{
			if(checkN(j) && checkN(i-j))
			{
				printf("%u=%u+%u\n",i,j,i-j);
				break;
			}
		}
	}
}
int checkN(unsigned n)
{
	if(n%2==0)
		return 0;
	else
	{
		unsigned i;
		for(i=3; i<=sqrt(n); i+=2)
		{
			if(n%i==0)
			{
				return 0;
				break;
			}
		}
		if(i>sqrt(n))
			return 1;
	}
}
