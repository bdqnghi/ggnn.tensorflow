int main(int argc, char* argv[])
{
	int k,n,i,j;
	double x[N],s=0.0,sum=0,a[N];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
			sum+=x[j];
		}
		for(j=0;j<n;j++)
		{
			s+=(x[j]-sum/n)*(x[j]-sum/n);
		}
		a[i]=sqrt(s/n);
		s=0.0;sum=0.0;
	}
	for(i=0;i<k;i++)
		printf("%.5f\n",a[i]);

	return 0;
}
