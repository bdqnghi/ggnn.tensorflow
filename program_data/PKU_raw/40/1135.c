int main()
{
    double a,b,c,d,x,s,S;
    scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&x);
    x=3.1415926*x/180/2;
    s=(a+b+c+d)/2; 
    if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x)*cos(x)<0)
    printf("Invalid input");
    else
    printf("%.4lf",sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x)*cos(x)));
    return 0;
}




