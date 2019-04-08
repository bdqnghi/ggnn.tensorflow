void main()
{
  int n;
  int arr[103],brr[103];
  int i,j,k,max;
  scanf("%d\n",&n);
  for (i=1;i<=n;i++) scanf("%d",&arr[i]);
  for (i=1;i<=n;i++) brr[i]=0;
  max=0;
  for (i=n;i>=1;i--) 
  {
    k=0;
    for (j=n;j>i;j--)
    {if ((arr[j]<=arr[i])&&(brr[j]>k)) k=brr[j];}
    brr[i]=k+1;
    if (brr[i]>max) max=brr[i];
  }
  printf("%d\n",max);
}