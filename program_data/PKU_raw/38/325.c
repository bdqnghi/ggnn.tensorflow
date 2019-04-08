
int main(int argc, char* argv[])
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		double x[1000],m=0,a,sum=0,s;
		int k,t;
		scanf("%d",&k);
		for(t=0;t<k;t++)
		{
			scanf("%lf",&x[t]);
			m=m+x[t];
		}
		a=m/k;
		for(t=0;t<k;t++)
		{
			sum=sum+(x[t]-a)*(x[t]-a);
		}
		s=sqrt(sum/(double)k);
		printf("%.5lf\n",s);
	}
	return 0;
}