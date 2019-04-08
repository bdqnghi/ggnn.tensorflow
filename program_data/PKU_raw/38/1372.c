int isrunnian(int year);
int main()
{
	int n,m,i,j;
	double b[1000],sum=0.0,s=0.0,a=0.0,s2=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		s2=0;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%lf",&b[j]);
		}
		for(j=0;j<m;j++)
		{
			sum+=b[j];
		}
		a=(double)sum/m;
		for(j=0;j<m;j++)
		{
			s2+=(b[j]-a)*(b[j]-a);
		}
		s=sqrt(s2/m);
		printf("%.5lf\n",s);
	}
	return 0;
}
