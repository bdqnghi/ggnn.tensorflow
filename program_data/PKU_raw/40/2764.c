int main(void)
{
    double a,b,c,d,af,s,S,k;
 
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&af);
    s=(a+b+c+d)/2.0;
    af=cos(af/2.0*3.1415926/180.0);
    k=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*af*af;
    if(k<0)
      printf("Invalid input\n");
    else
		S=sqrt(k),
      printf("%.4lf\n",S);
 return 0;
} 
