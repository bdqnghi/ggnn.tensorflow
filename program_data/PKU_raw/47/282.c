int main()
{
    int a[100]={1,1,1,1};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {cin>>a[i];}
    cout<<a[n-1];
    for(int i=n-1-1;i>=0;i--)
    {cout<<" "<<a[i];}
}