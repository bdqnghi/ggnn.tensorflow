
void main(void)
{
	int k;
	scanf("%d",&k);
	for(;k>0;k--)
	{
		int n;
		double x[100];
		scanf("%d",&n);

		int i;
		double add_sqr=0,a=0;
		for(i=0;i<=n-1;i++)
		{
			scanf("%lf",&x[i]);
			add_sqr+=x[i]*x[i];
			a+=x[i];
		}

		add_sqr/=n;
		a/=n;

		printf("%.5lf\n",sqrt(add_sqr-a*a));
	}
}