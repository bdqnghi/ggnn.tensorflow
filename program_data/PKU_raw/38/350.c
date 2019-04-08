int main()
{
	int i,j,k,n[1000];
	double x[100][100],ss[1000],s[1000],sum[1000],a[1000],y[1000];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		{
			scanf("%lf",&x[i][j]);
		}
		sum[i]=0;
		ss[i]=0;
		for(j=0;j<n[i];j++)
		{
			sum[i]=sum[i]+x[i][j];
		}
		a[i]=sum[i]/n[i];
		for(j=0;j<n[i];j++)
		{
			s[j]=((x[i][j]-a[i])*(x[i][j]-a[i])/n[i]);
		}
		for(j=0;j<n[i];j++)
		{
			ss[i]=ss[i]+s[j];
		}
		y[i]=sqrt(ss[i]);

	}
	for(i=0;i<k;i++)
		printf("%.5f\n",y[i]);
	return 0;
}
