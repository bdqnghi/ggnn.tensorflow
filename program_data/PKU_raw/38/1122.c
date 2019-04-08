
void count()
{
	int n,i;
	double *p[100],m=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i]=(double *)malloc(sizeof(double));
		scanf("%lf",p[i]);
		m=m+*p[i];
	}
	m=m/n;
	for(i=0;i<n;i++)
	{
		s=s+(*p[i]-m)*(*p[i]-m);
	}
	s=s/n;
	printf("%.5f\n", sqrt(s));
}

void main()
{
	int i,k;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	count();
}