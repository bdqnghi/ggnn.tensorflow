int main()
{
 int m,n,k,i,a=0,b,c=0,d;
 scanf("%d %d",&n,&k);
 i=1;
 b=n-1;
 d=b;
 m=d;
 while(a==0)
 {
  while(i<=n)
  {
   if(m%(n-1)!=0)
    i=n+1;
   else
    c++,m=m*n/(n-1)+k,i++;
  }
  i=1;
  d=d+b;
  if(c==n)
   a=1;
  else
   m=d;
  c=0;
 }
 printf("%d",m);
}