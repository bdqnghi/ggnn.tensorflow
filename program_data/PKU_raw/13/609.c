 int main()
 {
  int n,i,j;
  scanf("%d",&n);
  int a[n];
  for (i=0;i<n;i++)
  scanf("%d",&a[i]);
  i=0;
  while (i<n)
  { for (j=i+1;j<n;j++)
   if (a[i]==a[j]) a[j]=0;
   i++;}
  printf("%d",a[0]);
  i=1;
  for (i=1;i<n;i++)
  if (a[i]!=0) printf(" %d",a[i]);
}