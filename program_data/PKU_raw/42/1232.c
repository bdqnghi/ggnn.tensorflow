main()
{
      int n,i,j=0;
      scanf("%d",&n);
      long a[n],k;
      int mark[n];
      for(i=0;i<n;i++)
         scanf("%ld",&a[i]);
      scanf("%ld",&k);
      for(i=0;i<n;i++)
      {
                      if(k!=a[i])
                      {
                              mark[j]=a[i];
                              j++;  
                      }
      }
      for(i=0;i<j-1;i++)
         printf("%ld ",mark[i]);
      printf("%ld",mark[j-1]);
}