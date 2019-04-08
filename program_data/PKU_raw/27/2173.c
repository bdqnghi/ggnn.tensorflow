main()
{
int n,i;
double a,b,c,x1,x2;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%lf %lf %lf",&a,&b,&c);
if ((b*b-4*a*c)>0)
{x1 = (-b + sqrt(b*b-4*a*c))/(2*a) ;
x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
printf("x1=%.5lf;x2=%.5lf\n",x1,x2);}
else if ((b*b-4*a*c)==0)
{x1=x2=(-b + sqrt(b*b-4*a*c))/(2*a); 
printf("x1=x2=%.5lf\n",x1);}
else if ((b*b-4*a*c)<0)
printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",0-b/(2*a),sqrt(4*a*c-b*b)/(2*a),0-b/(2*a),sqrt(4*a*c-b*b)/(2*a));



}
}
