
int n=0,k=0;

int f(int depth,int a)
{
    if (depth==n) return a;
    if (a%(n-1)==0) return f(depth+1,a*n/(n-1)+k);
    return 0;
}

int main()
{
    int i=1,t=0;
    cin>>n>>k;
    while(true)
    {
        t=f(1,i*n+k);
        if(t!=0)break;
        else i++;
    }
    cout<<t;
    return 0;
}