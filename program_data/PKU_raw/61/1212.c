int main()
{
    int a[20];
    a[1]=a[2]=1;
    int i;
    for(i=3;i<=20;i++)
    {
    a[i]=a[i-1]+a[i-2];
    }
    int n;
    cin>>n;
    int b[n];
    for(i=1;i<=n;i++)
    {
    cin>>b[i];
    }
    for(i=1;i<=n;i++)
    {
    cout<<a[b[i]]<<endl;
    }
}
