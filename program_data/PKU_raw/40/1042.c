int main(int argc, char* argv[])
{
	double a,b,c,d,x,s,S;
	scanf ("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&x);
   s=(a+b+c+d)/2;
   S=sqrt((s-a)*(s-b)*(s-c)*(s-d)
	   -a*b*c*d*cos(x*3.1415926/360)*cos(x*3.1415926/360));
   if((s-a)*(s-b)*(s-c)*(s-d)
	   -a*b*c*d*cos(x*3.1415926/360)*cos(x*3.1415926/360)<0)
   printf("Invalid input");
   else 
   printf("%.4lf",S);
  return 0;


}
