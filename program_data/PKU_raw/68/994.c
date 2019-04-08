int isprime(double n)
{
	long s,i;
	if(n<2)
	{
		return 0;
	}
	s=(double)sqrt(n);
	for(i=2;i<=s;++i)
	{
		if((int)n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
void main()
{
	long i, j, n;   
	scanf("%ld", &n);
	 for(i = 6; i <= n; i += 2)
	 {
        for(j = 2; j <= i / 2; ++j)
		{
			if(isprime(j) && isprime(i - j))
			{
				 printf("%ld=%ld+%ld\n", i, j, i - j);        
				 break;
			}
		}
	 }
}