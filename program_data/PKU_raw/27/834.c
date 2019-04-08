int qj( double a,double b,double c)
{
    double x1,x2,e,f,g;
    double d;
    d=b*b-4*a*c;
    if (d>0)
       {  
       e=(-b + sqrt(d))/(2*a);
                    f=(-b -sqrt(d))/(2*a);
                    if(e==0)
                    e=0;
                   printf("x1=%.5f;x2=%.5f\n",e,f);
                   }
         else if (d==0)
                      {
                       e=(-b)/(2*a); 
                       if(e==0)
                    e=0;   
                       printf("x1=x2=%.5f\n",e);
                       }
          else
                       {
                       e=(-b)/(2*a);
                       f=sqrt(-d)/(2*a);
                       if(e==0)
                    e=0;
                       printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",e,f,e,f);
                       }
}
main()
{
    double a,b,c;
    int n;
    int i;
    i=0; 
    scanf("%d\n",&n);
   while(i<n)
    {
    scanf("%lf%lf%lf",&a,&b,&c);
    qj(a,b,c);
    i++;
     }
             }
