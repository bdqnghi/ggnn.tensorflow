int main()
{
	int k,n,i,j;
	double x[1000],s,v;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		v=0;
		s=0;
		for(j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
		}
		for(j=0;j<n;j++)
		{
			v=v+x[j];
		}
		v=v/n;
		for(j=0;j<n;j++)
		{
			s=s+(x[j]-v)*(x[j]-v);
		}
		s=sqrt((double)s/n);
		printf("%.5lf\n",s);
	}
	return 0;
}