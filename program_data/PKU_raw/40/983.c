int main(int argc, char* argv[])
{
double a,b,c,d,e,s,S,f;
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
scanf("%lf",&d);
scanf("%lf",&e);
s = (a+b+c+d)/2;
f=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d* cos (e/2*3.1415926/180) * cos(e/2*3.1415926/180);
if (f>0)
{
	S = sqrt(f); 
printf("%.4lf",S);
}
else
printf("Invalid input");
}
