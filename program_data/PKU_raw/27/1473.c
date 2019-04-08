int main()
{
	int n;
	scanf("%d\n",&n);
	
	int i;
	i=1;
	do
	{ double a,b,c;
	scanf("%lf%lf%lf\n",&a,&b,&c);
	double x1,x2,disc,realpart,imagpart;
		disc=b*b-4*a*c;
	if(fabs(disc)<=1e-6)
	printf("x1=x2=%.5f\n",-b/(2*a));
	else if(disc>1e-6)
	{
		x1=(-b+sqrt(disc))/(2*a);
		x2=(-b-sqrt(disc))/(2*a);
		printf("x1=%.5f;x2=%.5f\n",x1,x2);
	}
	else
	{
	realpart=-b/(2*a);
	imagpart=sqrt(-disc)/(2*a);
    if(b==0) printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",b,imagpart,b,imagpart);
	else printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",realpart,imagpart,realpart,imagpart);
	}
		i++;
	}
	while(i<=n);
	
}
