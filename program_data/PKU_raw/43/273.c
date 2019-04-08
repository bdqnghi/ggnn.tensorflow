int sushu(double a)
{
	int i,n,s;
	if((int) a%2==0)
	{
		return 0;
	}
	s=sqrt(a);
	for(i=3;i<=s;i+=2)
	{
		if((int)a%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int m,i,n;
	scanf("%d",&m);
	for(i=3;i<=m/2;i++)
	{
		if(sushu((double) i)&&sushu((double) m-i))
		{
			printf("%d %d\n", i,m-i);
		}
	}
}