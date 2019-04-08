int main()
{
	int k,i,j;
	scanf("%d", &k);
	double x[1000],r[1000];
	for(i=0;i<k;i++)
	{
		int n;
		scanf("%d", &n);
		double sum=0.00;
		for(j=0;j<n;j++)
		{
			scanf("%lf", &x[j]);
			sum+=x[j];
		}
		double ave=0.00,total=0.00;
		ave+=sum/n;
		for(j=0;j<n;j++)
		{
			r[j]=(x[j]-ave)*(x[j]-ave);
			total+=r[j];
		}
		total /= n;
		double o=0.00;
	    o=sqrt(total);
        printf("%.5lf\n", o);
	}
	return 0;
}