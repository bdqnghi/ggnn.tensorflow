int main()
{
    double area(double a,double b,double c,double d,double alpha);
    double a,b,c,d,alpha;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&alpha);
    if ((alpha>0)&&(alpha<360)&&(area(a,b,c,d,alpha)>0)){
        printf("%.4f",area(a,b,c,d,alpha));
        }
    else printf("Invalid input");
    return 0;
}
double area(double a,double b,double c,double d,double alpha)
{
       double S,s;
       s=(a+b+c+d)/2;
       S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(alpha/360*PI)*cos(alpha/360*PI));
       return(S); 
}