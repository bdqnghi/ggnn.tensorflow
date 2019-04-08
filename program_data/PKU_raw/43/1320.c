int main()
{
 int m,n,i,j,x,y,p,q;
 scanf("%d",&m);
 n=m/2;
 i=3;
 while(i<=n)
 {
  x=sqrt(i);
  for(p=3;p<=x;p++)
  {
   if(i%p==0) break;
  }
  if(p>=x+1)
  {j=m-i;
    y=sqrt(j);
    for(q=3;q<=y;q++)
    {
     if(j%q==0) break;
     }
    if(q>=y+1)
    printf("\n%d %d\n",i,j);
   }
    i+=2;
   }
   return 0;
}