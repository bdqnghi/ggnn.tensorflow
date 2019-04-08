int main()
{
  int n,i,j,m,t;
  int a[350];
  int avg=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    avg+=a[i];
    a[i]*=n;
  }
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
  if(avg-a[0]>a[n-1]-avg)
    m=avg-a[0];
  else
    m=a[n-1]-avg;
  for(i=t=0;i<n;i++)
    if(avg-a[i]==m || a[i]-avg==m)
    {
      if(t)
        printf(",");
      printf("%d",a[i]/n);
      t=1;
    }
  printf("\n");
  return 0;
}

