void main()
{
  int f(int x,int y);
  int g(int y);
  int a[200];
  int k=0,t,m,n,p1,p2,p3,i;
  scanf("%d %d",&m,&n);
  for(t=m;t<=n;t++)
  { 
    p3=sqrt(t);
    p1=f(t,p3);
    p2=g(t);
    if(p1==1&&p2==1)
    {
      a[k]=t;
      k++;
     }
   }
   if(k==0)
   printf("no");
   else if(k>0)
  {
   for(i=0;i<k;i++)
  {
     if(i==k-1)
     printf("%d",a[i]);
    else printf("%d,",a[i]);
  }
   }
  
}
  int f(int x,int y)
{
  int a=0,i;
  
  for(i=2;i<=y;i++)
  if(x%i==0)
  break;
  if(i>=y+1)
  a=1;
  return(a);
}
  int g(int y)
 {
   int b,i,j,k=0,e,f=0;
   j=y;
   while(y>=10)
   {
     y=y/10;
     k++;
    }
    y=j;
   for(i=0;i<=k;i++)
   {
     e=y%10;
     y=y/10;
     f=f*10+e;
   }
   if(f==j)
   b=1;
  else b=0;
  return(b);
}