void main()
{
 int i,j,n,a[100][1],cha[100],x,max1;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(j=0;j<1;j++)
   scanf("%d",&a[i][j]);
 }
 max1=a[0][0];
 for(i=0;i<n;i++)
 {
  for(j=0;j<1;j++)
  if(a[i][j]>max1) max1=a[i][j];
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<1;j++)
  cha[i]=max1-a[i][j];
 }
  x=cha[0];
 for(i=0;i<n;i++)
 {
  if(cha[i]<x&&cha[i]!=0) x=cha[i];
 }
 printf("%d\n%d",max1,max1-x);
}