int main()
{
	int k;
	int n[100];
	double z[100][100],x[100]={0},y[100]={0};
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&n[i]);
		for(int j=0;j<n[i];j++)
		{
			scanf("%lf",&z[i][j]);
			x[i]=x[i]+z[i][j];
		}
		x[i]=x[i]/(double)n[i];
		for(int t=0;t<n[i];t++)
		{
			y[i]=y[i]+(z[i][t]-x[i])*(z[i][t]-x[i]);
		}
		y[i]=sqrt(y[i]/(double)n[i]);
		printf("%.5lf\n",y[i]);
	}
	return 0;
}

