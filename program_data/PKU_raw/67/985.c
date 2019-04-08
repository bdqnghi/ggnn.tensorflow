int main()
{
	int n;
	scanf("%d\n",&n);
	double a,b,c,m;
	scanf("%lf%lf",&a,&b);
	c=b/a;
	struct d{
		double e;
		double f;
		double g;
	}d[100];
	for(int i=0;i<n-1;i++)
	{
		scanf("%lf%lf",&d[i].e,&d[i].f);
	}
	for(int k=0;k<n-1;k++)
	{
		d[k].g=d[k].f/d[k].e;
		m=c-d[k].g;
		if(m>0.05)
		{
			printf("worse\n");
		}
		if(m<(-0.05))
		{
			printf("better\n");
		}
		if(m<=0.05&&m>=-0.05)
		{
			printf("same\n");
		}
	}
	return 0;
}
