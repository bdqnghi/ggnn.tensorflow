double f(double a,double b,double c,double d,double A)
{double s,S,M;
  s=(a+b+c+d)/2;
  M=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(A*3.1415926/360)*cos(A*3.1415926/360);
  if(M<0) S=-1;
 else S=sqrt(M); 
  return(S);
}
void main()
{ 
	double f(double a,double b,double c,double d,double A);
	double a,b,c,d,A,x;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&A);
	x=f(a,b,c,d,A);
	if(x<0) printf("Invalid input");
	else printf("%.4lf",x);
}