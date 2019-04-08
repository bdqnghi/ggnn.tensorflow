double s(double a,double b,double c,double d,double q);
void main()
{
	double a,b,c,d,q,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&q);
	S=s(a,b,c,d,q);
	if (S==-1) printf("Invalid input");
	else printf("%.4f",S);
}
double s(double a,double b,double c,double d,double q)
{
   double m,angle,r,n;
   angle=q/360*3.1415926;
   m=(a+b+c+d)/2;
   n=(m-a)*(m-b)*(m-c)*(m-d)-a*b*c*d*cos(angle)*cos(angle);
   if(n<0)  r=-1;
   else {r=sqrt(n);}
   return r;
}
