int main()
{
	double as[100][1000]={0};
	int n,i,j,x[100]={0};
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		for(j=0;j<x[i];j++)
		{
			scanf("%lf",&as[i][j]);
		}
	}



	for(i=0;i<n;i++)
	{
		double sum=0;
		for(j=0;j<x[i];j++)
		{
			sum+=as[i][j];
		}
		double abs;
		abs=sum/(double)x[i];
		double pfh=0;
		for(j=0;j<x[i];j++)
		{
			pfh+=((as[i][j]-abs)*(as[i][j]-abs));
		}
		printf("%.5lf\n",sqrt(pfh/(double)x[i]));
	}
}









