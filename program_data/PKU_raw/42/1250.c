main()
{
   int i,j,n,k;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
     }
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
     if(a[i]==k)
     {
       for(j=i;j<n-1;j++)
       {
         a[j]=a[j+1];
         }
       n--;
       i--;
       }
     }
     for(i=0;i<n-1;i++)
       printf("%d ",a[i]);
       printf("%d\n",a[n-1]);
   getchar();
   getchar();
   getchar();
   return 0;
}