double distance(double a,double b,double c,double d)
{
	double q;
	q=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	return(q);
}
void main()
{
	int i,j,n;
    double a[100],b[100],d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&a[i],&b[i]);
	}
	d=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(d<distance(a[i],b[i],a[j],b[j])) d=distance(a[i],b[i],a[j],b[j]);
		}
	printf("%.4f",d);
}