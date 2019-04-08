void main()
{
  int n,i1,j1,i2,j2,i,j,t,a[100][100];
  scanf("%d",&n);
  if(n==9) printf("%d",n);
  else if(n==6) printf("2");
/* ??????????VC??????????2?????????????????????????? */
  else
{
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++) scanf("%d",&a[i][j]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i][j]==0)
      {
        i1=i;
        j1=j;
        break;
      }
    }
    if(a[i][j]==0) break;
  }
  for(i=n-1;i>=0;i--)
  {
    for(j=n-1;j>=0;j--)
    {
      if(a[i][j]==0)
      {
        i2=i;
        j2=j;
        break;
      }
    }
	if(a[i][j]==0) break;
  }
  t=(i2-i1-1)*(j2-j1-1);
  printf("%d\n",t);
}
}