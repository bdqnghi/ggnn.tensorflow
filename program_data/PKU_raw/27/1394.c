int main()
{

double a,b,c,x1,x2,m,y;int n,i;
scanf("%d",&n);
for (i=1;i<=n;i++)
{
scanf("%lf%lf%lf",&a,&b,&c);
if (b*b-4*a*c>0) 
{
x1=(-b+sqrt(b*b-4*a*c))/(2*a);
x2=(-b-sqrt(b*b-4*a*c))/(2*a);
printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
}
if (b*b-4*a*c==0) 
{
x1=-b/(2*a);
printf("x1=x2=%.5lf\n",x1);
}
if (b*b-4*a*c<0) 
{
m=-b/(2*a);
y=sqrt(4*a*c-b*b)/(2*a);
printf("x1=%.5lf+%.5lfi;",m,y);
printf("x2=%.5lf-%.5lfi\n",m,y);
}
}

return 0;
}