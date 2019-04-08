int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
       double a,b,c;
	   scanf("%lf %lf %lf",&a,&b,&c);
	   double x1,x2,i;
	   if(b*b-4*a*c>0)
	   {
	      x1 = (-b + sqrt(b*b-4*a*c))/(2.0*a); 
          x2 = (-b - sqrt(b*b-4*a*c))/(2.0*a);
		  printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	   }
	   else if(b*b-4*a*c==0)
	   {
           x1 = (-b + sqrt(b*b-4*a*c))/(2.0*a); 
           x2 = (-b - sqrt(b*b-4*a*c))/(2.0*a);
		   printf("x1=x2=%.5lf\n",x1,x2);
	   }
	   else  {
		         double m;
		         m= sqrt(-(b*b-4*a*c))/(2.0*a); 
                 x1=(-b)/(2.0*a);
				 printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,m,x1,m);
	   }
    }
	return 0;
}

