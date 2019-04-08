double s(double a, double b, double c, double d)
{
 double sf;
 sf=(a+b+c+d)/2;
 return sf;
}

double US(double a, double b, double c, double d, double alpha)
{
 double SF;
 SF=(s(a, b, c, d)-a)*(s(a, b, c, d)-b)*(s(a, b, c, d)-c)*(s(a, b, c, d)-d)-a*b*c*d*cos(alpha)*cos(alpha); 
 return SF;
}

int main()
{
double a, b, c, d;
double alpha, jiao;
scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &jiao);
alpha=(jiao/2)/180*PI;
double final;
if(alpha<0) printf("Invalid input");
if(US(a, b, c, d, alpha)<0) printf("Invalid input");
else
    {
     final=sqrt(US(a, b, c, d, alpha));
     printf("%.4lf", final);
    }
return 0;
}