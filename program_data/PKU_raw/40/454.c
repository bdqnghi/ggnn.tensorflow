
int main (int argc, char *argv[])
{
  double a,b,c,d,e;
  double s=0;
  double S=0;
  scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
  s=(a+b+c+d)*(1.0/2);
  S= sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(cos(e*3.1415926/360),2));
  if(0<=(s-a)*(s-b)*(s-c)*(s-d))
  { 
     printf("%.4lf\n",S);
  }
  else
  {
      printf("Invalid input");
  }
  return 0;
}