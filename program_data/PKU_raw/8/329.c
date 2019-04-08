int arr(int a[],int x,int b[],int y)
{
  int i;
  for(i=0;i<x;i++)
   scanf("%d",&a[i]);
  for(i=0;i<y;i++)
   scanf("%d",&b[i]);
   return 0;
}
int arr1(int a[],int x,int b[],int y)
{
  int i,j,tmp;
  for(i=0;i<x-1;i++)
  for(j=i+1;j<x;j++)
  if(a[i]>a[j]) 
  {
    tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
  }
  for(i=0;i<y-1;i++)
  for(j=i+1;j<y;j++)
  if(b[i]>b[j]) 
  {
    tmp=b[i];
    b[i]=b[j];
    b[j]=tmp;
  }
  return 0;
}
int arr2(int a[],int x,int b[],int y,int c[])
{
   int i,j;
   for(i=0;i<x;i++)
   c[i]=a[i];
   for(;i<x+y;i++)
   c[i]=b[i-x];
   return 0;
}
int arr3(int c[],int t)
{
    int i;
    for(i=0;i<t;i++)
    {
      printf("%d",c[i]);
      if(i<t-1) printf(" ");
      }
     return 0;
}
  int main()
{
      int x,y;
      int a[100],b[100],c[200];
      scanf("%d%d",&x,&y);
      arr(a,x,b,y);
      arr1(a,x,b,y);
      arr2(a,x,b,y,c);
      arr3(c,x+y);
      return 0;
}
    
    
  
