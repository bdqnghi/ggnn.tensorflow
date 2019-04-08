
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
			p=(-b)/(2*a);
			printf ("x1=x2=%.5lf\n",p);
		}
		if (m>0)
		{
			p=(-b + sqrt(b*b-4*a*c))/(2*a);
			q=(-b - sqrt(b*b-4*a*c))/(2*a);
	        printf ("x1=%.5lf;x2=%.5lf\n",p,q);
		}
		if (m<0)
		{
            p=(-b)/(2*a) ;
			q= (sqrt(-b*b+4*a*c)/(2*a));
	        printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
	}}

		return 0;
}

