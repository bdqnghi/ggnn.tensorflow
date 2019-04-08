main()
{
    int i,j,k;
    double a,b,c,d;
    double xs;
    double ds;
    double t;
    double p;
    double PI = 3.1415926;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&t);
    xs=(a+b+c+d)/2;
    p=((t/2)/180)*PI;
    if((xs-a)*(xs-b)*(xs-c)*(xs-d) - a*b*c*d*cos(p)*cos(p)>=0)
    {
        ds= sqrt((xs-a)*(xs-b)*(xs-c)*(xs-d) - a*b*c*d*cos(p)*cos(p));
        printf("%.4lf\n",ds);
    }
    else
    printf("Invalid input\n");
}
