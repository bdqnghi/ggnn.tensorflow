main()
{
      int i=2,l=2,n,m1=0,m2=0,k=0;
      scanf("%d",&n);
      for (i=2;i<=n-2;i++)
      {
          for (l=2;l<=i/2;l++)
          {
              if (i%l==0)
              m1++;
          }
          l=2;
          if (m1==0)
          {
                    for (l=2;l<=(i+2)/2;l++)
                    {
                        if ((i+2)%l==0)
                        m2++;
                    }
                    l=2;
                    if (m2==0)
                    {
                              printf("%d %d\n",i,i+2);
                              k++;
                    }
          }
          m1=0;
          m2=0;
      }
      if (k==0)
      printf("empty\n");
      getchar();
      getchar();
      getchar();
}