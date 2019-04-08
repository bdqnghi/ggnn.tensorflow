int main()
{
    int n,b[101]={0},i;
    
    cin>>n;
    int a[20001]={0};
    
    for(i=1;i<=n;i++)
    {
                     cin>>a[i];
                     b[a[i]]=b[a[i]]+1;
    }
    cout<<a[1];
    b[a[1]]=0;
    for(i=2;i<=n;i++)
    {
                     if(b[a[i]]!=0)
                     cout<<" "<<a[i];
                     b[a[i]]=0;
    }
    return 0;
}