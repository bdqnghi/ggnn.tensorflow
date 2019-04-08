
int main ()
{
    double a,b,c,d,e,s,ss;
    cin>>a>>b>>c>>d>>e;
    s=(a+b+c+d)/2;
    ss=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*3.1415926/360)*cos(e*3.1415926/360);
    if (ss>=0)
    {printf("%.4f",sqrt(ss));
}
else printf("Invalid input");
    }