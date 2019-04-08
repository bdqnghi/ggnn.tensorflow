int main()
{
	int n,m,i,j;
	double sz[100][100],sum1[100]={0},junzhi[100],e[100],sum2[100]={0},s[100],a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%lf",&sz[i][j]);
			sum1[i]+=(double)sz[i][j];
		}
		junzhi[i]=sum1[i]/(double)m;
		for(j=0;j<m;j++)
		{
			e[j]=(junzhi[i]-sz[i][j])*(junzhi[i]-sz[i][j]);
			sum2[i]+=(double)e[j];
			a[i]=sum2[i]/(double)m;
			s[i]=sqrt(a[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%.5lf\n",s[i]);
	}
	return 0;
}
