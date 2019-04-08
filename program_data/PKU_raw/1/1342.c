

int num;
int dg(int m,int limit);

int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int m; cin>>m;
        num=0;
        dg(m,2);
        cout<<num<<endl;
    }
    return 0;
}
int dg(int m,int limit)
{
    for (int i=limit;i<=m/2;i++)
        if (m%i==0) dg(m/i,i);
    if (m>=limit) num++;
    return 0;
}

