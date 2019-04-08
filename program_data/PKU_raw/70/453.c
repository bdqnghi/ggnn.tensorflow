int main()
{
	int n,i,j;
	double x[999],y[999],s[9999],z=0.0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%lf%lf",&x[i],&y[i]);
	}
	for (j=1;j<n;j++)
	{
		for (i=j;i<=n;i++)
		{
			s[j+i-1]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		 if (s[j+i-1]>z) z=s[j+i-1];
		} 
	}
	printf("%.4f\n",z);
	return 0;
}



