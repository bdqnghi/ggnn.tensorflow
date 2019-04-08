int main()
{
double a,b,c,x1,x2,d;
int n;
scanf("%d",&n);
int i;
for(i=0;i<n;i++)
{
scanf("%lf%lf%lf",&a,&b,&c);
d=b*b-4.0*a*c;
if(d>0)
{
x1=(-b+sqrt(d))/(2.0*a);
x2=(-b-sqrt(d))/(2.0*a);
printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
}
else if(d==0)
{
    printf("x1=x2=%.5lf\n",-b/(2.0*a));
}
else
{
double p=sqrt(-d)/(2.0*a);
if(b/(2*a)!=0)
printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-b/(2.0*a),p,-b/(2.0*a),p);
else
printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",b/(2.0*a),p,b/(2.0*a),p);}
}
return 0;
}




