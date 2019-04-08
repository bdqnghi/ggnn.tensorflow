void main()
{
  int n,m,i,a[101],b[101];
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      if(i+m<n) b[i+m]=a[i];
      if(i+m>=n) b[i+m-n]=a[i];
    }
  for(i=0;i<n-1;i++)
   {printf("%d ",b[i]);}
  if(i==n-1) printf("%d",b[i]);
  
}