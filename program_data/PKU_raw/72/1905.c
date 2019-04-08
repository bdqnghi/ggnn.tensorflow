int main()
{
    int m,n;
    cin>>m>>n;
    int a[30][30];
    for(int i=0;i<30;i++)
    for(int j=0;j<30;j++)
    {a[i][j]=-1;}
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    {cin>>a[i][j];}
    if(a[0][0]>=a[0][1]&&a[0][0]>=a[1][0]) cout<<"0 0"<<endl;
    for(int i=1;i<n;i++)
    {
            if(a[0][i]>=a[0][i+1]&&a[0][i]>=a[0][i-1]&&a[0][i]>=a[1][i])
            cout<<"0 "<<i<<endl;
    }
    for(int i=1;i<m-1;i++)
    for(int j=0;j<n;j++)
    {
            if(j==0)
            {
                    if(a[i][0]>=a[i][1]&&a[i][0]>=a[i-1][0]&&a[i][0]>=a[i+1][0])
                    cout<<i<<" 0"<<endl;
                    }
                    else
                    {
                        if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
                        cout<<i<<" "<<j<<endl;
                        }
                        }
     if(a[m-1][0]>=a[m-1][1]&&a[m-1][0]>=a[m-2][0]&&a[m-1][0]>=a[m-2][1]) cout<<m-1<<" 0"<<endl;                   
    for(int i=1;i<n;i++)
    { if(a[m-1][i]>=a[m-1][i-1]&&a[m-1][i]>=a[m-2][i]&&a[m-1][i]>=a[m-1][i+1])
            cout<<m-1<<" "<<i<<endl;
    }

    return 0;
}

