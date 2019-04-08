
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m))
    {
        if(n==0) break;
        int i=0,s=0;
        for(i=2;i<=n;i++)
                s=(s+m)%i;
                cout<<s+1<<endl;
    }
    return 0;
}
