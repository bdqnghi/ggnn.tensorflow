int main()
{
 int n,i,k=0,j,a[500];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=1;i<1000;i++,i++)
 {
  for(j=0;j<n;j++)
  if(a[j]==i) 
  {k++;
   if(k==1)
    printf("%d",i);
   else printf(",%d",i);
   }}
 
}