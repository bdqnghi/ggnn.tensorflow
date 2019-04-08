
int main(int argc, char* argv[])
{
	
	double a,b,c;
	int n;
	double x1,x2,m,p,q;
	int i=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{	scanf ("%lf%lf%lf",&a,&b,&c);
        
		m=b*b-4*a*c;
		if (m==0)
		{
			x1=(-b)/(2*a);
			x2=(-b)/(2*a);
			printf ("x1=x2=%.5lf\n",x1);
		}
		if (m>0)
		{
			x1=(-b + sqrt(b*b-4*a*c))/(2*a);
			x2=(-b - sqrt(b*b-4*a*c))/(2*a);
	        printf ("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		if (m<0)
		{
            p=(-b)/(2*a) ;
			q= (sqrt(-b*b+4*a*c)/(2*a));
	        printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
		}
	}

		return 0;
}
