int main()
{
	int m, i, j, n, sqrti, sqrtn;
	scanf("%d",&m);
	if(m>=6 && m<=10000 && m%2==0)
	{
		for(i=3; i<=m/2; i+=2)
		{
			sqrti=(int)sqrt(i);
			for(j=3; j<=sqrti; j+=2)
			{
				if(i%j==0)
					break;
			}
			if(j>sqrti)
			{
				n=m-i;
				sqrtn=(int)sqrt(n);
				for(j=3; j<=sqrtn; j+=2)
				{
					if(n%j==0)
						break;
				}
				if(j>sqrtn)
					printf("%d %d\n",i,n);
			}
		}
	}
	return 0;
}