double f5(double x)
{
       long long y;
       if(x>0)
       y=(x+0.000005)*100000;
       else y=(x-0.000005)*100000;
       x=(double)y/100000;
       x=x;
       return x;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    double a,b,c,delta,p,q,p1,q1,r;
    for(i=1;i<=n;i++)
    {
                     scanf("%lf %lf %lf",&a,&b,&c);
                     delta=b*b-4*a*c;
                     q=sqrt(fabs(delta));
                     q1=sqrt(fabs(delta))/(2*a);
                     p=-b;
                     p1=-b/(2*a);
                     r=2*a;
                     if(q>=0.000005&&delta>0)printf("x1=%.5lf;x2=%.5f\n",f5((p+q)/r),f5((p-q)/r));
                     else if(delta<0)printf("x1=%.5lf+%.5fi;x2=%.5lf-%.5lfi\n",f5(p1),q1,f5(p1),q1);
                     else printf("x1=x2=%.5f\n",f5(p1));
    }     
    
    return 0;
}