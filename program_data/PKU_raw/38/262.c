

int main()
{
	int i,j,n,b;
	double a[1000];
	double s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ double c=0,p=0;
		scanf("%d",&b);
		for(j=0;j<b;j++)
		{
			scanf("%lf",&a[j]);
		}
		for(j=0;j<b;j++)
		{
			c=c+a[j];
			
		}c=c/b;
		for(j=0;j<b;j++)
		{
			p=p+(a[j]-c)*(a[j]-c);
				
		}
		s=sqrt(p/b);
			printf("%.5lf\n",s);
	}
	return 0;
}

