
void main()
{
	int n;
	int i,j;
	double s,d;
	double * a;	
	scanf("%d",&n);
	a=(double *)malloc(2*n*sizeof(double));
	
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",(a+i*2),(a+i*2+1));
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			s=pow(*(a+i*2)-*(a+j*2),2)+pow(*(a+i*2+1)-*(a+j*2+1),2);
			if(s>d) d=s;
		}
	}

	d=sqrt(d);

	printf("%.4lf",d);
}