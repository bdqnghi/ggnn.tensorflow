main()
{
      int n,i;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
                       int m,j;
                       scanf("%d",&m);
          int a[1000];
          a[1]=1;
          a[2]=1;
          for(j=3;j<=m;j++)
           a[j]=a[j-1]+a[j-2];
          if(m==1||m==2)
          printf("%d",1);
          else
          printf("%d",a[m]);
          if(i<n)
          printf("\n");


          }
      
      getchar();
      
}