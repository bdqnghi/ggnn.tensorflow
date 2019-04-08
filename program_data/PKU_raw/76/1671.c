int main ()
{
    int n,i,j,a[max],b[max],e,f,c=0;
    scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d %d",&a[i],&b[i]);
  }
  for(j=1;j<=n;j++)
  {
      for(i=0;i<n-j;i++)
      {
          if(a[i]>=a[i+1])
          {
            e=a[i+1];
            a[i+1]=a[i];
            a[i]=e;
          }
      }
  }
  for(j=1;j<=n;j++)
  {
      for(i=0;i<n-j;i++)
      {
          if(b[i]>=b[i+1])
          {
              f=b[i+1];
              b[i+1]=b[i];
              b[i]=f;
          }
      }
  }
  for(i=0;i<n-1;i++)
  {
      if(a[i+1]<=b[i])
      {
          c++;
      }
  }
  if(c==n-1)
  {
      printf("%d %d\n",a[0],b[n-1]);
  }
  else
  {
      printf("no\n");
  }
  return 0;
}
