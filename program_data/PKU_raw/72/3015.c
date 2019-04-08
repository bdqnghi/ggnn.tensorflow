
int main()
{
    int m,n,i,j,a[20][20];
    cin >> m >> n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0&&j==0)
            {
                if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j])
                    cout << i << " " << j <<endl;
            }
            if(i==0&&j<n-1&&j>0)
            {
                if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1])
                    cout << i << " " << j <<endl;
            }
            if(i==0&&j==n-1){
                    if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1])
                cout << i << " " << j <<endl;
            }
            if(i<m-1&&i>0)
            {
                if(j==0)
                {
                    if(a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&a[i][j]>=a[i+1][j])
                        cout << i << " " << j <<endl;
                }
                else if(j==n-1)
                {
                    if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
                        cout << i << " " << j <<endl;
                }
                else
                {
                    if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&a[i][j]>=a[i][j-1]&a[i][j]>=a[i][j+1])
                        cout << i << " " << j <<endl;
                }
            }
            if(i==m-1&&j==0)
            {
                if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])
                    cout <<i << " " << j <<endl;
            }
            if(i==m-1&&j>0&&j<n-1)
            {
                 if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1])
                    cout << i << " " << j <<endl;
            }
        }
    }
     if(a[m-1][n-1]>=a[m-2][n-1]&&a[m-1][n-1]>=a[m-1][n-2])
                cout << m-1 << " " << n-1 <<endl;
           
    return 0;
}