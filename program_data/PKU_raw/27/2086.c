int main()
{
	int x,n;
	double a,b,c,x1,x2,disc,p,q;
	double w[99][3];

	scanf("%d\n",&n);
	for(x=0;x<n;x++)
	{
		scanf("%lf %lf %lf\n",&a,&b,&c);
		w[x][0]=a;
		w[x][1]=b;
		w[x][2]=c;
	}
	for(x=0;x<n;x++)
	{
		a=w[x][0];
		b=w[x][1];
		c=w[x][2];
		disc=b*b-4*a*c;
		if(fabs(disc)<1e-6)
			printf("x1=x2=%.5f\n",-b/2/a);
		else
		    if(disc>1e-6)
			{
				x1=(-b+sqrt(disc))/2/a;
				x2=(-b-sqrt(disc))/2/a;
				printf("x1=%.5f;x2=%.5f\n",x1,x2);
			}
		    if(disc<-(1e-6))
			{
				p=-b/2/a;
				q=sqrt(-disc)/2/a;
				if(fabs(b)<1e-6) p=fabs(p);
                printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",p,q,p,q);
			}
	}
}