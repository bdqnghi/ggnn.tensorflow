int main()
{
    char a[100][100]={0};
    char b[100][100]={0};
    int n,m,i,j,k,flag=1,count;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
    cin>>m;
    for(k=1;k<m;k++)
    {
        flag=0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                if(a[i][j]=='@')
                {
                    if(i+1<n&&a[i+1][j]=='.'){b[i+1][j]='@';flag=1;}
                    if(i-1>=0&&a[i-1][j]=='.'){b[i-1][j]='@';flag=1;}
                    if(j+1<n&&a[i][j+1]=='.'){b[i][j+1]='@';flag=1;}
                    if(j-1>=0&&a[i][j-1]=='.'){b[i][j-1]='@';flag=1;}
                }
            }
        if(flag==1)
        {for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                if(b[i][j]=='@')a[i][j]='@';
            }
        }
        memset(b,0,sizeof(b));
    }
    count=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j]=='@')count++;
            cout<<count;
    return 0;
}
