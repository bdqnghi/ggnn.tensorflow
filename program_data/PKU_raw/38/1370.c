void main ()
{
	int i,j,k,n;
	double *a,*b,s,f,sum,ave;
	a=(double *)calloc(200,sizeof(double));
	b=(double *)calloc(200,sizeof(double));
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		for(j=0,sum=0;j<k;j++)
		{
			scanf("%lf",a+j);
			sum=sum+*(a+j);
		}
		ave=sum/k;
		for(j=0,f=0;j<k;j++)
		{
			f=f+(*(a+j)-ave)*(*(a+j)-ave);
		}
		s=sqrt(f/k);
		printf("%.5f\n",s);
	}
	
}