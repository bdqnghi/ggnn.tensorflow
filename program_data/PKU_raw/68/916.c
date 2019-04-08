
int IsPrime(int m)
{
	int high,i;
	high=sqrt(m);
	for (i=3;i<=high;i+=2)//?????m????
	{
		if(m%i==0) break;
	}
	if(i>high) return 1;
	return 0;
}
void Out2prime(int m)
{
	int a,b;
	for (a=3;a<=m/2;a+=2)
	{
		b=m-a;
		if(IsPrime(a)&&IsPrime(b))
		{
			printf("%d=%d+%d\n",m,a,b);
			break;
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for (i=6;i<=n;i+=2)
	{
		Out2prime(i);
	}
	return 0;
}