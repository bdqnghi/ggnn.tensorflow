//  ????????



int main()
{
    int m,n;
    cin>>m>>n;
    int a[m+1][n+1];
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    int min;
    if (m>=n) min=n;
    else min=m;
    for (int i=1;i<=(1+min)/2;i++)
    {
        for (int j=i;j<=n+1-i;j++)
        {
            if (a[i][j]!=-1)
            {
                cout<<a[i][j]<<endl;
                a[i][j]=-1;
            }
        }
        
        for (int j=i+1;j<=m+1-i;j++)
        {
            if (a[j][n+1-i]!=-1)
            {
                cout<<a[j][n+1-i]<<endl;
                a[j][n+1-i]=-1;
            }
        }
        
        for (int j=n-i;j>i;j--)
        {
            if (a[m+1-i][j]!=-1)
            {
                cout<<a[m+1-i][j]<<endl;
                a[m+1-i][j]=-1;
            }
            
        }
        
        for (int j=m+1-i;j>i;j--)
        {
            if (a[j][i]!=-1)
            {
                cout<<a[j][i]<<endl;
                a[j][i]=-1;
            }
        }
    }
    
    return 0;
}