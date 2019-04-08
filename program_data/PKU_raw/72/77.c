int main()
{
    int m,n;
    cin>>m>>n;
    int a[m+2][n+2];
    for(int i=1;i<=m;i++)
    {
            for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<m+2;i++)
    {
    a[i][0]=0;
    a[i][n+1]=0;
    }
    for(int i=0;i<n+2;i++)
    {
            a[0][i]=0;
            a[m+1][i]=0;
    }
    for(int i=1;i<=m;i++)
    {
            for(int j=1;j<=n;j++)
            {
            if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
            cout<<i-1<<' '<<j-1<<endl;
            }                    
    }
}
