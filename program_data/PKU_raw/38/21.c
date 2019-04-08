int main()
{
	int k,n,i,j;
	double b=0.0,a=0.0,x[1000],s;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
		}
		for(j=0;j<n;j++)
		{
			a+=x[j];
		}
		for(j=0;j<n;j++)
		{
			b+=pow((x[j]-a/n),2);
		}
		s=sqrt(b/n);
		printf("%.5lf\n",s);
		a=0;
		b=0;
	}
	return 0;
}

		
