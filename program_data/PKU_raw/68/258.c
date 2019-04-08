int prime(int p);
int prime(int p)
{
	int m;
	int isprime=1;
	if(p==1) {return isprime;}
	else
	{
		for(m=3;m<=sqrt(p);m+=2)
		{
			if(p%m==0){isprime=0;return isprime;break;}
		}
	}
	return isprime;
}
int main()
{
	int n,k,i;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(k=3;k<=n;k+=2)
		{
			if(prime(k)+prime(i-k)==2){printf("%d=%d+%d\n",i,k,i-k);break;}
		}
	}
	return 0;
}