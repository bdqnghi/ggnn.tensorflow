int main()
{
	int i,j,n;
	scanf("%d",&n);
	double *x=(double *)malloc(sizeof(double)*n);
	double *y=(double *)malloc(sizeof(double)*n);
	double dis=0,temp;
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			temp=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
			if(dis<temp)
				dis=temp;
		}
	}
	printf("%.4f\n",sqrt(dis));
}