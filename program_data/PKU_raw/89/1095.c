main()
{
      int n,a[100000],b[100000],c[10000],i,j,m;
      scanf("%d",&n);
      for(i=0;;i++)
      {
         scanf("%d %d",&a[i],&b[i]);
         if(a[i]==0&&b[i]==0)
         break;
      }
      m=i;
      for(i=0;i<m;i++)
      {
         for(j=0;j<n;j++)
         {
            if(b[i]==j)
            {
               c[j]++;
               break;
            }
         }
      }
      for(j=0;;j++)
      {
         if(c[j]==n-1)
         {
            printf("%d",j);
            break;
         }
         if(j==n-1)
            printf("NOT FOUND");
      }
      return 0;
}
