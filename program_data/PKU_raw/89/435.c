main()
{
      int count=0,non=0;
      int n,l;
      scanf("%d",&n);
      int a[1000000]={0};
      int b[1000000]={0};
      int c[1000000]={0};

      for(int i=0;;i++)
      {
              scanf("%d %d",&a[i],&c[i]);
              l=i;
              if(a[i]==0 && c[i]==0)
              break;
      }
      for(int i=0;i<l;i++)
      b[c[i]]++;
      for(int i=0;i<l;i++)
      {
              if(b[i]==n-1)
              {
                           for(int j=0;j<l;j++)
                           if(a[j]==i)
                           count=1;
              }
              if(b[i]==n-1 && count==0)
              {
              printf("%d",i);
              non=1;
              break;
              }
      }
      if(non==0)
      printf("NOT FOUND");
}