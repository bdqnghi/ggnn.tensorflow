int main()
{
	int n,i,m,p,j;
	scanf("%d",&n);
	for(i=3;i<=n/2;i+=2)
	{
		for(j=3;(double)j<=sqrt((double)i);j+=2)
		{
			if(i%j==0)
				break;
		}
		if((double)j>sqrt((double)i))
		{
			m=n-i;
			for(p=3;(double)p<sqrt((double)m);p+=2)
			{
				if(m%p==0)
					break;
			}
			if((double)p>sqrt((double)m))
				printf("%d %d\n",i,m);
		}
	}
	return 0;
}