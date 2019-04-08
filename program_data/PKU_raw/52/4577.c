int main()
{
   int m,n,i;
   cin>>n>>m;
    int a[n];
    for(i=m;i<n;i++)
    cin>>*(a+i);
    for(i=0;i<m;i++)
    cin>>*(a+i);
    cout<<*a;
    for(i=1;i<n;i++)
    cout<<' '<<*(a+i);
    return 0;
}