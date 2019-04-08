/*?????(x,y)????????????????*/

double compare(double x[],double y[],int n)
{
	int i,j;
	double m;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(sqrt((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]))>m)
				m=sqrt((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]));
		}
	}
	return m;
}

void main()
{
	int n,k;
	double b[10],a[10];
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%lf%lf",&a[k],&b[k]);
	}
	printf("%.4lf\n",compare(a,b,n));
}


