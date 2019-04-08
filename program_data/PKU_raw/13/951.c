int main()
{
    int n,i,j,k,m=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];                               //????
    for(i=0;i<=n-m;i++)
    {
        for(j=i+1;j<=n-m;j++)
        {
            if(a[j]==a[i])
            {
                m=m+1;                           //??????
                for(k=j;k<=n-m;k++)              //??????????????????
                    a[k]=a[k+1];
                     j=j-1;
             }
        }
    }
    for(i=0;i<n-m-1;i++)
        cout<<a[i]<<" ";
    cout<<a[n-m-1]<<endl;                       //????
    return 0;
}