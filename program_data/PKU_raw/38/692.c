int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m,j;
		double x[1001]={0},a=0,s=0;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%lf",&x[j]);
			a=a+x[j];
		}
		a=a/m;
		for(j=0;j<m;j++)
		{
			s=s+(x[j]-a)*(x[j]-a);
		}
		s=sqrt(s/m);
		printf("%.5f\n",s);
	}
    return 0;
}
