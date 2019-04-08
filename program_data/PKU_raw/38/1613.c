int main ()
{
	int k, i, j, n;
	scanf("%d", &k);
	double b[100];
	for(i=0;i<k;i++)
	{
		scanf("%d", &n);
		double a[100], ave=0, sum=0, ss=0;
		for(j=0;j<n;j++)
		{
			scanf("%lf", &a[j]);
		}
		for(j=0;j<n;j++)
		{
			sum += a[j];
		}
		ave=sum/n;
		for(j=0;j<n;j++)
		{
			ss+=pow(a[j]-ave, 2);
		}
		b[i]=pow(ss/n,0.5);
	}
	for(i=0;i<k;i++)
	{
		printf("%.5lf\n", b[i]);
	}
	return 0;
}