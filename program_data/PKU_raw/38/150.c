void main()
{
	int n,i,m,j;
	double ave,dif,a[200],*p;
	p=a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ave=0;
		dif=0;
		scanf("%d",&m);
		scanf("%lf",p+1);
		for(j=2;j<=m;j++)
		{
			scanf(" %lf",p+j);
		}
		for(j=1;j<=m;j++)
		{
			ave+=*(p+j);
		}
		ave=ave*1.0/(m*1.0);
		for(j=1;j<=m;j++)
		{
			dif+=(*(p+j)-ave)*(*(p+j)-ave);
		}
		dif=dif*1.0/(m*1.0);
		dif=sqrt(dif);
		printf("%.5f\n",dif);
	}
}
