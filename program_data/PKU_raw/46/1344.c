int main()
{
    int m,n,time=0;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }

    for(int i=0;;i++)
    {
        for(int j=i;j<=n-1-i;j++)
        {
            cout<<a[i][j]<<endl;
            time++;
        }
        if(time==m*n)break;

        for(int j=i+1;j<=m-1-i;j++)
        {
            cout<<a[j][n-i-1]<<endl;
            time++;
        }
        if(time==m*n)break;

        for(int j=n-i-2;j>=i;j--)
        {
            cout<<a[m-i-1][j]<<endl;
            time++;
        }
        if(time==m*n)break;

        for(int j=m-i-2;j>=i+1;j--)
        {
            cout<<a[j][i]<<endl;
            time++;
        }
        if(time==m*n)break;
    }
    return 0;
}
