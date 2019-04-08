int main()
{
	int k,n,i,j;
	double s=0,x[100],a,S[100],d=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
			s+=x[j];
		}
		a=s/(double)n;
		for(j=0;j<n;j++)
		{
			d+=(x[j]-a)*(x[j]-a);
		}
		S[i]=sqrt(d/(double)n);
		s=0;
		d=0;
	}
	for(i=0;i<k;i++)
	{
		printf("%.5f\n", S[i]);
	}
	return 0;
}