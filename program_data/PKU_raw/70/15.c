int main()
{
	double a[100], b[100], c[100][100], d[10000], e[10000];
	int i, j, k, n;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		scanf("%lf%lf", &a[i], &b[i]);
	}
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n; j++)
		{
			c[i][j] = sqrt((a[i] - a[j])*(a[i] - a[j]) + (b[i] - b[j])*(b[i] - b[j]));
		}
	}
	k = 1;
	for (i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
				d[k] = c[i][j];
				k += 1;
		}
	}
	for (i=1; i<=n*n; i++)
	{
		k = 1;
		for (j=1; j<=n*n; j++)
		{
			if(d[i]>d[j]) k += 1;
		}
		e[k] = d[i];
	}
	printf("%.4lf", e[n*n-1]);
	return 0;	
}