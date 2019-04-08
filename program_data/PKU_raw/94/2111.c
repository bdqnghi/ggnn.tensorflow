int main()
{
  int a[10000],n,i,t,j,m;
  scanf("%d/n",&n);
  m=0;
  for(i=0;i<n;i++)
   {
   scanf("%d",&t);
   if (t%2==1) 
     {
      a[m]=t;
      m=m+1;
      }
   }
  for(j=0;j<m-1;j++)
   for(i=0;i<m-1;i++)
     if(a[i]>a[i+1])
     {t=a[i]; a[i]=a[i+1]; a[i+1]=t;}
  printf("%d",a[0]);
  for(i=1;i<m;i++)
    printf(",%d",a[i]);
    return 0;
}
