//int main()

    int f(int n)
    {
        int j=0,m;
        //if(n==2)
        //return 1;
        //else
        
          for(int i=2;i<n;i++)
          {
                m=n%i;
                if(m==0)
                j=j+1;
                
          }
          if(j==0)
          return 1;
          else
          return 0;
        
    }
int main()
{
    int n,h;
    scanf("%d",&n);
    for(int k=2;k<=n/2;k++)
    {
       h=n-k;
       if((f(h)==1)&&(f(k)==1))
       printf("%d %d\n",k,h);
    }
    getchar();
    getchar();
    
}     
                
