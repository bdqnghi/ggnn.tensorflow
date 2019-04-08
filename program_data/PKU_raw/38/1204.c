
int main()
{
	int n,m[101],i,j;
	double x[1001],s[101],a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		double b=0,sum=0;
		scanf("%d",&m[i]);
		for(j=0;j<m[i];j++)
		{
			scanf("%lf",&x[j]);
			sum=sum+x[j];
		}
		a=sum/m[i];
		for(j=0;j<m[i];j++)
		{
			b=b+(x[j]-a)*(x[j]-a);
		}
		s[i]=sqrt(b/m[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%.5lf\n",s[i]);
	}
	return 0;
}

