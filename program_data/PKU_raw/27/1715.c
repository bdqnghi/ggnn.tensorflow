int main()
{
 double a,b,c,p,p1,x1,x2,y1,z;
 int n,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%lf%lf%lf",&a,&b,&c);
  p=b*b-4*a*c;
  if(p>0)
  {
   x1=(-b+sqrt(p))/(2*a);
   x2=(-b-sqrt(p))/(2*a);
   printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
  }
  else if(p==0)
  {
   x1=(-b)/(2*a);
   x2=(-b)/(2*a);
   printf("x1=x2=%.5lf\n",x1);
  }
  else
  {
   p1=-p;
   y1=-b/(2*a);
   z=sqrt(p1)/(2*a);
   printf("x1=%.5lf+%.5lfi;",y1,z);
   printf("x2=%.5lf-%.5lfi\n",y1,z);
  }
 }
 return 0;
}
 