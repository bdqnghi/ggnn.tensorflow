char map[100][100];
int n;
void once()
{
    for(int i=0;i<=n-1;i++)
    for(int j=0;j<=n-1;j++)
    {
        if(map[i][j]=='@')
        {
            if(map[i+1][j]=='.')map[i+1][j]='a';
            if(map[i-1][j]=='.')map[i-1][j]='a';
            if(map[i][j+1]=='.')map[i][j+1]='a';
            if(map[i][j-1]=='.')map[i][j-1]='a';
        }
    }
    for(int i=0;i<=n-1;i++)
    for(int j=0;j<=n-1;j++)
    {
        if(map[i][j]=='a')map[i][j]='@';
    }
}
int main()
{
    int m;
    int sum=0;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    for(int j=0;j<=n-1;j++)
    {
        cin>>map[i][j];
    }
    cin>>m;
    for(int i=1;i<=m-1;i++)
    once();

    for(int i=0;i<=n-1;i++)
    for(int j=0;j<=n-1;j++)
    {
        if(map[i][j]=='@')sum++;
    }
    cout<<sum<<endl;
    return 0;
}
