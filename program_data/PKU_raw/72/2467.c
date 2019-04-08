int main()
{
    int m,n;
    cin>>m>>n;
    int a[20][20];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||(i>0&&a[i-1][j]<=a[i][j]))
            {
                if(i==m-1||(i<m-1&&a[i+1][j]<=a[i][j]))
                {
                    if(j==0||(j>0&&a[i][j-1]<=a[i][j]))
                    {
                        if(j==n-1||(j<n-1&&a[i][j+1]<=a[i][j]))
                        {
                            cout<<i<<" "<<j<<endl;
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}
                        
                        
                        
