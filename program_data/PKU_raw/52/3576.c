void main()
{
   int m,n,i,a[100],b[100];
   scanf("%d%d",&n,&m);
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<n-m;i++)
   {
      b[i+m]=a[i];
   }
   for(i=n-m;i<n;i++)
   {
      b[i-n+m]=a[i];
   }
   for(i=0;i<n-1;i++)
   {
      printf("%d ",b[i]);
   }
   printf("%d\n",b[n-1]);
}