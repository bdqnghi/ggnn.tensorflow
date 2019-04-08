void main(int argc, char* argv[])
{
	int i,j,n;
	scanf("%d",&n);
	double *x,*y;
	x=(double*)malloc(sizeof(double)*n);
	y=(double*)malloc(sizeof(double)*n);
	double dis,d;
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&x[i],&y[i]);
	}
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			if (i==0&&j==i+1)
			{
				dis=d;
			}
			else if(d>dis)
			{
				dis=d;
			}
		}
	}
	free(x);
	free(y);
	printf("%.4lf\n",dis);
}