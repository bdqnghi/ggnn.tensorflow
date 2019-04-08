int main()
{
    for (;;)
    {
        int n,m,sum,dp[301]={0},pos=0;
        cin>>n>>m;
        if ((n==0)&&(m==0)) break;
        for (int i=0;i<(n-1);i++)
        {
            sum=0;
            for (;sum<m;)
            {
                pos++;
                if (pos>n) pos=pos%n;
                if (dp[pos]==0) sum++;
            }
            dp[pos]=1;
        }
        for (int i=1;i<=n;i++)
          if (dp[i]==0) 
          {
            cout<<i<<endl;
            break;
          }
    }
}
