double f(double a,double b,double c,double d,double jiaodu){
       double x,y,s;
       s=(a+b+c+d)/2;
       x=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(jiaodu*pi/360)*cos(jiaodu*pi/360);
       if(x<0){
         y=-1;
         }else{
            y=sqrt(x);
            }
       return y;
}
int main(){
    double a,b,c,d;
    double jiaodu;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&jiaodu);
    double square;
    square=f(a,b,c,d,jiaodu);
    if(square==-1){
      printf("Invalid input");
      }else{
         printf("%.4lf",square);
         }
    return 0;
}