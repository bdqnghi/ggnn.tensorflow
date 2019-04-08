double max(double *p1,double*p2,int n)
{
	int i,j;
	double c,max=0;
	for(i=2;i<=n;i++)
		for(j=1;j<i;j++)
		{
			if(max<(c=sqrt((*(p1+i)-*(p1+j))*(*(p1+i)-*(p1+j))+(*(p2+i)-*(p2+j))*(*(p2+i)-*(p2+j)))))
				max=c;
		}
	return max;
}
void main()
{
	int i,n;
	double *p1,*p2,x[100],y[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf%lf",&x[i],&y[i]);
	}
	p1=&x[0];
	p2=&y[0];
	printf("%.4lf",max(p1,p2,n));
}

