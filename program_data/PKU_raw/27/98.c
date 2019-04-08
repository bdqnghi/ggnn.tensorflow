void main()
{
	int n,d;
 double a,b,c,p,x1,x2,o,q;
	scanf("%d",&n);
 for(d=0;d<n;d++)
 {
	 scanf("%lf %lf %lf",&a,&b,&c);
	 p=b*b-4*a*c;
	 o=sqrt(-p)/(2*a);
	 q=-b/(2*a);
	 if(p<-ESSP)
		 printf("x1=%.5lf+%.5lfi;x2=%.5lf%.5lfi\n",q,o,q,-o);
	 else if(p>ESSP)
	 {
		 x1=(-b+sqrt(p))/(2*a);
		 x2=(-b-sqrt(p))/(2*a);
		 printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	 }
	 else
	 {
		 x1=-b/(2*a);
		 printf("x1=x2=%.5lf\n",x1);
	 }
 }
}
