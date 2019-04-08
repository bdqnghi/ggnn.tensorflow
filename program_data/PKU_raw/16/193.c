int main()
{
  int a[10];
  int n,i,j;
  scanf("%d",&n);
  if (n==0) {printf("0\n");return 0;}
  for(i=1;n>0;i++)
   {
    a[i]=n%10;
    n=n/10;
   }
   for(j=1;j<=i-1;j++)
   printf("%d",a[j]);
//   scanf("%d",&n);
   return 0;
}
  