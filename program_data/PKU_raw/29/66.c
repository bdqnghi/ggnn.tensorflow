int main()
{
	int m,i=1,j;
	scanf("%d",&m);
	int a,b,c,d,y;
	double x;
	int q,sz[100];
	for(q=0;q<m;q++)
	{
		scanf("%d",&(sz[q]));
	}

		for(q=0;q<m;q++)
		{
			a=1;
			b=2;
			x=0.0;

		for(j=0;j<sz[q];j++)
		{
		
		c=a;
		d=b;
		x=x+1.0*b/a;
		y=b;
		b=a+y;
		a=y;
		}
		printf("%.3lf\n",x);
		
	
	}
	return 0;
}
