void main()
{
  int a[301];
  int n,j,k,l,i,max,max1;
  scanf("%d",&a[0]);
  i=1;
  while(scanf(",%d",&a[i]))
  {
  i++;
  }
  n=i;
  max=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]>=max)   max=a[i];
  }
  k=0;
  for(i=0;i<n;i++)
  {
   if(a[i]!=max)     {k=1;break;}
  }
  if(k==0)   printf("No");
  else
  {
    max1=a[i];
    for(l=0;l<n;l++)
    {
      if(a[l]>=max1 && a[l]!=max)    max1=a[l];
    }
   printf("%d",max1);
  }
}
