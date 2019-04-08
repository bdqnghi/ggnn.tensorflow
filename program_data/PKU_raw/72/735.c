

int main()
{
    int i,j,m,n,a[20][20];
    cin>>m>>n;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
            if(a[0][0]>=a[0][1]&&a[0][0]>=a[1][0])
              cout<<"0 0"<<endl;
              if(j!=0)
              {
                  for(j=1;j<n-1;j++)
                {
                    if(a[0][j]>=a[1][j]&&a[0][j]>=a[0][j-1]&&a[0][j]>=a[0][j+1])
                    cout<<"0 "<<j<<endl;
                }
              }
              if(a[0][n-1]>=a[0][n-2]&&a[0][n-1]>=a[1][n-1])
                cout<<"0 "<<n-1<<endl;

    for(i=1;i<m-1;i++)
    for(j=0;j<n;j++)
    {

        if(j==0)
        {if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j])
        {cout<<i<<" "<<j;
        cout<<endl;}
        }
        else if(j!=0&&j!=n-1)
        {
        if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j])
        {cout<<i<<" "<<j;
        cout<<endl;}
        }
        else if(j==n-1)
        {
            if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j])
            cout<<i<<" "<<n-1<<endl;
        }
    }
     if(a[m-1][0]>=a[m-1][1]&&a[m-1][0]>=a[m-2][0])
              cout<<m-1<<" 0"<<endl;
              if(j!=0)
              {
                  for(j=1;j<n-1;j++)
                {
                    if(a[m-1][j]>=a[m-2][j]&&a[m-1][j]>=a[m-1][j-1]&&a[m-1][j]>=a[m-1][j+1])
                    cout<<m-1<<" "<<j<<endl;
                }
              }
              if(a[m-1][n-1]>=a[m-1][n-2]&&a[m-1][n-1]>=a[m-2][n-1])
                cout<<m-1<<" "<<n-1<<endl;

    return 0;
}
