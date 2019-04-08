int main()
{
    double a, b, c, d, p, q, s, x;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%lf", &p);
    q=2*3.1415926*p/720;
    x=(a+b+c-d)*(a+b-c+d)*(a-b+c+d)*(-a+b+c+d)/16-a*b*c*d*pow(cos(q),2);
    if(x<0){
            printf("Invalid input");
            }
    if(x>=0){
             s=sqrt(x);
             printf("%.4lf", s);
             }        
    return 0;         
    }
