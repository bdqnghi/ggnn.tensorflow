void main ()
{
int n,i;
double a,b,c,x1,x2,p=0.000001;
scanf("%d",&n);
for (i=0;i<n;i++)
{
    scanf("%lf %lf %lf",&a,&b,&c);
    if (b*b-4*a*c<-p)
    {
        x1=-b/(2*a);x2=sqrt(-b*b+4*a*c)/(2*a);
        if (x1>-p&&x1<p) x1=0;
        if (x2>-p&&x2<p) x2=0;
        printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,x2,x1,x2);
    }
    else
    {
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
        if (x1>-p&&x1<p) x1=0;
        if (x2>-p&&x2<p) x2=0;
        if (b*b-4*a*c<p&&b*b-4*a*c>-p)
        printf("x1=x2=%.5f\n",x1);
        else
        printf("x1=%.5f;x2=%.5f\n",x1,x2);
    }
}

}
