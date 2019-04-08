int solve(int,int);
int main()
{
    int i,j,k;
    int t,m,n;
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>m>>n;
        cout<<solve(m,n)<<endl;
    }
    return 0;
}
int solve(int m,int n)
{
    if(m==0 || n==1) return 1;
    else if(m<n) return solve(m,m);
    else
    {
        return (solve(m,n-1)+solve(m-n,n));
    }
}
