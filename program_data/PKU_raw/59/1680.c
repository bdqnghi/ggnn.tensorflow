int main()
{
    int n, f = 0,cnt=0, m;
    char r[102][102][2];
    cin >> n;
    for (int i = 1;i <=n;i++)
    {
        for (int j=1;j<=n;j++)
        cin>>r[i][j][0];
    }
    for (int i =0;i<=n;i++)
    {
        r[0][i][0]='#';
        r[0][i][1]='#';
        r[i+1][0][0]='#';
        r[i+1][0][1]='#';
        r[n+1][i+1][0]='#';
        r[n+1][i+1][1]='#';
        r[i][n+1][0]='#';
        r[i][n+1][1]='#';
    }
    cin >> m;
    for (int i = 1; i<m; i++)
    {
        f=1-f;
        for(int j=1;j<=n;j++)
        {
            for (int k=1;k<=n;k++)
            {
                if (r[j][k][1-f]=='.')
                {
                if (r[j-1][k][1-f]=='@' || r[j+1][k][1-f]=='@'||r[j][k-1][1-f]=='@'||r[j][k+1][1-f]=='@')
                r[j][k][f] = '@';
                else
                r[j][k][f] = '.';
                }
                else
                r[j][k][f] = r[j][k][1-f];
            }
        }
    
    }
    for (int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {
            if (r[i][j][f]=='@')
            cnt++;
    }
    cout<<cnt<<endl;
         

    return 0;
}