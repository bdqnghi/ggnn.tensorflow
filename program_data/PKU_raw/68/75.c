int isprime(int p)
{
	int i;
	if(p%2==0)
	{
		if(p==2)
		{
			return 1;
		}
		return 0;
	}
	for(i=3;i<=sqrt(p);i=i+2) 
	{
		if(p%i==0)
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	int isprime1,isprime2;
	int n,i,j;
	scanf("%d",&n);
	for(j=6;j<=n;j=j+2)
	{ 
		for(i=3;i<=j/2;i=i+2)        
		{
			isprime1 = isprime(i);
			isprime2 = isprime(j-i);
			if(isprime1==1 && isprime2==1)
			{
               printf("%d=%d+%d\n",j,i,j-i);
			    break;
			}
				
		}
	}
	return 0;
}

