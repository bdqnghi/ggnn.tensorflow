
int main()
{
float s,a,b,c,d;
double e,S,jf,g,PI;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
scanf("%f",&d);
scanf("%lf",&g);
s = (a+b+c+d)/2;
PI=3.1415926;
e=(g*1.0/2)/360*2*PI;
jf=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e)*cos(e);
if(jf<0){
	printf("Invalid input\n");}
else{
S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e)*cos(e)); 
printf("%.4lf\n",S);}
	return 0;
}
