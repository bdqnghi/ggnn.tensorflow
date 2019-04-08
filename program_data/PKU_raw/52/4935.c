int main()
{ int i,j,k,l,n,m,a[10000]={0};
  scanf("%d %d",&n,&m);
  for (i=m+1;i<=n;i++)
	  scanf("%d",&a[i]);
  for (i=1;i<=m;i++)
      scanf("%d",&a[i]);
  printf("%d",a[1]);
  for (i=2;i<=n;i++)
	  printf(" %d",a[i]);
  return 7;
}