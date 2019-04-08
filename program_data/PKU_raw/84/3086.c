int main()
{
  int a=0,b=0,c,d,n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
{ scanf("%d",&d);
if (a<d)
 {
  c=a;
  a=d;
  d=c;}
  if(a<b)
  {c=a;
  a=b;
  b=c;}
  if(b<d)
  {c=b;
  b=d;
  d=c;
 }
}
printf("%d\n%d\n",a,b);
return 0;
}
