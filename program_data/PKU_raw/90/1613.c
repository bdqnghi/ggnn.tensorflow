
int way(int m,int n);
int main()
{
    int N,m,n;
    cin>>N;
    for(int i=0;i<N;i++)
    {
            cin>>m>>n;
            cout<<way(m,n)<<endl;
    }
}
int way(int m,int n)
{
    if(n==1)return 1;
    else if(m==n)return way(m,n-1)+1;
    else if(m<n)return way(m,m);
    else return way(m,n-1)+way(m-n,n);
}