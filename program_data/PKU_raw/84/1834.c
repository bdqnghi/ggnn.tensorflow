int main()
{
  int i,m,x,y,z;
  scanf("%d",&m);
  int a[255];
  for (i=1;i<=m;i++)
   scanf("%d",&a[i]);
  x=a[1];y=a[2];
  if (a[2]<a[1]) {z=a[1];a[1]=a[2];a[2]=z;};
  for (i=3;i<=m;i++)
   {
      if (a[i]>x) x=a[i];
      if (x>y) {z=y;y=x;x=z;};
   }
  printf("%d\n%d",y,x);
return 0;
}
