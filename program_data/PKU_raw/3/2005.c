int main ()
{
    int n,k,b;
    int s=1;
    cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++)
    {
    cin>>a[i-1];
}
    for(int p=1;p<=n;p++)
    {
    b=k-a[p-1];
    for(int q=1;q<=n;q++)
    {
    if(a[q-1]==b&&a[p-1]!=b)
    s++;
}
}
    if(s==1)
    cout<<"no";
    if(s!=1)
    cout<<"yes";
    return 0;
}