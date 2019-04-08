int main()
{
    int n,i,j,k;             
    cin>>n;
    int a[n+1];
    a[n]=0;              
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    {
        if(a[j]==a[i])
        {
            for(k=j;k<n;k++)
            {
                a[k]=a[k+1];
            }
            n=n-1;
            j=j-1;
        }
    }
    for(i=0;i<n-1;i++)
    cout<<a[i]<<' ';
    if(a[i]!=0)cout<<a[i];
    return 0;
}
