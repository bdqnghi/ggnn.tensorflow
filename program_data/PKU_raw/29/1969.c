int main()
{
	int i,j,m,n;
	double a[1000],b[1000],s=0;
	scanf("%d",&m);
	for(j=1;j<=m;j++)
	{
		s=0;
		scanf("%d",&n);
		a[0]=2;a[1]=3;
	    b[0]=1;b[1]=2;
		for(i=0;i<n;i++)
		{
			a[i+2]=a[i]+a[i+1];
			b[i+2]=b[i]+b[i+1];
		}
		for(i=0;i<n;i++)
		{
			s=s+a[i]/b[i];
		}
		printf("%.3lf\n",s);
	}
	return 0;
}
