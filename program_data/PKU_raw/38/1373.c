int main()
{
	int k, i, j, n;
	double  a[1001], s, p, av, sum, t, to;
	scanf("%d", &k);
	for(j=0;j<k;j++)
	{
		sum=0;
		t=0;
		scanf("%d", &n);
		for(i=0;i<n;i++)
		{
			scanf("%lf ", &a[i]);
		}
		for(i=0;i<n;i++)
		{
			sum+=a[i];
		}
		av=sum/n;
		for(i=0;i<n;i++)
		{
			t+=(a[i]-av)*(a[i]-av);
		}
		to=t/n;
		s=sqrt(to);
		printf("%.5lf\n", s);
	}
	return 0;
}