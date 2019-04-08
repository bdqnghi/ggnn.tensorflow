void main()
{
  int m,n,i;
  int a[100];
  int *p,*p1;
  p=a;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
{
   scanf("%d",p++);
   }
   p1=&a[n-m];
 for(i=n-m;i<n;i++,p1++)
{
printf("%d ",*p1);
}
 p=a;
for(i=0;i<n-m-1;i++,p++)
{
printf("%d ",*p);
}
printf("%d",*p);
}