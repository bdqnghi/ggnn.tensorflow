int main()
{
	int n,i;
	double a,b,c,disc,x1,x2,realpart,imagpart;
	scanf("%d",&n);
	i=0;
	
	while(i<n)
	
	{
	 scanf("%lf %lf %lf",&a,&b,&c);
     if(fabs(a)<=1e-6)
		 printf("error\n",a);
     else 
	 { disc=b*b-4*a*c;
	   if(fabs(disc)<=1e-6) 
		   printf("x1=x2=%.5lf\n",-b/(2*a));
	   else
	   {
		   if(disc>1e-6)
		   {
			   x1 = (-b + sqrt(disc))/(2*a);
               x2 = (-b - sqrt(disc))/(2*a);
           printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
		   }
		   else
		   {
			   realpart=-b/(2*a);
			   imagpart=sqrt(-disc)/(2*a);
			   printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",realpart,imagpart,realpart,imagpart);
			   
		   }
	   }
	 }

      i++;


		   
    }
		 
	 
	
	
	return 0;
}