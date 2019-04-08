
double x[10000], y[10000];

int main()
{
	int i,j,n;
	cin >>n;
	for (i=0; i<n; ++i)
		cin >>x[i]>>y[i];
	double ans=0.0;
	for (i=0; i<n; ++i)
		for (j=i+1; j<n; ++j)
		{
			double dist=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			if (dist > ans)
				ans = dist;
		}
	printf("%.4lf\n", ans);
	return 0;
}