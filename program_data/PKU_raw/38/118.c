int main()
{
	int k;
	scanf("%d",&k);
	int i;
	for(i=1;i<=k;i++)
	{
		int n;
		scanf("%d",&n);
		int j;
		double a[100],sum=0;
		for(j=0;j<n;j++)
		{
			scanf("%lf",&a[j]);
			sum=sum+a[j];
		}
		double ave;
		ave=sum/n;
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+(a[j]-ave)*(a[j]-ave);
		}
		printf("%.5lf\n",sqrt(sum/n));
	}
}


	