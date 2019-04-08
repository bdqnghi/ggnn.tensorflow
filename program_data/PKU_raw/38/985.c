int main()
{
	int k,i,j;
	int n[100];
	double t[100][1000];
	double s[100];
	double a[100];
	double sum[100],sum2[100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		{
			scanf("%lf",&t[i][j]);
		}
	}
	for(i=0;i<k;i++)
	{
		sum2[i]=0;
		sum[i]=0;
		a[i]=0;
		for(j=0;j<n[i];j++)
		{
			sum[i]+=t[i][j];
		}
		for(j=0;j<n[i];j++)
		{
			a[i]=sum[i]/n[i];
		}
		for(j=0;j<n[i];j++)
		{
			sum2[i]+=(t[i][j]-a[i])*(t[i][j]-a[i]);
		}
		for(j=0;j<n[i];j++)
		{
			s[i]=sqrt(sum2[i]/n[i]);
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%.5lf\n",s[i]);
	}
	return 0;
}