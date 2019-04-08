


void main()
{
   int n;
   scanf("%d",&n);
   double a[1000],b[1000],c[1000];
   int q;
   double x1,x2;
   for(q=0;q<n;q++)
   {
	scanf("%lf%lf%lf",&a[q],&b[q],&c[q]);
   }
   
	for(q=0;q<n;q++)
	{
		double d = b[q]*b[q]-4*a[q]*c[q];
		if(d>0)
		{
			x1=(-b[q] + sqrt(d))/(2*a[q]) ;
			x2=(-b[q] - sqrt(d))/(2*a[q]);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if(d==0)
		{
			x1=(-b[q] )/(2*a[q]) ;x2=(-b[q] )/(2*a[q]) ;
			printf("x1=x2=%.5f\n",x1);
		}
		else 
		{	
            printf("x1=%.5f+%.5fi;x2=%.5f%.5fi\n",-b[q]/(2*a[q]),sqrt(-d)/(2*a[q]),-b[q]/(2*a[q]),- sqrt(-d)/(2*a[q]));
		}
	}
}
