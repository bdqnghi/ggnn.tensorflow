int main()
{
double a=0,b=0,c=0,d=0,q=0,s=0,e=0,t=0;
scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&q);
s=(a+b+c+d)/2;
t=q/2/180*PI;
e=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(t)*cos(t);
if (e>=0){
s = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(t)*cos(t));
printf("%.4lf",s) ;
}
else printf("Invalid input");
return 0;
}