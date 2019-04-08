int main()
{
double mianji(double X);
double a,b,c,d,alpha,s,S;
scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&alpha);
alpha=alpha*PI/360;
s=(a+b+c+d)/2;
S=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(alpha)*cos(alpha);
if(S<0){
        printf("Invalid input");
        } else{
               printf("%.4lf",mianji(S));
               }
return 0;
}

double mianji(double X){
       double S2;
       S2=sqrt(X);
       return (S2);
       }
