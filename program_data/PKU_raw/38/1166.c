double f(int n,double *p[])
{
	double a=0,s=0;
	int i,j;
	for(i=0;i<n;i++)
	{
	
		a=a+**(p+i);
	}
	a=a/n;
	for(i=0;i<n;i++)
	{
		**(p+i)=(**(p+i)-a)*(**(p+i)-a);
		s=s+**(p+i);
	}
	s=sqrt(s/n);
	return s;
}

void main()
{
	int k,n,i,j;
	
	double *q;

	double *p[100];


	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&n);

		q=(double *)malloc(n*sizeof(double));
		for(j=0;j<n;j++)
		*(p+j)=q+j;

		for(j=0;j<n;j++)
		{
			scanf("%lf",*(p+j));
			
		}
		printf("%.5f\n",f(n,p));
		free(q);
	}
}
