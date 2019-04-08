int main()
{
 double a,b,c,x1,x2,x3,decision;
 int n,i,j;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 { scanf("%lf%lf%lf",&a,&b,&c);
   decision=b*b-4*a*c;
   if (decision==0)
	   printf("x1=x2=%.5lf\n",(-1)*b/(2*a));
   if (decision>0)
   {
   x1 = ((-1)*b + sqrt(b*b-4*a*c))/(2*a); 
   x2 = ((-1)*b - sqrt(b*b-4*a*c))/(2*a); 
   printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
   }
   if (decision<0)
   {x1=(-1)*b/(2*a);
    x3=sqrt((-1)*decision)/(2*a);
	if ((x1<0.001) &&((-1)*x1<0.001))
		printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",x3,x3);
	else
     printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x3,x1,x3);
   }
 }
}