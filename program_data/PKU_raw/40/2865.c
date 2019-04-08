
int main()
{
    double a,b,c,d,x,s,n;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
    
    s=(a+b+c+d)/2;
    n=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x*PI/360)*cos(x*PI/360);
    
    if(n<0){
        printf("Invalid input");   
    }
    else{
        printf("%.4lf",sqrt(n));
    }  
}