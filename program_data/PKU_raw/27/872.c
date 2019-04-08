int main()
{
    int n,m;
    double x1,x2,p,q;
    scanf("%d",&n);
    for(m=0;m<n;m++)
{
   double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
   if(b*b-4*a*c>0)
      {
      x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
      x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
      printf("x1=%.5f;x2=%.5f\n",x1,x2);
      }   
    else
     { if (b*b-4*a*c==0)
      {
       x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
       printf("x1=x2=%.5f\n",x1);
      }
      else
     {
           p=(-b)/(2*a);
           q=(sqrt(-b*b+4*a*c))/(2*a);
           if(fabs(p)<0.00001)
           p=0.00000;
           printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",p,q,p,q);
      }
     }
     }
}
