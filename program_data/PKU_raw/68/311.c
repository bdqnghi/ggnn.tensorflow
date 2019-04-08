int prime(int x);
int prime(int x)
{
	int n;
	int isprime=1;
	if(x==1) {return isprime;}
	else
	{
		for(n=3;n<=sqrt(x);n=n+2)
		{
			if(x%n==0)
			{isprime=0;return isprime;break;}
		}
	}
	return isprime;
}
int main()
{
	int y,k,i;
	scanf("%d",&y);
	for(i=6;i<=y;i+=2)
	{
		for(k=3;k<=y;k=k+2)
		{
			if(prime(k)+prime(i-k)==2)
			{printf("%d=%d+%d\n",i,k,i-k);break;}
		}
	}
	return 0;
}
