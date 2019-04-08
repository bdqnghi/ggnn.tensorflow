
int main()
{
	int k,n,i,j;
	double x[101],s,p,f,d[101];
	
	scanf("%d",&k);
	
	for (i=1;i<=k;i++)
	{
		scanf("%d",&n);s=0;
		
		for (j=1;j<=n;j++)
		{	
			scanf("%lf",&x[j]);
			s=s+x[j];
		}
		
		p=s/n;f=0;
		for (j=1;j<=n;j++)
			f=f+(x[j]-p)*(x[j]-p);
		f=(double)f/n;
		f=sqrt(f);
		d[i]=f;
	}
	
	for (i=1;i<=k;i++)
		printf("%.5lf\n",d[i]);
	


}

