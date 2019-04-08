int main()
{
    int a[20][20];
    int m, n;
    int i, j;
    cin>>m;
    cin>>n;
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[j][i];
        }
    }
    for(j=0;j<m;j++)
    {
        if(j==0)
        {
            if(a[0][0]>=a[1][0]&&a[0][0]>=a[0][1])
                cout<<j<<" 0"<<endl;
            for(i=1;i<n-1;i++)
            {
                if(a[0][i]>=a[0][i-1]&&a[0][i]>=a[0][i+1]&&a[0][i]>=a[1][i])
                cout<<j<<" "<<i<<endl;
            }
            if(a[0][n-1]>=a[1][n-1]&&a[0][n-1]>=a[0][n-2])
                cout<<j<<" "<<n-1<<endl;
            continue;
        }
        if(j>0&&j<m-1)
        {
            if(a[j][0]>=a[j+1][0]&&a[j][0]>=a[j][1]&&a[j][0]>=a[j-1][0])
                cout<<j<<" 0"<<endl;
            for(i=1;i<n-1;i++)
            {
                if(a[j][i]>=a[j][i-1]&&a[j][i]>=a[j][i+1]&&a[j][i]>=a[j-1][i]&&a[j][i]>=a[j+1][i])
                cout<<j<<" "<<i<<endl;
            }
            if(a[j][n-1]>=a[j+1][n-1]&&a[j][n-1]>=a[j-1][n-1]&&a[j][n-1]>=a[j][n-2])
                cout<<j<<" "<<n-1<<endl;
            continue;
        }
        if(j==m-1)
        {
            if(a[j][0]>=a[j][1]&&a[j][0]>=a[j-1][0])
                cout<<j<<" 0"<<endl;
            for(i=1;i<n-1;i++)
            {
                if(a[j][i]>=a[j][i-1]&&a[j][i]>=a[j][i+1]&&a[j][i]>=a[j-1][i])
                cout<<j<<" "<<i<<endl;
            }
            if(a[j][n-1]>=a[j-1][n-1]&&a[j][n-1]>=a[j][n-2])
                cout<<j<<" "<<n-1<<endl;
            continue;
        }             
    }
	return 0;
}
