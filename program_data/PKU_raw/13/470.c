main()
{
  int n,i,j,a[100000],b[100000],k,sum=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]); 
  printf("%d",a[0]);
  for(i=1;i<n;i++)
  { 
    for(j=0;j<i;j++)
    {
      if(a[i]==a[j])
       break;
      else if(j==i-1)
        printf(" %d",a[i]);
    }
  }
}