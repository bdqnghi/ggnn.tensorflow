int main()
{
    double a,b,c,d,i,S,A;
    scanf("%lf\n%lf\n%lf\n%lf\n%lf\n",&a,&b,&c,&d,&i);
    A = (1.0/2*(a+b+c+d)-a)*(1.0/2*(a+b+c+d)-b)*(1.0/2*(a+b+c+d)-c)*(1.0/2*(a+b+c+d)-d) - a*b*c*d*(cos(PI*i/360))*(cos(PI*i/360));
    if(A>0)
    {
        S = sqrt((1.0/2*(a+b+c+d)-a)*(1.0/2*(a+b+c+d)-b)*(1.0/2*(a+b+c+d)-c)*(1.0/2*(a+b+c+d)-d) - a*b*c*d*(cos(PI*i/360))*(cos(PI*i/360)));
        printf("%.4lf",S);
    }
    if(A<0)
    {
        printf("Invalid input");
    }
        return 0;
}
