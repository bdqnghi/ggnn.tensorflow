int main()
{
    char s[102][102];int n,m,i,j,k;
    cin>>n;
    cin.get();
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>s[i][j];
    for(i=0;i<=n+1;i++)
    {
        s[i][0]='#';
        s[i][n+1]='#';
    }
    for(j=0;j<=n+1;j++)
    {
        s[0][j]='#';
        s[n+1][j]='#';
    }
    cin>>m;
    for(k=1;k<m;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if (s[i][j]=='@')
                {
                    if(s[i-1][j]=='.')s[i-1][j]='*';
                    if(s[i+1][j]=='.')s[i+1][j]='*';
                    if(s[i][j-1]=='.')s[i][j-1]='*';
                    if(s[i][j+1]=='.')s[i][j+1]='*';
                }
            }
        }
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                if(s[i][j]=='*')s[i][j]='@';
    }
    int flag=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(s[i][j]=='@') flag++;
    cout << flag;
    return 0;
}
