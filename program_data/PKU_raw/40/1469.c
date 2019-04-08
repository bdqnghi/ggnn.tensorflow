int main()
{
    double a,b,c,d,x,s,y,S;
    scanf("%lf\n",&a);
    scanf("%lf\n",&b);
    scanf("%lf\n",&c);
    scanf("%lf\n",&d);
    scanf("%lf\n",&x);
    s=(a+b+c+d)/2;
    y=(x/360)*PI;
    if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(y),2)>=0){
      S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(y),2));
      printf("%.4lf",S);
      }
    else{
      printf("Invalid input");
      }
    return 0;
}