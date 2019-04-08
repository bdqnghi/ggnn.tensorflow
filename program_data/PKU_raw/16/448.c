int main ()
{
  int n,a,b,c,d,e,m;
  scanf("%d\n",&n);
  a=n/10000;
  b=(n-10000*a)/1000;
  c=(n-10000*a-1000*b)/100;
  d=(n-10000*a-1000*b-100*c)/10;
  e=n-10000*a-1000*b-100*c-10*d;
  if (n!=0 && n%10==0) printf("0");
  if (n!=0 && n%100==0) printf("0");
  if (a!=0)
      m=e*10000+d*1000+c*100+b*10+a;   
  else 
    if (b!=0)
      m=e*1000+d*100+c*10+b;
  else
    if (c!=0)
      m=e*100+d*10+c;
  else
    if (d!=0)
      m=e*10+d;
  else
    if (e!=0)
      m=e;
    else
      m=0;
  printf("%d\n",m);
  return 0;
}