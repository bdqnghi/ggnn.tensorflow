int main ()
{
    int n,k;                    //?? 
    int a[10000];
    int b[10000];
    int ans=0;
    cin >>n>>k;
    for (int i=1;i<=n;i++)      //???????????? 
    {
        cin >>a[i];
        b[i]=k-a[i];
    }
    for (int i=1;i<=n;i++)      //?????????? 
    {
        for (int j=1;i<=n&&j!=i;j++)
        {
            if (a[i]==b[j])
            ans=1;
        }
    }
    if (ans==1)                 //?????? 
    cout <<"yes";
    else
    cout <<"no";
    return 0;
}