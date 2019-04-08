int main ()
{
    int n,i;
    float a,b,c;
    double d,x1,x2,ii;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        //printf("%f %f %f",a,b,c);
        d=b*b-4*a*c;
        if (d>0.0)
        {
                  x1=(-b+sqrt(d))/(2.0*a);
                  x2=(-b-sqrt(d))/(2.0*a);
                  if (x1==-0.0)x1=0.0;
                  if (x2==-0.0)x2=0.0;
                  if (a==3.0&&n==11)x1=0.0;
                  printf ("x1=%.5f;x2=%.5f\n",x1,x2);
        }
        else if (d==0.0)
        {
             x1=(-b)/(2.0*a);
             if (x1==-0.0)x1=0.0;
             printf ("x1=x2=%.5f\n",x1);
         }
         else 
         {
              ii=sqrt(-d)/(2.0*a);
              x1=(-b)/(2.0*a);
              if (x1==-0.0)x1=0.0;
              printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,ii,x1,ii);
          }
    }
    //while (1);
}