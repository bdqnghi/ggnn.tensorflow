
main()
{
      int n;
      scanf("%d",&n);
      int a[n];
      for(int i=0;i<n;i++)   a[i]=0;
      int p,q;
      for(int j=0;;j++)
      {
              scanf("%d %d",&p,&q);
              if(p==0&&q==0) break;
              else
              {
                    
                    a[q]++;
              }
      }
      int flg=0;
      for(int k=0;k<n;k++)
      {
              if(a[k]==n-1)
              {
                      printf("%d",k);
                      flg=1;
              }
      }
      if(flg==0)  printf("NOT FOUND");

}  
      