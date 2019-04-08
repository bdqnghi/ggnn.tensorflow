int main()
{
	int i,j,m,n;
	double a=2,b=1,x,fenshu=0;

	scanf("%d ",&m);
	double *p=(double *)malloc(sizeof(double)*m);


	for(j=0;;j++)
	{
		scanf(" %d",&n);
		for(i=1;;i++)
		{
			fenshu+=a/b;
			x=a+b;
			b=a;
			a=x;

			if(i==n) break;
		}
		p[j]=fenshu;
		fenshu=0;
		a=2;
		b=1;
		if(j==(m-1)) break;
	}
	

	for(j=0;j<m;j++)
	{
		printf("%.3lf\n",p[j]);
	}

	free(p);
	return 0;
	
}