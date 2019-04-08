int isprime(int i);
int main(void)
{
	int i,j,k;
	int n;
    
	
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(j=2;j<=i/2;j++)
		{
			if(isprime(j)&&isprime(i-j))
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}
int isprime(int i)
{
	int j;
	if(i%2==0)
	    return 0;
	for(j=3;j*j<=i;j+=2)
	{
		if(i%j==0)
		    return 0;
	}
	return 1;	
}