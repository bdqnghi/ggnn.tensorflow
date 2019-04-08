int main()
{
	double x[100];
	int k,i;
	scanf("%d",&k);
	
	
	for(i=0;i<k;i++){
		double s1=0,m=0,o=0;
		int n,j;
		scanf("%d",&n);
		
		for (j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
			s1+=x[j];
			double a=0;
		}
		double a=(double)s1/n;
		for(j=0;j<n;j++)
		{
			m+=(x[j]-a)*(x[j]-a);
		}
		printf("%.5f\n",sqrt((double)m/n));
	}
	return 0;
}