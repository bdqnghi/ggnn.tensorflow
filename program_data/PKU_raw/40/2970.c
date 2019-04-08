double area(double a,double b,double c,double d,double arpha)
{
    double s,S,temp;
    s=(a+b+c+d)/2;
    arpha*=0.5*PI/180;
    temp=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(arpha)*cos(arpha);
    if (temp<0)
    return -1;
    else
    {
        S=sqrt(temp);
        return S;
    }
}
main()
{
    double a,b,c,d,arpha,S,temp;
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&arpha);
    temp=area(a,b,c,d,arpha);
    if (temp<0)
    printf("Invalid input");
    else
    {
        printf("%.4f",temp);
    }
}
