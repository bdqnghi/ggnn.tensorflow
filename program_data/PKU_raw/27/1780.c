void  gen(double a,double b,double c);
int main()
{
	double *a,*b,*c;
	int n,i;
	scanf("%d",&n);
	a=(double*)malloc(n*sizeof(double));
    b=(double*)malloc(n*sizeof(double));
    c=(double*)malloc(n*sizeof(double));
	for(i=0;i<=n-1;i++)
	{
		scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		gen(a[i],b[i],c[i]);
	}
	free(a);
	free(b);
	free(c);
	return 0;
}


void gen(double a,double b,double c)
{
	double d,x1,x2,i1;
    d=b*b-4*a*c;
		if(d>0) 
		{
			x1=(0-b+sqrt(d))/(2*a);
			x2=(0-b-sqrt(d))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else
		{
		    if (d==0) printf("x1=x2=%.5f\n",(0-b)/(2*a));
		    else
		    {
			    x1=(0-b)/(2*a);
			    i1=(sqrt(0-d))/(2*a);
			    printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,i1,x1,i1);
		    }
	    }
}