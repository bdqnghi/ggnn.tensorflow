int main()
{
	int k,n,i,j;
	double x[1000],s[1000];
	scanf("%d",&k);
	for(j=1;j<=k;j++)
	{
		double b=0,a,p=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lf",&x[i]);
		}
		for(i=0;i<n;i++)
		{
			b+=x[i];
		}
		a=(double)b/n;
		for(i=0;i<n;i++)
		{
			p+=(double)pow((x[i]-a),2);
		}
		s[j]=(double)sqrt(p/n);
	}
	for(j=1;j<=k;j++)
	{
		printf("%.5lf\n",s[j]);
	}
	return 0;
}

