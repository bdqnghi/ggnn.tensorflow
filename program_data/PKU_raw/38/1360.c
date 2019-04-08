int main()
{
	int k,i,n,j=0;
	scanf("%d",&k);
	double x[100];
	while(j<k)
	{
		double a=0,s=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lf",&(x[i]));
		}
		for(i=0;i<n;i++)
		{
			a+=x[i];
		}
		a=a/(n*1.0);
		for(i=0;i<n;i++)
		{
			s+=(x[i]-a)*(x[i]-a);
		}
		s=s/(n*1.0);
		s=sqrt(s);
		printf("%.5lf\n",s);
		j++;
	
	}
	return 0;
}