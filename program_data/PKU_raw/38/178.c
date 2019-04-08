int main()
{
	int k,n[100],i,j;
	double x[1000],ave=0.00,sum=0.00,s[100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		{
			scanf("%lf",&x[j]);
			ave=ave+x[j];
		}
		ave=ave/n[i];
		for(j=0;j<n[i];j++)
		{
			sum=sum+(x[j]-ave)*(x[j]-ave);
		}
		s[i]=sqrt(sum/n[i]);
		ave=0.00;
		sum=0.00;
	}
	printf("%.5f",s[0]);
	for(i=1;i<k;i++)
	{
		printf("\n%.5f",s[i]);
	}
	return 0;
}