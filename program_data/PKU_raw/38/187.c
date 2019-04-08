void main()
{
	int i,j,n,m;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		
		scanf("%d",&n);
		double *a=(double *)malloc(n*sizeof(double)),E=0,D=0;
		for(j=0;j<n;E+=*(a+j-1))
			scanf("%lf",a+j++);
		E/=n;
		for(j=0;j<n;j++)
			D+=(*(a+j)-E)*(*(a+j)-E);
		D/=n;
		printf("%.5lf\n",sqrt(D));
	}

}