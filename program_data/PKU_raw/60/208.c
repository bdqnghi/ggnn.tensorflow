
int isprime(int i)
{
	int j;
	for(j=2;j*j<=i;j++)
		if(i%j==0)
			return 0;
	return 1;
}

void main()
{
	int n;
	scanf("%d",&n);
	if(n<=4)
		printf("empty\n");
	else
	{
		int i=5;
		for(i=5;i<=n;i+=2)
			if(isprime(i-2)&&isprime(i))
				printf("%d %d\n",i-2,i);
	}
}