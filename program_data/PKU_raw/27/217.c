int main()
{
    int n,i;
    scanf("%d",&n);
    double a,b,c,disc,x1,x2,realpart,imagpart;
    for(i=1;i<=n;i++)
    {
    scanf("%lf %lf %lf",&a,&b,&c);
    disc=b*b-4*a*c;
    if(fabs(disc)<=1e-6)
      {
              x1=-b/(2*a);
              x2=-b/(2*a);
              printf("x1=x2=%7.5f\n",x1); 
      }
    else
    if(disc>1e-6)
    {
               x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
               x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
               printf("x1=%7.5f;x2=%7.5f\n",x1,x2);
    }
    else
    {
        realpart=-b/(2*a);
        imagpart=sqrt(-disc)/(2*a);
        if(realpart==0)
        printf("x1=0.00000+%7.5fi;x2=0.00000-%7.5fi\n",imagpart,imagpart);
        else
        printf("x1=%7.5f+%7.5fi;x2=%7.5f-%7.5fi\n",realpart,imagpart,realpart,imagpart);
    }
    }
    return 0;
}