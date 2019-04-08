double F(double x);
double f(double y);
int main()
{
	int m,i;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		double a=0.0,n;
		scanf("%lf",&n);
		int k=1;
		for(k=1;k<=n;k++)
		{
			a=a+(F(k)/f(k));
		}
		printf("%.3lf\n",a);
	}
	return 0;
}
double F(double x)
{
	double sz[500];
	if(x==1){return 2.0;}
	if(x==2){return 3.0;}
	int b;
	for(b=3;b<=x;b++)
	{
		sz[1]=2.0;sz[2]=3.0;
		sz[b]=sz[b-1]+sz[b-2];
	}
	return sz[(int)x];
}
double f(double y)
{
	double zs[500];
	if(y==1){return 1.0;}
	if(y==2){return 2.0;}
	int c;
	for(c=3;c<=y;c++)
	{
		zs[1]=1.0;zs[2]=2.0;
		zs[c]=zs[c-1]+zs[c-2];
	}
	return zs[(int)y];
}