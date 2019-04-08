int isprime(int x)
{
	if(x==1) return 0;
	if(x==2) return 1;
    for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=6;i<=n;i=i+2)
	{
		for(j=3;j<=i/2;j=j+2)
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

