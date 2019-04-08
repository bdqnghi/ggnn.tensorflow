main()
{
      int N,i,j,m,n,t;
      scanf("%d",&N);
      if(N>4)
      {
             for(i=3;i<=N-2;)
             {                t=0;
                              m=i+2;
                              for(j=2;j<=i/2;j++)
                              {if(i%j==0)break;}
              if(j==i/2+1)
              t=1;
             for(n=2;n<=m/2;n++)
             {
              if(m%n==0)break ;}
               if(n==m/2+1)
               t=t+1;
               if(t==2)
               printf("%d %d\n",i,m);
               i=i+2;
             }
             }
             else
      printf("empty");
      }
      
      