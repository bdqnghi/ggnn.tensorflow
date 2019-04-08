main()
{
      int a[101]={0};
      int n,i,now,sign;
      
      scanf("%d",&n);
      sign=0;
      for (i=1;i<=n;i++)
      {
          scanf("%d",&now);
          if (a[now]==0)
          {
              a[now]=1;
              if (sign==1)
                  printf(" ");
              else
                  sign=1;
              printf("%d",now);
          }
      } 
      printf("\n");;
      return 0;      
}
