int main()
{
    float a,b,c,d,aef,bt;
    float S,s,m,x;
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    scanf("%f\n",&c);
    scanf("%f\n",&d);
    scanf("%f\n",&aef);
    s=(a+b+c+d)/2;
    bt=aef/180*3.1415926/2;
    m= (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(bt)*cos(bt);
    if(m>0)
    {
        S=sqrt(m);
        printf("%.4f",S);
    }
    else printf("Invalid input");
    scanf("%f",&x);
    return 0;
}
     