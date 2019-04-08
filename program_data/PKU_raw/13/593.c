void main()
{
  int a[20000],b[20000],i,j,k,n,x,sum;
  scanf("%d",&n);
  k=0;
  sum=0;
  scanf("%d",&a[0]);
  for(i=1;i<n;i++)
  {
    k=0;
    scanf("%d",&x);
    for(j=0;j<i;j++) if (x==a[j]) {k=1;break;}
    if (k==0) a[i-sum]=x;
    else sum++;
  }
  for(i=0;i<n-sum-1;i++) printf("%d ",a[i]);
  printf("%d",a[n-sum-1]);
}