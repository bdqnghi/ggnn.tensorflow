main()
{
      int n;
      scanf("%d",&n);
      int a[100000],b[100000];
      int i;
      int count=0;
      for (i=0;i<10000000;i++)
      {
          scanf("%d %d",&a[i],&b[i]);
          if (a[i]==0&&b[i]==0)
          {
                               break;
          }
      }
      int k,j;
      k=i-1;
      int count1,count2;
      for (i=0;i<=n-1;i++)
      {
          count1=0;
          count2=0;
          for (j=0;j<=k;j++)
          {
              if (b[j]==i)
              {
                          count1++;
              }
          }
          for (j=0;j<=k;j++)
          {
              if (a[j]==i)
              {
                          count2++;
              }
          }
          if ((count1==n-1)&&(count2==0))
          {
                                     printf("%d\n",i);
                                     count++;
          }
      }
      if (count==0)
      {
                   printf("NOT FOUND\n");
      }
}
