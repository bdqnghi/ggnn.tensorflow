int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    double e;
    scanf("%lf", &e);
    double area;
    double s;
    s=(a+b+c+d)/2;
    area=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(PI*e/180/2)*cos(PI*e/180/2);
    if(area<0)
    printf("Invalid input");
    else
    printf("%.4lf", sqrt(area));
    return 0;
}
