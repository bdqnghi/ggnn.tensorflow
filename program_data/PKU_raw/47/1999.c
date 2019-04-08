int main()
{
    int n,a[100],b[100],i;
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];   //?? 
    for (i=0;i<n;i++) b[i]=a[n-i-1];   //?? 
    for (i=0;i<n-1;i++) cout<<b[i]<<' ';
    cout<<b[n-1];   //?? 
    return 0;
}
