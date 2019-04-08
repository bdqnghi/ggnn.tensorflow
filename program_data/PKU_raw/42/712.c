int main()
{int n,a[100000],k,i,j;
 scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  scanf("%d",&k);
   for(i=0;i<n;i++)
   if(a[i]==k) a[i]=65500;
    for(i=0;i<n;i++)
    if(a[i]!=65500)
   {printf("%d",a[i]);break;}
    for(j=i+1;j<n;j++)
    if(a[j]!=65500)
    printf(" %d",a[j]);
   return 0;
}