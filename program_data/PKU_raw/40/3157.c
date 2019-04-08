int main ()
{
  double a,b,c,d,s,e,m,n,f;
  double p=3.1415926;
  scanf("%lf",&a);
  scanf("%lf",&b);
  scanf("%lf",&c);
  scanf("%lf",&d);
  scanf("%lf",&e);
  e=e*p/360;
  s=(a+b+c+d)/2;
  m=(s-a)*(s-b)*(s-c)*(s-d);
  f=m-a*b*c*d*cos(e)*cos(e);
 
  if(f<0) 
  {
 printf("Invalid input");
  }
  else
  {  
    n=sqrt(f);
  printf("%.4lf",n);
  }
 return 0;
}