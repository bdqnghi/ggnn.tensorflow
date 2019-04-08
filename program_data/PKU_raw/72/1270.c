int main()
{
    int m,n;
    cin>>m>>n;
    int a[25][25];
    for(int i=1;i<m+1;i++)
    {
            for(int j=1;j<n+1;j++)
            {
                    cin>>a[i][j];
            }
    }
    for(int i=1;i<m+1;i++)
    {
            a[i][0]=a[i][1];
            a[i][n+1]=a[i][n];
    }
    for(int j=1;j<n+1;j++)
    {
            a[0][j]=a[1][j];
            a[m+1][j]=a[m][j];
    }
    for(int i=1;i<m+1;i++)
    {
            for(int j=1;j<n+1;j++)
            {
                    if(a[i][j-1]<=a[i][j] && a[i-1][j]<=a[i][j] && a[i][j+1]<=a[i][j] && a[i+1][j]<=a[i][j])
                    {
                       cout<<i-1<<" "<<j-1<<endl;
                    }
            }
    }
    return 0;
}
