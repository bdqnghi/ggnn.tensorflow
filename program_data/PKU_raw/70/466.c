double f(double x,double y)
{
	return (x*x+y*y);
}
int main()
{
	int i,j,n;
	double max=0,d,x[100],y[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf%lf",&x[i],&y[i]);
	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++)
		{
			d=sqrt(fabs(f((x[i]-x[j]),(y[i]-y[j]))));
			if(d>max)max=d;
			

		}
	printf("%.4lf\n",max);
         return 0;
	
}
