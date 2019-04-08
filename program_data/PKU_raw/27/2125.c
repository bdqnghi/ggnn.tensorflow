main()
{
      int n,i;
      double a,b,c,d,e,f,x1,x2;
      scanf("%d\n",&n);
      for(i=1;i<=n;i++)
      {
                       
      scanf("%lf %lf %lf",&a ,&b, &c);
         d=b*b-4*a*c;
         if (d>0)
         {
                 x1 = (0-b + sqrt(b*b-4*a*c))/(2*a) ;
                 x2 = (0-b - sqrt(b*b-4*a*c))/(2*a);
                 printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
         }
         if(d==0)
         {
                 x1 = (0-b)/(2*a) ;
                 printf("x1=x2=%.5f\n",x1);
         }
         if(d<0)
         {
                e=(0-b)/(2*a);
                f= sqrt(-d)/(2*a);
                printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",e,f,e,f);
         }
     }
}
