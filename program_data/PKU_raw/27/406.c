int main()
{
    int n,j;
    double a,b,c;
    double x1,x2;
    double sb,xb;
    scanf("%d",&n);
    for (j=0;j<n;j++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        if ((b*b-4.0*a*c)>0)
        {
            x1=(-b+sqrt(b*b-4.0*a*c))/(2.0*a);
            x2=(-b-sqrt(b*b-4.0*a*c))/(2.0*a);
            printf("x1=%.5lf;x2=%.5lf\n",x1+1e-6,x2+1e-6);
            }
        else if (fabs(b*b-4.0*a*c)<1e-8)
        {
            x1=-b/(2.0*a);
            printf("x1=x2=%.5lf\n",x1+1e-6);
            }
        else
        {
            sb=-b/(2.0*a);
            xb=sqrt(4.0*a*c-b*b)/(2.0*a);
            if (fabs(sb)<1e-8) sb=0;
            if (fabs(xb)<1e-8) xb=0;
            printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",sb,xb,sb,xb);
            }
        }
    return(0);
}