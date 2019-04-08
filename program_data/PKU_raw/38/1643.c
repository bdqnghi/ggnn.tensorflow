int main()
{
	int k,n;
	double x[100],s=0,r=0;
	int i,j;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
			s+=x[j]/(double)n;
		}
	
		for(j=0;j<n;j++)
		{
			r+=(x[j]-s)*(x[j]-s)/(double)n;
		}
		printf("%.5lf\n",sqrt(r));
		s=0;
		r=0;
	}
	return 0;
}




