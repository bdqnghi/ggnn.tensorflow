main()
{
	
	int k;
    scanf("%d",&k);
	int i=1;
	int n;
	for(i;i<=k;i++)
	{
		
		scanf("%d",&n);
		int j=0;
	    double sum=0;
		double a[100];
		double s=0;
		for(j=0;j<n;j++)
		{scanf("%lf",&a[j]);
		sum=sum+a[j];}
		sum=sum/n;
		for(j=0;j<n;j++)
		s=s+pow(sum-a[j],2);
		s=s/n;
		s=sqrt(s);
		printf("%.5lf\n",s);
	}
}
