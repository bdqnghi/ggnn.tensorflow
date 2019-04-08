void main()
{
	double a[100], b[100], c[100], m;
	double f(double x, double y);
	int n, i, j, t;
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf ("%lf %lf", &a[i], &b[i]);
	}
	t=0;
	for (i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			c[t]=f(a[i]-a[j], b[i]-b[j]);
			t++;
		}
	}
	m=0;
	for (i=0; i<t-1; i++)
	{
		if(m<c[i])
		{
			m=c[i];
		}
	}
	printf ("%.4f\n", m);
}

double f(double x, double y)
{
	double z;
	z=sqrt(x*x+y*y);
	return (z);
}