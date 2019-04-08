
int main()
{
  int a,b,c,d,n;
  scanf("%d",&n);
  if(n==10000)
  {puts("00001");}
  else if(n>=1000)
  {a=n/1000,b=n/100-a*10,c=n/10-a*100-b*10,d=n-1000*a-100*b-10*c;
  printf("%d%d%d%d",d,c,b,a);}
  else if(n>=100)
  {a=n/100,b=n/10-a*10,c=n-a*100-b*10;
  printf("%d%d%d",c,b,a);}
  else if(n>=10)
  {a=n/10,b=n-10*a;
  printf("%d%d",b,a);}
  else printf("%d",n);
}