int wayx[4]={1,0,0,-1};
int wayy[4]={0,1,-1,0};
int main()
{
    int n;
    cin>>n;
    char a[110][110];
    for(int i=1;i<=n;i++)
    {
            for(int j=1;j<=n;j++)
            {
                    cin>>a[i][j];
            }
    }
    for(int i=0;i<n+2;i++)
    {
            a[i][0]=a[i][n+1]='#';
    }
    for(int j=0;j<n+2;j++)
    {
            a[0][j]=a[n+1][j]='#';
    }
    int m;
    cin>>m;
    for(int d=1;d<m;d++)
    {
            int b[n+2][n+2];
            for(int x=0;x<n+2;x++)
            {
                    for(int y=0;y<n+2;y++)
                    {
                            b[x][y]=0;
                    }
            }
            for(int i=1;i<=n;i++)
            {
                    for(int j=1;j<=n;j++)
                    {
                            if(a[i][j]=='@')
                            {
                                            for(int k=0;k<4;k++)
                                            {
                                                    if(a[i+wayx[k]][j+wayy[k]]=='.')
                                                    {
                                                                                    b[i+wayx[k]][j+wayy[k]]=1;
                                                    }
                                            }
                            }
                    }
            }
            for(int i=0;i<n+2;i++)
            {
                    for(int j=0;j<n+2;j++)
                    {
                            if(b[i][j]==1)
                            {
                                          a[i][j]='@';
                            }
                    }
            }
    }
    int person=0;
    for(int i=0;i<=n+1;i++)
    {
            for(int j=0;j<=n+1;j++)
            {
                    if(a[i][j]=='@')
                    person++;
            }
    }
    cout<<person<<endl;
    return 0;
}
    
