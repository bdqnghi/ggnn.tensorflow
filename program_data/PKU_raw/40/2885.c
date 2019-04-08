
int main()
{
    double S(double a,double b,double c,double d,double e);
    double a1,b1,c1,d1,e1,e2;
    scanf("%lf%lf%lf%lf%lf",&a1,&b1,&c1,&d1,&e1);
    e2=e1/360*PI;
    if(S(a1,b1,c1,d1,e2)==0){
                             printf("Invalid input\n");
                             }
    else{
         printf("%.4lf\n",S(a1,b1,c1,d1,e2));
         }
   
    return 0;
    }
double S(double a,double b,double c,double d,double e)
{
       double delta,s,S;
       s=(a+b+c+d)/2;
       delta=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e)*cos(e);
       if(delta<0){
                   S=0;
                   }
       else{
            S=sqrt(delta);
            }
       return S;
       }