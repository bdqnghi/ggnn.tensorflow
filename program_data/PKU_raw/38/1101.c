void main()
{
	int n,i;
	scanf("%d",&n);
	double *p[50]={0};
	for(i=0;i<n;i++)
	{
		int m;
		scanf("%d",&m);
		int j;
		double *x;
		double sum=0;
		for(j=0;j<m;j++)
		{
			x=(double*)malloc(sizeof(double));
			scanf("%lf",x);
			p[j]=x;
			sum+=*x;
		}
		double a,c=0;
		a=sum/m;
		for(j=0;j<m;j++)
		{
			c+=(*(p[j])-a)*(*(p[j])-a);
		}
		c=c/m;
		double s;
		s=sqrt(c);
		printf("%.5lf\n",s);
	}
}