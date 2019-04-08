int main()
{
 int sz[500];
 int i;
 struct{
  int a;
  int s;
 }odd[250];
 int n;
 int a[250];
 int b=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&sz[i]);
 }
 for(i=0;i<250;i++)
 {
  odd[i].a =2*i+1;
  odd[i].s=0;
 }
for(i=0;i<n;i++)
 {
  if(sz[i]%2==1)
  {
   odd[(sz[i]-1)/2].s=1;
  }
 }
 for (i=0;i<250;i++)
 {
  if(odd[i].s==1)
  {
      a[b]=odd[i].a;
      b=b+1;

  }
 }
 for (i=0;i<b-1;i++)
 {
     printf("%d,",a[i]);
 }
 printf("%d",a[b-1]);
 return 0;
}
