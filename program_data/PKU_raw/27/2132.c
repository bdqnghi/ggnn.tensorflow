


int main()
{
	int n,m;
	double a,b,c;
	double x1,x2,q,h;
	scanf("%d",&n);
	for(m=1;m<=n;m++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		if(b*b-4*a*c>=0)
		{
		x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
        x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
		if(x1==x2)
            printf("x1=x2=%.5lf\n",x1,x2);
	    else
            printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		}
		if(b*b-4*a*c<0)
		{
			x1 = (-b + sqrt(-b*b+4*a*c))/(2*a); 
            x2 = (-b - sqrt(-b*b+4*a*c))/(2*a);
			h=-b/(2*a);
			q= sqrt(-b*b+4*a*c)/(2*a);
			

         if(x1==x2)
            printf("x1=x2=%.5lf+%.5lfi\n",h,q);
	    else
            printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",h,q,h,q);
		}
	}
	return 0;
}
