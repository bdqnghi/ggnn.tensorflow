
int main()
{
    int x,y,a[12],b[12];
    cin>>x>>y;
    a[0]=b[0]=1;
    while (x!=1)
    {
        a[a[0]]=x;
        a[0]++;
        x=x/2;
    }
    a[a[0]]=1;

    while (y!=1)
    {
        b[b[0]]=y;
        b[0]++;
        y=y/2;
    }
    b[b[0]]=1;

    int k=0;
    while (a[a[0]-k]==b[b[0]-k]) k++;

    if (a[0]-k+1==0) cout<<a[1];
    else cout<<a[a[0]-k+1];
    return 0;
}
