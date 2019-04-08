int p1(int n)
{
  int i;
  for(i=2;i<n/2;i++)
   if(n%i==0) return 0;
  return 1;
}
int p2(int n)
{
  int a[10],m=-1;
  while(n>0)
   {
     a[++m]=n %10;
     n=n/10;
   }
  int i=0,j=m;
  while(i<=j)
   {
     if(a[i]!=a[j]) return 0;
     i++; j--;
   }
  return 1;
}
int main()
{ 
  int m,n;
  int i,f=0;
  scanf("%d%d",&m,&n);
  for(i=m;i<=n;i++)
     if( p1(i) && p2(i))
       {
         if(f==0) {printf("%d",i);f=1;}
         else printf(",%d",i); 
       }
  if(f==0) printf("no");
}