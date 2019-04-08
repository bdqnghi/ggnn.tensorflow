int f(int n)
{
	if((n==0)||(n==1))
	{
		return 1;
	}
	else
	{
		return f(n-1)+f(n-2);
	}
}
double S(int n)
{
	double a,b,s=0;
	int i;
	for(i=1;i<=n;i++)
	{
		a=f(i);
		b=f(i+1);
		s+=b/a;
	}
	return s;
}
int main()
{
	int m,n,i;
	double sum;
	scanf("%d", &m);
	for(i=0;i<m;i++)
	{
		scanf("%d", &n);
		sum=S(n);
		printf("%.3lf\n", sum);
	}
	return 0;
}
