int main()
{
  int a[100],n,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      a[j]=-1;
    }
  }
  for(i=0;i<n;i++)
  {
    if(a[i]!=-1)
    printf("%d",a[i]);
    break;
  }
  i=i+1;
  for(;i<n;i++)
  {
    if(a[i]!=-1)
    printf(",%d",a[i]);
  }
  return 0;
}
