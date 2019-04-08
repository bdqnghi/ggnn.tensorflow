int n,i,j,k,m,ans;
char box[120][120];
char box2[120][120];

int main()
{
    ans=0;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>box[i];
        for (j=n;j>=1;j--) box[i][j]=box[i][j-1];
    }
    cin>>m;
    for (k=1;k<m;k++)
    {
        for (i=1;i<=n;i++)
            for (j=1;j<=n;j++)
                box2[i][j]=box[i][j];
        for (i=1;i<=n;i++)
            for (j=1;j<=n;j++)
                if (box[i][j]=='@')
                {
                    if (box2[i][j-1]=='.') box2[i][j-1]='@';    
                    if (box2[i][j+1]=='.') box2[i][j+1]='@';    
                    if (box2[i-1][j]=='.') box2[i-1][j]='@';    
                    if (box2[i+1][j]=='.') box2[i+1][j]='@';
                }
        for (i=1;i<=n;i++)
            for (j=1;j<=n;j++)
                box[i][j]=box2[i][j];
    }
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
            if (box[i][j]=='@') ans++;    
    cout<<ans<<endl;
    return 0;
}