int main()
{
  int p,q;
  void y(int n,int m);
  scanf("%d%d",&q,&p);
  y(p,q);
  return 0;
}
void y(int n,int m)
{
  if(n==m)
  printf("%d",n);  
  else if(m>n)
  {
    if(m>=(2*n))
      y(m/2,n);
     else if(m<(2*n))
      y(m/2,n/2);
   } 
   else
      y(m,n);
 }
 