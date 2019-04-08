double PI=3.1415926;
double f(double a,double b,double c,double d,double alpha)
{
 double s=(a+b+c+d)/2;
double tmp=((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(alpha*PI/360),2));
if (tmp<0)
return -1;
else 
return sqrt(tmp);
}
int main()
{
 double a,b,c,d,alpha;
 scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&alpha);
if (f(a,b,c,d,alpha)<0)
printf("Invalid input");
else
printf("%.4lf",f(a,b,c,d,alpha));
}