int main()
{
    int k,n,a[1000],i=0,j=0,m,t;
    cin>>n>>k;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            m=a[i]+a[j];
            if(m==k) 
              t=1;
        }
    }
    if(t==1) cout<<"yes";
    else cout<<"no";
    return 0;
}
