double mianji (double a,double b,double c,double d,double q)
{
double s,p;
p=(a+b+c+d)/2;
p=(p-a)*(p-b)*(p-c)*(p-d);
if (p<0)
{
printf ("Invalid input");
}
else 
{
s=sqrt(p-a*b*c*d*(cos(q))*(cos(q)));

printf ("%.4lf",s);
 
}
return 0;


}
int main(int argc, char* argv[])
{
  double a,b,c,d,p;
  scanf ("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&p);
  p=p/360*3.1415926;
  mianji (a,b,c,d,p);

    
	return 0;
}


