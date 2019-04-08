void asdf()
{
  double a,b,c,d,t,s,S;
  scanf("%lf",&a);
  scanf("%lf",&b);
  scanf("%lf",&c);
  scanf("%lf",&d);
  scanf("%lf",&t);
  t=t*3.1415926/360;
  s=(a+b+c+d)/2;
  if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(t)*cos(t))>=0)
  {
   S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(t)*cos(t));
   printf("%.4lf",S); 
  }
  else printf("Invalid input");
}

void main()
{
 void asdf();
 asdf();
}