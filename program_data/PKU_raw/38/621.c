int main()
{
	int k;
	scanf ("%d",&k);
	int i,j;
	double n[100],s[100];
	double x[100][1000];
	double aver[100],sum1[100],sum2[100];
	for (i=0;i<k;i++)
	{
		scanf ("%lf",&n[i]);
		sum1[i]=0;
		sum2[i]=0;
		for (j=0;j<n[i];j++)
		{
			scanf ("%lf",&x[i][j]);
			sum1[i]+=x[i][j];
		}
		aver[i]=sum1[i]/n[i];
		for (j=0;j<n[i];j++)
		{
			sum2[i]+=(x[i][j]-aver[i])*(x[i][j]-aver[i]);
		}
		s[i]=sqrt (sum2[i]/n[i]);
		printf("%.5f\n",s[i]);
	}
	return 0;
}