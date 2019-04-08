
int main()
{
    int n,p[102][102],p1[102][102];
    const int dx[4]={1,0,-1,0};
    const int dy[4]={0,1,0,-1};
    for (int i=0;i<=n+1;i++)
        for (int j=0;j<=n+1;j++)
        p[i][j]=-1;//initializer
    char c;
    cin>>n;       
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
        {
            cin>>c;
            if (c=='.') p[i][j]=0;
            else if (c=='@') p[i][j]=1;
        }
    int day;
    cin>>day;
    for (int k=1;k<day;k++)
    {
        for (int i=0;i<=n+1;i++)
            for (int j=0;j<=n+1;j++)
            p1[i][j]=p[i][j]; //p1 temp
        for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++)
            {
                if (p[i][j]==1)
                   for (int t=0;t<4;t++)
                   if (p[i+dx[t]][j+dy[t]]==0) p1[i+dx[t]][j+dy[t]]=1;//4 directions
            }
        for (int i=0;i<=n+1;i++)
            for (int j=0;j<=n+1;j++)
            p[i][j]=p1[i][j];        
    }
    int num=0;
    for (int i=1;i<=n;i++)
       for (int j=1;j<=n;j++)
       if (p[i][j]==1) num++;
    cout<<num;

    return 0;
}
