main()
{
	int n,i,k,m,p,q;
	scanf("%ld",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(k=3;k<=i/2;k=k+2)
		{
			m=i-k;
			for(p=3;p<=sqrt(k);p=p+2)
				if(k%p==0) break;
			for(q=3;q<=sqrt(m);q=q+2)
				if(m%q==0) break;
			if(p>=(((int)sqrt(k))+1)&&q>=(((int)sqrt(m))+1))
			{
				printf("%ld=%ld+%ld\n",i,k,m);
				break;
			}
			else continue;
		}
	}
}