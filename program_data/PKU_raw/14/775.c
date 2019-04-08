int main()
{
 struct {
  int ID;
  int ch,math;
  int sum;
 }a[100000];
 int n,m1,m2,m3,x,y,z;
 scanf("%d",&n);
 scanf("%d %d %d",&a[0].ID,&a[0].ch,&a[0].math);
 m1=a[0].ch+a[0].math;
 int i;
 for(i=0;i<n;i++)
 {
  scanf("%d %d %d",&a[i].ID,&a[i].ch,&a[i].math);
  a[i].sum=a[i].ch+a[i].math;
  if(a[i].sum>m1)
  {
   m1=a[i].sum;
   x=i;
  }
 }
 printf("%d %d\n",a[x].ID,m1);
 a[x].ch=a[x].math=a[x].sum=0;
 int j;
 scanf("%d %d %d",&a[0].ID,&a[0].ch,&a[0].math);
 m2=a[0].sum;
 for(j=0;j<n;j++)
 {
  scanf("%d %d %d",&a[j].ID,&a[j].ch,&a[j].math);
  a[j].sum=a[j].ch+a[j].math;
  if(a[j].sum>m2)
  {
   m2=a[j].sum;
   y=j;
  }
 }
 printf("%d %d\n",a[y].ID,m2);
 a[y].ch=a[y].math=a[y].sum=0;
 int k;
 scanf("%d %d %d",&a[0].ID,&a[0].ch,&a[0].math);
 m3=a[0].sum;
 for(k=0;k<n;k++)
 {
  scanf("%d %d %d",&a[k].ID,&a[k].ch,&a[k].math);
  a[k].sum=a[k].ch+a[k].math;
  if(a[k].sum>m3)
  {
   m3=a[k].sum;
   z=k;
  }
 }
 printf("%d %d\n",a[z].ID,m3);
 return 0;
}
 
  
 

  
