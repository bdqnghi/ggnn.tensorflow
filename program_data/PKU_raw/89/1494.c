main()
{
      int i,j,n,k,l,sum,b;
      scanf("%d",&n);
      int a[100000][2];
       for(i=0;i<100000;i++)
      {
          for(j=0;j<2;j++)
          a[i][j]=0;
      }

      for(i=0;;i++)
      {
                   scanf("%d%d",&a[i][0],&a[i][1]);
                   if(a[i][0]==0&&a[i][1]==0)
                   break;
      }
      int c[n];
      for(j=0;j<n;j++)
      c[j]=0;
      for(k=0;k<=i-1;k++)
      {
                    b=a[k][1];
                    c[b]++;
      }
      sum=0;
      for(j=0;j<=n-1;j++)
      {
                        if(c[j]==n-1)
                        {
                             printf("%d",j);
                             sum++;
                        }
      }
      if(sum==0)
      printf("NOT FOUND");
} 
