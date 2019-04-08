void main()
{
   int m,n,i,t,a[200];
   scanf("%d %d",&n,&m);
   for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
   for(i=n+1;i<=n+n;i++)
   a[i]=a[i-n];
   for(i=n-m+1;i<=(n+n-m-1);i++)
   printf("%d ",a[i]);
   printf("%d",a[n+n-m]);
}
   
