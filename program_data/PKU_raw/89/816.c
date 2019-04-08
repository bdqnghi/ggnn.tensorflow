main()
{
      int i,j,k,n,m=0,l=0,p=0,q=0;
      int a[100000][2];
      scanf("%d",&n);
      scanf("%d %d",&a[0][0],&a[0][1]);
      while (a[m][0]>0||a[m][1]>0)                    //??m? 
      {
            scanf("%d %d",&a[m+1][0],&a[m+1][1]);
            m++;
      }
      for (i=0;i<n;i++)
      {
          l=0; 
          for (j=0;j<m;j++)                           //??????i 
          {
              if (a[j][1]==i)
              l++;
          }
          if (l==n-1)
          {
                     p=0;
                     for (j=0;j<m;j++)               //i?????? 
                     {
                         if (a[j][0]==i)
                         p++;
                     }
                     if (p==0)
                     {
                              printf ("%d\n",i);
                              q++;
                     }
          }
      }
      if (q==0)
      printf("NOT FOUND\n");
      getchar();
      getchar();
}