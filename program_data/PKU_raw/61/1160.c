int main()
{
 double a=1,b=1,c;
 int i,n,j,x;

 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  scanf("%d",&x);
  a=1;
  b=1;
  for(j=3;j<=x;j++)
  {   c = b;
   b = a+b;
   a = c;
  }
  printf("%.0lf\n",b);
 }
 return 0;
}