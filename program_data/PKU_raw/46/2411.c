
int main()
{
    int m,n,a[101][101],f[101][101];
    const int dx[4]={0,1,0,-1};
    const int dy[4]={1,0,-1,0};
    cin>>m>>n;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
            cin>>a[i][j];
    for (int i=0; i<=m+1; i++)
        for (int j=0; j<=n+1; j++)
            f[i][j]=1;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
            f[i][j]=0;
    int x=1,y=1,p=0;
    for (int i=1; i<=m*n; i++)
    {
        cout<<a[x][y]<<endl;
        f[x][y]=1;
        if (f[x+dx[p]][y+dy[p]]==0) {x+=dx[p];y+=dy[p];}
        else {p++;if (p==4) p=0;x+=dx[p];y+=dy[p];}
    }
    return 0;
}
