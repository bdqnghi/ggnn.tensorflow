int main()
{
	int n,i,j,k;
	double a=0,b=0,m=0,p=0,x[100];
	scanf("%d",&k);
	for (i=0;i<k;i++)
	{    
		scanf("%d",&n);
		for (j=0;j<n;j++)
		{
			scanf("%lf",&x[j]);
		}
		for (j=0;j<n;j++)
		{
			a=a+x[j];
		}
		m=1.00000000000*a/n;
		for (j=0;j<n;j++)
		{
			b=b+(x[j]-m)*(x[j]-m);
		}
		p=sqrt(b/n);
		a=0;b=0;
		printf("%.5lf\n",p);
	}
	return 0;
}