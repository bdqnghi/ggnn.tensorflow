void main()
{
  int n,a[20000],b[20000],i,j,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
    {
      b[i]=a[i];
    }
  for(i=0;i<n;i++)
    { 
      for(j=i+1;j<n;j++)
        {
          if(b[j]==a[i])
            {
              b[j]=0;
            }
        }
    }
  printf("%d",b[0]);
  for(i=1;i<n;i++)
    if(b[i]!=0)printf(" %d",b[i]);
}