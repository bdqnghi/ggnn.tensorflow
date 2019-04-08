int isreverse(int num)
{
	int num_r=0;
	int __num=num;
	while (num!=0)
	{
		num_r=num_r*10+num%10;
		num/=10;
	}
	if (num_r==__num)
		return 1;
	else
		return 0;
}
void getprime(int prime[])
{
	prime[0]=0;
	prime[1]=0;
	int i, j;
	for (i=2; i<LIMIT; i++)
		prime[i]=1;
	for (i=2; i<LIMIT; i++)
	{
		if (prime[i])
		{
			for (j=i*i; j<LIMIT; j+=i)
				prime[j]=0;
		}
	}
}
void main()
{
	int i,flag=1;
	int prime[LIMIT];
	getprime(prime);
//	for (i=0; i<LIMIT; i++)
//	{
//		if (prime[i])
//			printf("%d ", i);
//	}
	int m,n;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(prime[i]&&isreverse(i)&&flag)
		{
			printf("%d",i);
			flag=0;
		}
		else if(prime[i]&&isreverse(i))
			printf(",%d",i);
	}
	if(flag==1)
		printf("no");

}