int isprime(int p)
{
	int prime=1;
	int i;
	if(p==2)
	{
	 return prime;
	}
	for(i=3;i<=(p/2);i=i+2)
	{
		if(p%i==0)
		{
			prime=0;
		break;
		}
	}
	return prime;
}
int main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	if(n>50000)
	{
		printf("??????50000??\n");
	}
	else
	{
			for(i=6;i<=n;i=i+2)
		{
			
			for(j=3;j<=i;j=j+2)
				
			{
				
				if(isprime(j)==1)
				{
					
					int m;
					m=i-j;
					if(isprime(m)==1)
					{
						printf("%d=%d+%d\n",i,j,m);
						break;
					}
				}
			}

			
		}
	}
		return 0;
}

