
void area(double a,double b,double c,double d,double r);

int main()
{
   double a[5],S;
   int i;

   for(i=0;i<5;i++)
   {
      scanf("%lf",&a[i]);
   }

   area(a[0],a[1],a[2],a[3],a[4]);
   
  return 0;
}

void area(double a,double b,double c,double d,double r)
{
   double s,t,S;

   s=(a+b+c+d)/2;
   t=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(r*PI/360)*cos(r*PI/360);

   if(t>=0)
   {
      S=sqrt(t);
      printf("%.4lf\n",S);
   }
   else
   {
      printf("Invalid input\n");
   }
}
