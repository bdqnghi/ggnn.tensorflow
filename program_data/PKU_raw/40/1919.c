double Area(double a,double b,double c,double d,double s,double y);
int main()
{
     double a,b,c,d,x,y,s,S;
     scanf("%lf",&a);
     scanf("%lf",&b);
     scanf("%lf",&c);
     scanf("%lf",&d);
     scanf("%lf",&x);
     s=(a+b+c+d)/2;
     y=PI*(x/2)/180;
     if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(y)*cos(y))<0){
                                 printf("Invalid input\n");
                                 }else{
                                     S=Area(a,b,c,d,s,y);
                                     printf("%.4lf\n",S);
                                     }
     return 0;
}
double Area(double a,double b,double c,double d,double s,double y){
     double S;
     S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(y)*cos(y));
     return S;
}

