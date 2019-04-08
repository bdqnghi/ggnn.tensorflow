int main()
{
	int k, i, n, t;
	scanf("%d", &k);
	double h;
	int j;
	double x[100];
	double S[100];
	for(j=0;j<k;j++)
	{
		scanf("%d\n", &n);
		double b=0, a;
		double c=0;
		for(i=0;i<n;i++)
		{
			scanf("%lf", &x[i]);
			b+=x[i];
		}
		a=b/n;
        for(i=0;i<n;i++)
		{
			c+=((x[i]-a)*(x[i]-a));
		}
		h=c/n;
		S[j]=pow(h,0.5);
	}
	for(t=0;t<k;t++)
	{
		printf("%.5lf\n", S[t]);
	}
	return 0;
}


