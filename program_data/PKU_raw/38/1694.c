int main()
{
	double x[101],ave,s=0,S=0;
	int i,j,n,k;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		s=0;S=0;
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			if(j==1)
				scanf("%lf",&x[j]);
			else
				scanf(" %lf",&x[j]);
			s=s+x[j];
		}
		ave=s/n;
		for(j=1;j<=n;j++)
		{
			S=S+(x[j]-ave)*(x[j]-ave);
		}
		S=sqrt(S/n);
		printf("%.5lf\n",S);
	}
}