
int main()
{ 
   int i,n;
   double d,p,q,x1,x2,a,b,c;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   scanf("%lf %lf %lf",&a,&b,&c);
   p=b*b-4*a*c;
   q=(0-b)/(2*a);
   if (p==0)
   {
             x1=q;
             printf("x1=x2=%.5lf\n",x1);
   }
   else 
   {
        if (p>0)
        {
               x1=sqrt(p)/(2*a)+q;
               x2=-sqrt(p)/(2*a)+q;
               printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
        }
        else
        {
            d=sqrt(-p)/(2*a);
            printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",q,d,q,d);
        }
   }
 }
}