main()
{
      int i,j;
      int a,b,c;
      int n;
      
      scanf("%d",&n);
      int*p=(int*)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
      p[i]=0;
      c=0;
      j=0;
      
      
      for(;;)
      {
             scanf("%d %d",&a,&b);
             if(a==0&&b==0) break;
             else
             {
                 if(b==0)
                 j=j+1;
                 else
                 {
                     i=b;
                     p[i]=p[i]+i;
                 }
             }
      }
      
      
      if(j==n-1)
      {
                printf("0");
                c=1;
      }
      else
      {
          for(i=1;i<n;i++)
          {
                          if(p[i]/i==(n-1))
                          printf("%d",i);
                          c=c+1;
          }
      }
      if(c=0)
      printf("NOT FOUND");
      getchar();
      getchar();
}
                   