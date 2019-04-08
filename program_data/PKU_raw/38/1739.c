double equal(double *a,int n);
int main()
{
	int n,m,i,j;
	double s,a[1000],x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
			scanf("%lf",&a[j]);
		x=equal(a,m);
		s=0.0;
		for(j=0;j<m;j++)
			s+=(a[j]-x)*(a[j]-x);
		s=s/m;
		s=sqrt(s);
		printf("%.5f\n",s);
	}
}

double equal(double *a,int n)
{
	double x=0.0;
	int i;
	for(i=0;i<n;i++)
		x+=a[i];
	x=x/n;
	return x;
}