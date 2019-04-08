int main()
{
 int n,i=1;
 int a,b=0,c=0;
 scanf("%d",&n);
 while(i<=n)
 {
  scanf("%d",&a);
  if(a>b)
   c=b,b=a;
  else
   if(a>c)
    c=a;
  i++;
 }
 printf("%d\n%d",b,c);
}