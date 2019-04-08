int main()
{
	int i,j,k;
	double S[10000];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		int n;
		double x[100],sum_x=0,a;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
			sum_x+=x[j];
		}
		a=sum_x/(double)n;
		double sum_X=0;
		for(j=0;j<n;j++)
			sum_X+=pow((x[j]-a),2);
		S[i]=sqrt(sum_X/(double)n);
	}
	for(i=0;i<k;i++)
		printf("%.5lf\n",S[i]);
	return 0;
}