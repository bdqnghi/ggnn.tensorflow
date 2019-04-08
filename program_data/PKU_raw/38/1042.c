int main()
{
	int k,n[100],i,j;
	double x[100][100],sum[100]={0},sum1[100]={0},re[100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		{
			scanf("%lf",&x[i][j]);
			sum[i]+=x[i][j];
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<n[i];j++)
		{
			sum1[i]+=((x[i][j]-sum[i]/n[i])*(x[i][j]-sum[i]/n[i]));
		}
		re[i]=sqrt(sum1[i]/n[i]);
		printf("%.5lf\n",re[i]);
	}
	return 0;
}