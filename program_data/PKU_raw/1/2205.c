
int dp[40000][200]={0};
int main()
{
    int n,i,N;
    int mm( int , int );
    
    cin>>n;
    for(i=1;i<=n;i++)
    {
                     cin>>N;
                     cout<<mm(N,2)<<endl;
                   // if(prime(N)) cout<<"haha";
    }
   
    return 0;
}

int mm( int n, int i)
{
    int sum=1;
    
    if(dp[n][i]>0) return dp[n][i];
    
    
    for(int j=i; j<=sqrt(n);j++)
    {
             if(n%j==0)
             {
                       sum += mm(n/j,j);
             }
    }
    dp[n][i]=sum;
    return sum;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
