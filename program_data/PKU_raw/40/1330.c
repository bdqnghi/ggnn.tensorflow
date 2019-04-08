int main()
{
double a,b,c,d,s,S,e;
double m,n;
scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&m);
n = 3.1415926*m/360;
s = (a+b+c+d)/2;
e = ((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(n)*cos(n)); 
if (e>=0)
{
S = sqrt(e);
printf("%.4lf",S);
}
else{
printf("Invalid input");
}
return 0;
}