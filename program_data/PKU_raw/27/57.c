void main()
{
 int i=1,n;
 double  x1,x2,m,t,a,b,c;
 scanf("%d\n",&n);
 while(i<=n)
 {
 scanf("%lf%lf%lf\n",&a,&b,&c);
       if(b*b==a*c*4)
	   {  
		   x1=(-b)/(2*a);
		   printf("x1=x2=%.5lf\n",x1);
	   } 
	   else
	   {
	       if(b*b>4*a*c)
		   {

			   x1=(0-b + sqrt(b*b-4*a*c))/(2*a) ;
			   x2=(0-b - sqrt(b*b-4*a*c))/(2*a);
				   printf("x1=%.5lf;",x1);
			       printf("x2=%.5lf\n",x2);
		   }
		   else
		   {
		      m=sqrt(0-b*b+4*a*c)/(2*a);
			 
			  t=-b/(2*a);
			  if(t==0)
			  {
				  t=-t;
			  printf("x1=%.5lf+%.5lfi;",t,m);
			  printf("x2=%.5lf-%.5lfi\n",t,m);
			  }
			  else
			  {
			   printf("x1=%.5lf+%.5lfi;",t,m);
			  printf("x2=%.5lf-%.5lfi\n",t,m);
			  }

		   }
	   }
   i=i+1;
 }
 
}