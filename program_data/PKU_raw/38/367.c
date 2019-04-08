int main()
{
	int k,n,i,j;
	double *s;
	scanf("%d",&k);
	s=(double*)malloc(sizeof(double)*k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		double *x;
		x=(double *)malloc(sizeof(double)*n);
		double a=0;
		double b=0;
		for(j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
			a+=x[j];
		}
		a=a/n;
		for(j=0;j<n;j++)
		{
			b+=(x[j]-a)*(x[j]-a);
		}
		s[i]=(sqrt)(b/n);
		free(x);
	}
	for(i=0;i<k;i++)
	{
		printf("%.5lf\n",s[i]);
	}
	free(s);
	return 0;
}