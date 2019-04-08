int main()
{
  int m,n,a[13]={0},b[13]={0},i1,i2,e,f,i3,c[13]={0},d[13]={0},i4=0;
  scanf("%d %d",&m,&n);
  a[0]=m;
  b[0]=n;
  for(i1=1;m>0;i1++)
  {
   a[i1]=m/2;
   m=m/2;
  }
  for(i2=1;n>0;i2++)
  {
   b[i2]=n/2;
   n=n/2;
  }
  for(i3=12;i3>=0;i3--)
  {
   if(a[i3]!=0) {c[i4]=a[i3];i4++;}
  }
  i4=0;
  for(i3=12;i3>=0;i3--)
  {
   if(b[i3]!=0) {d[i4]=b[i3];i4++;}
  }
  for(i3=0;i3<13;i3++)
  {
    if(c[i3]!=d[i3]||(c[i3]==0&&d[i3]==0))
    {
    printf("%d",c[i3-1]);
    break;
   }
  }
 return 0;
}