int main()
{
    int a[100]={0};
    int n,i;
    cin>>n;
    int *p=a;
    for(i=n-1;i>=0;i--)
    cin>>a[i];
    for(p=a;p<a+n-1;p++)
    cout<<*p<<" ";
    cout<<a[n-1];
    getchar();
    getchar();
    return 0;
}
       
