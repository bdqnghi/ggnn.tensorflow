int main()
{
	int n,i,j,k;
	double A[100],s[100],a;
	scanf("%d",&k);
	for (i=0;i<k;i++)
	{
		a=0;s[i]=0;
		scanf("%d",&n);
		for (j=0;j<n;j++)
		{
			scanf("%lf",&A[j]);
			a=a+A[j];
		}
		a=a/n;
		for (j=0;j<n;j++)
		{
			s[i]=(A[j]-a)*(A[j]-a)+s[i];
		}
		s[i]=sqrt(s[i]/n);
	}
	for(i=0;i<k;i++)
		printf("%.5f\n",s[i]);





	return 0;
}

