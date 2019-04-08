main()
{
	int n,i,k,p;
	scanf("%d\n",&n);
	double a[100];
	double b[100];
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf\n",&a[i],&b[i]);
	}
	k=n*(n-1)/2;
	double c[1000];
	int l;
	l=0;
	for(i=0;i<n-1;i++)
	{
		for(p=i+1;p<n;p++)
		{
			c[l]=(a[i]-a[p])*(a[i]-a[p])+(b[i]-b[p])*(b[i]-b[p]);
			l++;
		}
	}
	
	for(l=0;l<k-1;l++)
	{
		if(c[l]>c[l+1])
		{
			c[l+1]=c[l];
		}
	}
	printf("%.4lf",sqrt(c[k-1]));
}
