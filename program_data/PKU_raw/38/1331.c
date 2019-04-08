

int main(int argc, char* argv[])
{
	int n,m,i,j;
	double x[100],s,a,sum;

	scanf("%d",&n);

	for(j=0;j<n;j++)
	{
		s=0;
		sum=0;
		scanf("%d",&m);
		for(i=0;i<m;i++)
			scanf("%lf",&x[i]);
		for(i=0;i<m;i++)
			sum+=x[i];
		a=sum/m;

		for(i=0;i<m;i++)
		{
			s+=(x[i]-a)*(x[i]-a);
		}
		s=s/m;
		s=sqrt(s);
		printf("%.5lf\n",s);
		
	}

	return 0;
}