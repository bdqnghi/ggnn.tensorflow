int main()
{
int n,i;
double a,b,c,x1,x2,s,t;
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
	scanf("%lf%lf%lf\n",&a,&b,&c);
if(b*b-4*a*c==0)
{
x1=(-b+sqrt(b*b-4*a*c))/(2*a);
printf("x1=x2=%.5f\n",x1);
}
if(b*b-4*a*c>0)
{
x1=(-b+sqrt(b*b-4*a*c))/(2*a);
x2=(-b-sqrt(b*b-4*a*c))/(2*a);
printf("x1=%.5f;x2=%.5f\n",x1,x2);
}
if(b*b-4*a*c<0)
{
s=(sqrt(4*a*c-b*b))/(2*a);
t=((-1.0)*b)/(2*a);
if(t!=0)
{
printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",t,s,t,s);
}
if(t==0)
{
printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n",s,s);
}
}
}
}