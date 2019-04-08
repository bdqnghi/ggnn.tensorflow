int check(long a,long l,long n,long k)
{
	if(l==0)
	{
		if(a!=0) return 1;
		else return 0;
	}
	else if((a-k)%n==0) return check(a-k-(a-k)/n,l-1,n,k);
	else return 0;
}
int main()
{
	long i,n,k;
	scanf("%ld%ld",&n,&k);
	for(i=n;i<=100000000;i++)
		if(check(i,n,n,k))
		{
			printf("%ld",i);
			return 0;
		}
   return 0;
}