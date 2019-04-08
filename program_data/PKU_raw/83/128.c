double b(double x)
{
	if(x>=90&&x<=100)
	{
		return 4.0;
	}if(x>=85&&x<=89)
	{
		return 3.7;
	}if(x>=82&&x<=84)
	{
		return 3.3;
	}if(x>=78&&x<=81)
	{
		return 3.0;
	}if(x>=75&&x<=77)
	{
		return 2.7;
	}if(x>=72&&x<=74)
	{
		return 2.3;
	}if(x>=68&&x<=71)
	{
		return 2.0;
	}if(x>=64&&x<=67)
	{
		return 1.5;
	}if(x>=60&&x<=63)
	{
		return 1.0;
	}if(x<60&&x>=0)
	{
		return 0;
	}
}
int main()
{
	double *p,*q,GPA,sum=0,total=0,a;
	int	n,i;
	scanf("%d",&n);
	p=(double *)malloc(sizeof(double)*n);
	q=(double *)malloc(sizeof(double)*n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&p[i]);
		total+=p[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%lf",&q[i]);
	}
	for(i=0;i<n;i++)
	{
		a=b(q[i]);
		sum+=a*p[i];
	}
	GPA=sum/total;
	printf("%.2f",GPA);
	free(p);
	free(q);
	return 0;
}