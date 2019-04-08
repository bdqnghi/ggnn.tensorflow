void main()
{
	long m,n,i,j,k,x,t=1;
	scanf("%ld",&n);
	for(m=6;m<=n;m=m+2)
	{
		for(i=2;i<=m/2;i++)
		{
		
			k=sqrt(i);
			for(j=2;j<=k;j++)
				if(i%j==0) break;
			if(j>=k+1)
			{
				x=m-i;
				
				k=sqrt(x);
				for(j=2;j<=k;j++)
					if(x%j==0) break;
				if(j>=k+1)
				{
					printf("%ld=%ld+%ld\n",m,i,x);
					break;
				}
			}
		}
	}
}

