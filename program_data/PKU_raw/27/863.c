int main()
{
   int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
               
                double a,b,c;
   scanf("%lf %lf %lf",&a,&b,&c);
double x1,x2;
   if (b*b-4*a*c>0)
   {
   x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
   x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
   printf("x1=%.5f;x2=%.5f\n",x1,x2);
}
   if (b*b-4*a*c<0.00000001&&b*b-4*a*c>-0.00000001)
   {
   x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
   printf("x1=x2=%.5f\n",x1);
}
    if(b*b-4*a*c<-0.00000001)
    {
   double n,m;
   n=-b/(2*a);
   m=sqrt(4*a*c-b*b)/(2*a);
   if(fabs(n)<0.00001)
   n=0.00000;
      printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",n,m,n,m);
}
   i=i+1;}

   }
   