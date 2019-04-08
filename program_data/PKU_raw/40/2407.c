int main(){
double   a,b,c,d;
double  al;
double s,s0;
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
scanf("%lf",&d);
s= (a+b+c+d)/2;
scanf("%lf",&al);
al=al/2;
al=3.1415926/180*al;
 
if (((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(al)*cos(al))<0) {
                            printf( "Invalid input");
                            }
                            else {
                                 s0= sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(al)*cos(al)); 
                                 printf("%.4lf",s0);
                                 }

return 0;
}
