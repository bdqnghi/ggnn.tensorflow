int way=0;
int main()
{
    int apple(int n,int m);
    int t,n,m,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        cout<<apple(n,m)<<endl;
    }
    return 0;
}
int apple(int n,int m)
{
    if(m==1||n==1)
    {
        way=1;
    }
    if(m==n)
    {
        way=apple(n,m-1)+1;
    }
    if(m!=n&&m!=1&&n!=1)
    {
        if(n>m)
        way=apple(n,m-1)+apple(n-m,m);
        else
        way=apple(n,n);
    }
    return way;
}
