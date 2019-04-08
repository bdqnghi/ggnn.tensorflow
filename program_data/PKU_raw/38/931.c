int main()
{
	int k;
	scanf("%d",&k);
	int n[1000];
	double x[1000][1000];
	int i,j;
	for(i=0;i<k;i++)
	{
		scanf("%d",&(n[i]));
		for(j=0;j<n[i];j++)
		{
			scanf("%lf",&(x[i][j]));
		}
	}
	double s[1000];
	double a,b;
	for(i=0;i<k;i++)
	{ a=0;b=0;
		for(j=0;j<n[i];j++)
		{a=a+x[i][j];}
        for(j=0;j<n[i];j++)
		{b=b+(x[i][j]-a/n[i])*(x[i][j]-a/n[i]);}
		s[i]=sqrt(b/n[i]);
		printf("%.5lf\n",s[i]);
	}
	return 0;
}
