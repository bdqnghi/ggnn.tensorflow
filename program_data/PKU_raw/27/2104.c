int main()
{
    int num;
    double *d,*e,*f,x1,x2,x3,x4,a,b,c;
    scanf("%d",&num);
    d=(double *)malloc(num*sizeof(double));
    e=(double *)malloc(num*sizeof(double));
    f=(double *)malloc(num*sizeof(double));
    int i;
    for(i=0;i<num;i++)
    {
        scanf("%lf %lf %lf",d+i,e+i,f+i);
    }
    for(i=0;i<num;i++)
    {
        a=d[i];
        b=e[i];
        c=f[i];
        if(b*b-4*a*c>0)
        {
            x1 = (-b + sqrt(b*b-4*a*c))/(2*a)+0;
            x2 = (-b - sqrt(b*b-4*a*c))/(2*a)+0;
            printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
        }
        if(b*b-4*a*c==0)
        {
            x1 = (-b)/(2*a)+0;
            printf("x1=x2=%.5lf\n",x1);
        }
        if(b*b-4*a*c<0)
        {
            x1 = (-b)/(2*a)+0;
            x2 = (-b)/(2*a)+0;
            x3=sqrt(-b*b+4*a*c)/(2*a);
            x4=sqrt(-b*b+4*a*c)/(2*a);
            printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,x3,x2,x4);
        }
    }
    return 0;
}