int main()
{
    float a,b,c,d,e;
    float s;
    float m,n,p,q;
    float t;
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    s=a+b+c+d;
    s=s/2;
    m=s-a;
    n=s-b;
    p=s-c;
    q=s-d;
    t=m*n*p*q-a*b*c*d*(cos(e*PI/360.0))*(cos(e*PI/360.0));
    if (t<0)
    printf("Invalid input");
    else
    {
        t=sqrt(t);
        printf("%.4f",t);
    }
    return 0;
}
