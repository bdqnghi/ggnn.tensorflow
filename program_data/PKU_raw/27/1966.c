int main()
{
   double a,b,c,x1,x2,del,m,l;
   int n,i;
   scanf("%d\n",&n);
	   for(i=1;i<=n;i++)
	   {
		   scanf("%lf %lf %lf",&a,&b,&c);
		   del=b*b-4*a*c;m=-b/(2*a);
		       if (del>1e-6) 
			   { 
				   l=sqrt(del)/(2*a);
				   x1=m+l;
				   x2=m-l;
				   printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
			   }
			   else if (fabs(del)<=1e-6) printf("x1=x2=%.5lf\n",m);
			   else 
			   {
				   l=sqrt(-del)/(2*a);
				   if (m!=0) printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m,l,m,l);
				   else printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",l,l);
			   }
			   

	   }
   return 0;

}

    