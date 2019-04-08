int main()
{
  int m,n,i,j,k;
  scanf("%d %d",&m,&n);
  int a[m+n];
  scanf("%d",&a[n]);
  for(i=1;i<m;i++)
  scanf(" %d",&a[n+i]);
   for(i=0;i<n;i++)
  a[i]=a[m+i];
  printf("%d",a[0]);
   for(i=1;i<m;i++)
 printf(" %d",a[i]);
return 0;
}   