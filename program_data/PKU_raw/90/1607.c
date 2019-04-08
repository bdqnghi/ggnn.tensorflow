int method(int m,int n);
main()
{
      int t,M,N;
      scanf("%d",&t);
      for(int i=0;i<t;i++)
      {
              scanf("%d %d",&M,&N);
              printf("%d\n",method(M,N));
      }      
    
} 
int method(int m,int n)
{
    if(n==1)
       return 1;
    else if(m<0)
            return 0;
         else if(m==0)
                 return 1;
              else
                 return method(m,n-1)+method(m-n,n);
}