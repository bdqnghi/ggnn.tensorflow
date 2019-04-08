int main()
{
	int k,n,i,j;
	double s[100],a[100]={0.0},sum=0.0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		sum=0.0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&s[j]);
			sum+=s[j];
		}
		sum=sum/(1.0*n);
		for(j=0;j<n;j++)
		{
			a[i]+=(1.0*s[j]-sum)*(1.0*s[j]-sum);
		}
		a[i]=sqrt(a[i]/(1.0*n));
	}
	for(i=0;i<k;i++)
	{
		printf("%.5lf\n",a[i]);
	}
	return 0;
}