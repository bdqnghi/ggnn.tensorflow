void main()
{
   int n,m,i,a[100],*p,*q,*f;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   p=a;q=a+n-1;f=a+n/2;
   for(p=a;p<f;p++,q--)
   {m=*p;*p=*q;*q=m;}
   for(i=0;i<n-1;i++)
   printf("%d ",a[i]);
   printf("%d",a[n-1]);
}