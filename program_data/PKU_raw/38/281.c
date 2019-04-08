int main(int argc, char* argv[])
{
	int k,n,i,j;
	double a[150],b=0,c,e,f,g,S;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		
		scanf("%d",&n);
		b=0;
		f=0;
		for(j=1;j<=n;j++)
		{
			scanf("%lf",&a[j]);
			b=b+a[j];
		}
		c=b/n;
		for(j=1;j<=n;j++)
		{
			e=(a[j]-c)*(a[j]-c);
			f=f+e;
		}
		g=f/n;
		S=sqrt(g);
	    printf("%.5lf\n",S);

	}


	return 0;
}

