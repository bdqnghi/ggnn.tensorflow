int main()
{
 int n,i,j,s;
 scanf("%d",&n);
 printf("\n");
 int a[n];
 scanf("%d",&a[0]);
 for(i=1;i<n;i++) scanf(" %d",&a[i]);
 printf("%d",a[0]);
 for(i=1;i<n;i++)
 {
  s=0;
  for(j=0;j<i;j++)
  {
   if(a[i]==a[j]) {s=1;break;}
  }
  if(s==0) printf(",%d",a[i]);
 }
}