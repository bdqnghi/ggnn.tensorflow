int main()
{
    int a[200];
    int *p=a;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<n-m;j++)               //??n-m?????? 
    {
            *(p+n)=*p;
            p++;
    }
    for(int k=n-m;k<2*n-m;k++)           //??n-m?????? 
    {
            if(k==2*n-m-1) cout<<a[k];
            else cout<<a[k]<<' ';
    }
    return 0;
}
