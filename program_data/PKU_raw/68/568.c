int main()
{
	int n,i,p,q,j,m;
	scanf("%ld",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(p=3;p<=(i/2);p=p+2)
		{
			q=i-p;
			for(j=3;j<sqrt(p);j++)
			{
				if(p%j==0) break;
			}
			for(m=3;m<sqrt(q);m++)
			{
				if(q%m==0) break;
			}
			if(j>=((int)sqrt(p)+1)&&m>=((int)sqrt(q)+1))
			{
				printf("%ld=%ld+%ld\n",i,p,q);
				break;
			}
			else continue;
		}
	}
return 0;
}