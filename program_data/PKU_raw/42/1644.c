int main()
{
 int d=0,n,a[100000],i,b;
 scanf("%d",&n);
 for (i=0;i<n;i++)
 scanf("%d",&a[i]);
 scanf("%d",&b);
 for (i=0;i<n;i++)
 {
  
  if ( a[i]!=b&&d==0 )
  {
  printf("%d",a[i]);
  a[i]=b;
  d=1;
  }
  if ( a[i]!=b )
  printf(" %d",a[i]);
 }
 
} 
