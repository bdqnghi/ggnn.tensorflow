const int n=6;
long down(long x)
{
     long k,m;
     k=x;
     m=0;
     while(k>0)
     {
        m=m*10;       
        m=m+k%10;
        k=k/10;
        }
     return m;
     }
main()
{
      long i,k,l;
      for(i=1;i<=n;i++)
      {
          l=1;             
          scanf("%d",&k);
          if(k<0)
          {
                 l=-1;
                 k=-k;
                 }
          k=down(k);
          if(l==-1) k=-k;
          printf("%d\n",k);
          }
      getchar();
      getchar();
      }                                       
