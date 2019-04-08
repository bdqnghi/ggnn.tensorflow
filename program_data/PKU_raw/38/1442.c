void main()
{
	int i,j,p=0;
	int k;
	scanf("%d",&k);
	
	for(i=0;i<k;i++)
	{
		int n;
		scanf("%d",&n);
		double *p,a=0,s=0;
		p=(double *)calloc(n,sizeof(double));
		for(j=0;j<n;j++)
		{scanf("%lf",p+j);
		a=a+*(p+j);}
		a=a/n;
		for(j=0;j<n;j++)
		{s=s+(*(p+j)-a)*(*(p+j)-a);}
		s=sqrt(s/n);
		printf("%.5f\n",s);
		
	}	
}