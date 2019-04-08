
int main(int argc, char* argv[])
{
	int k,i=0,j=0,n[100];
	double x[100][100],aver[100],sum[100],S[100],s[100];

	scanf("%d",&k);

	for(i=0;i<k;i++)
	{
		scanf("%d",&n[i]);
		j=0;
		for(j=0;j<n[i];j++)
		{
			scanf("%lf",&x[i][j]);
			sum[i]=sum[i]+x[i][j];
		}
	}
	i=0;
	for(i=0;i<k;i++)
	{
		aver[i]=sum[i]/n[i];
	}
	i=0;
	for(i=0;i<k;i++)
	{
		j=0;
		for(j=0;j<n[i];j++)
		{
			S[i]=S[i]+pow((x[i][j]-aver[i]),2);
		}
		
	}
	i=0;
	for(i=0;i<k;i++)
	{
		s[i]=pow(S[i]/n[i],1.0/2);
		printf("%.5lf\n",s[i]);
	}
	
	return 0;
}
