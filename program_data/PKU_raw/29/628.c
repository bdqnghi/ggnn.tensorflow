double f(double x);
double g(double y);
int main()
{
	int i;
	double s,j,n,a[1000];
	scanf("%lf",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%lf",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		s=0;
		for(j=1;j<=a[i];j++)
		{
			
			s+=g(j)/f(j);
		}
		printf("%.3lf\n",s);
	}
	return 0;
}
double f(double x)
{
	if(x==1)
		return 1;
	if(x==2)
		return 2;
	if(x>2)
		return f(x-1)+f(x-2);
}
double g(double y)
{
	if(y==1)
		return 2;
	if(y==2)
		return 3;
	if(y>2)
		return g(y-1)+g(y-2);
}