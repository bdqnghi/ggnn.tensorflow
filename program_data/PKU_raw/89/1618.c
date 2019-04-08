main()
{
   int n,i,j,sum=0,a[100000],b[100000],c[10000],d[10000];
   scanf("%d",&n);
   for(i=0;;i++)
      {
       scanf("%d %d",&a[i],&b[i]);
       if (a[i]==0&&b[i]==0)
          break;
      }   
   for(j=0;j<=n-1;j++)
      {
         c[j]=0;
         d[j]=0;
      }   
   for(j=0;j<=i-1;j++)
      {
         c[b[j]]++;
         d[a[j]]++;
      }
   for(i=0;i<=n-1;i++)
      {
         if(c[i]==n-1&&d[i]==0)
           {
            printf("%d",i);
            sum++;
           }
      }
   if (sum==0)
     printf("NOT FOUND");
}   