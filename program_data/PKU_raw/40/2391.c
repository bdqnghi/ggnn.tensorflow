int main()
{
  double a,b,c,d,x,s,y;
  scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&x);
  s=(a+b+c+d)/2;
  y=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(x*PI/360)*cos(x*PI/360));
   if((s-a)*(s-b)*(s-c)*(s-d)<a*b*c*d*cos(x*PI/360)*cos(x*PI/360))
  printf("Invalid input");
  else
   printf("%.4lf",y);
  return 0;
}

