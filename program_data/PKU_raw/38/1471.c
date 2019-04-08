
int main()
{
	int k,i;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		int n,j;
		double f[1000],a,z=0,c=0,s2=0,s;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lf",&f[j]);
			z=z+f[j];
			c=c+1;
		}
		a=z/c;
		for(j=0;j<n;j++)
		{
			s2=(f[j]-a)*(f[j]-a)+s2;
		}
		s=sqrt(s2/c);
		printf("%.5lf\n",s);
	}
	return 0;
}