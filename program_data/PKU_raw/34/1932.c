main()
{
      int N,a;
      int odd(int x);
      int even(int x);
      scanf("%d",&N);
      while(N!=1)
      {
           
           if(N%2==1)
           {
                     a=N;
                     N=odd(N);
                     printf("%d*3+1=%d\n",a,N);                     
           }
           else
           {
                     a=N;
                     N=even(N);
                     printf("%d/2=%d\n",a,N);
           }
      }
      printf("End\n");
  
            }
      
int odd(int x)
{
    int z;
    z=3*x+1;
    return z;
    }
    
int even(int x)
{
    int y;
    y=x/2;
    return y;
    }
