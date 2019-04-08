int main()
{
 int a[10001],b[10001],i,j,n,z=0,x,y=0,ma,mb,c;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d%d",&a[i],&b[i]);
 }
 ma=a[0];
 mb=b[0];
 for(i=1;i<n;i++)
 {
  if(a[i]<ma)
   ma=a[i];
  if(b[i]>mb)
   mb=b[i];
 }
 c=mb-ma;
// printf("%d\n",c);
 
 for(x=ma;x<=mb;x++)
 {
  for(j=0;j<n;j++)
  {
  z=1;
   if(x+0.5<=b[j] && x+0.5>=a[j])
   break;
   else z=0;
  }
  y=y+z;
 }
// printf("%d\n",y);
 
 if(y==c)
  {
  printf("%d %d",ma,mb);
  }
 else
 {
  printf("no");
 } 
 
 scanf(" ") ;
 return 0;
}
