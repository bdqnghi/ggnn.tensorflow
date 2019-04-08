int n;
int a[20000]={0},b[20000]={0};
int main()
{
    int i,j,k=0,g=0,kk=0;
    cin>>n;
    for(i=0;i<n;++i)
    {
                    cin>>a[i];
    }
    for(i=0;i<n;++i)
    {
                    for(j=i+1;j<n;++j)
                    {
                                      if(a[i]==a[j])
                                      {
                                                    a[j]=-1;
                                      }
                    }
    }
    for(i=0;i<n;++i)
    {
                    if(a[i]>=0)
                    {
                               b[k]=a[i];
                               ++k;
                    }
    }
    for(i=0;i<k-1;++i)
    {
                      cout<<b[i]<<" ";
    }
    cout<<b[k-1]<<endl;
    /*
    b[0]=a[0];
    cout<<a[0]<<" ";
    for(i=0;i<n-1;++i)
    {
                    kk=0;
                    //cout<<" ";
                    for(j=0;j<=k;++j)
                    {
                                    if(a[i]==b[j])
                                    {
                                                  kk=1;
                                    }
                    }
                    if(kk) continue;
                    cout<<a[i]<<" ";
                    ++k;
                    b[k]=a[i];
    }
    for(i=0;i<k;++i)
    {
                    if(a[n-1]==b[j]) g=1;
    }
    if(!g) cout<<a[n-1];
    cout<<endl;
    */
    //int stop;
    //cin>>stop;
    return 0;
}
