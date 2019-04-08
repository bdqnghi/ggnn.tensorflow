void main()
{
  int n,i,j,k,m,sum=0,a[100000];
  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&a[i]);
  scanf("%d",&j);
  m=a[n-1];
  a[n-1]+=(a[n-1]==j);
  for(i=0;i<n-sum;i++)
  {
   k=i;
   if(a[i]==j)
   {
    for(;i<n-sum-1;i++) a[i]=a[i+1];
    sum+=1;
    i=k-1;
   }
  }
  if(m==j)
  {
   for(i=0;i<n-sum-2;i++)printf("%d ",a[i]);
   printf("%d\n",a[n-sum-2]);
  }
  else
  {
   for(i=0;i<n-sum-1;i++)printf("%d ",a[i]);
   printf("%d\n",a[n-sum-1]);
  }
}
