int isprime(int n)
{
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			return 0;
		return 1;
}
int main()
{
	int m,i;
	scanf("%d",&m);
	if((m%2==0)&&(m>=6)&&(m<=10000))
	{
		for(i=3;i<=m/2;i=i+2)
		{
			if(isprime(i)&&isprime(m-i))
				printf("%d %d\n",i,m-i);
		}
	}
	return 0;
}
