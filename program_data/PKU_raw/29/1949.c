double calculate(int m)
{
	double sum;
	int a,b,c,i;
	a=1;
	b=2;
	sum+=b*1.0/a;
	for(i=1;i<=m-1;i++)
	{
		c=a+b;
		a=b;
		b=c;
		sum+=b*1.0/a;
	}
	return sum;
}
void main()
{
	int n,i,m;
	double sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		sum=calculate(m);
		printf("%.3f\n",sum);
	}
}
