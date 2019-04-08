int main () {
double a, b, c, d, jiaodu, hudu, PI=3.1415926, mianji, s;
scanf( "%lf %lf %lf %lf %lf", &a, &b, &c, &d, &jiaodu);
hudu = jiaodu/180*PI;
s =(a+b+c+d)/2;
mianji= sqrt( (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(hudu/2)*cos(hudu/2) ); 
if ( (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(hudu) < 0 ) {
printf("Invalid input");}
else {printf("%.4lf", mianji);}
return 0 ;
}