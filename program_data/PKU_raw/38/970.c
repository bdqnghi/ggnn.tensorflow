int main()
{
	int k,i,j,n;
	double A[100],sum1,sum2,S[100],a;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&A[j]);
		}
		for(j=0,sum1=0;j<n;j++)
		{
			sum1+=A[j];
		}
		a = sum1/n;
		for(j=0,sum2=0;j<n;j++)
		{
			sum2+=(A[j]-a)*(A[j]-a);
		}
		S[i]=sqrt(sum2/n);
	}
	for(i=0;i<k;i++)
	{
		printf("%.5f\n",S[i]);
	}
	return 0;
}
		