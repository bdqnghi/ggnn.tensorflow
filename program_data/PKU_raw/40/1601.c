void main()
{
 double s(double a,double b,double c,double d,double t);
 int i;
 double l[5];
 for(i=0;i<=4;i++)
  scanf("%lf",&l[i]);
 if(s(l[0],l[1],l[2],l[3],l[4])<0)
  printf("Invalid input");
 else 
  printf("%.4lf",sqrt(s(l[0],l[1],l[2],l[3],l[4])));
}
double s(double a,double b,double c,double d,double t)
{
 double x,m;
 t=t/360*3.1415926;
 m=(a+b+c+d)/2;
 x=(m-a)*(m-b)*(m-c)*(m-d)-a*b*c*d*cos(t)*cos(t);
 return(x);
}