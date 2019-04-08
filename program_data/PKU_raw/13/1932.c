int main()
{
  int a[10000],n,i,t,j,m;
  scanf("%d/n",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  printf("%d",a[0]);
  for (i=1;i<=n-1;i++)
    {
    m=0;                  
    for(j=0;j<=i-1;j++)
      if(a[i]==a[j]) m=m+1;
    if(m==0) printf(" %d",a[i]);
     }
    return 0;
}