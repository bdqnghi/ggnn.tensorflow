
int main()
{
	int	i, j, n, a;
	double m, x[1000], r[100];

	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a);
		m=0;
		for(j=0; j<a; j++)
		{
			scanf("%lf", &x[j]);
			if(j<a-1) scanf(" ");
			m+=x[j];
		}
		m/=a;
		r[i]=0;
		for(j=0; j<a; j++) r[i]+=pow(x[j]-m,2);
		r[i]=sqrt(r[i]/a);
	}
	for(i=0; i<n; i++) printf("%.5lf\n", r[i]);
	return 0;
}