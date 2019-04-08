int main()
{
    int a,n,dp[100000]={0},f=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a;
        if (dp[a]==0)
          if (f==0) { cout<<a; f++; }
          else cout<<","<<a;
        dp[a]=1;
    }
}
