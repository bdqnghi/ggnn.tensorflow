
double a,b,c,x1,x2,d;
int n,i;

double test(double p)
{
    if((p-0<0.000000001)&&(0-p<0.000000001)) return 0;
    else return p;
}

void doit()
{
    scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c;
    d=test(d);
    if((d-0<0.000000001)&&(0-d<0.000000001))
    {
        x1=-b/(2*a);
        x1=test(x1);
        printf("x1=x2=%.5f\n",x1);
        return ;
    }
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x1=test(x1);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1=%.5f;x2=%.5f\n",x1,x2);
        return ;
    }
    if(d<0)
    {
        x1=-b/(2*a);
        x1=test(x1);
        x2=sqrt(-d)/(2*a);
        printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,x2,x1,x2);
        return ;
    }
}

int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        doit();
    return 0;
}
