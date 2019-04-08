int main()
{
	int n,i,j,k;
	double a[100],sum,ave,s2;
	double *p;
	
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		p=a;
		scanf("%d",&n);
		sum=0;
		for(j=1;j<=n;j++)
		{
			scanf("%lf",p+j-1);
			sum+=*(p+j-1);
		}
		ave=sum/n;
		s2=0;
		for(j=1;j<=n;j++)
		{
			s2+=(*(p+j-1)-ave)*(*(p+j-1)-ave);
		}
		printf("%.5lf\n",sqrt(s2/n));
	}

}