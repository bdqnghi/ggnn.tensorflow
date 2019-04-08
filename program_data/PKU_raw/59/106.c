

int main()
{
    int n,day,i,j,con[101][101],add[101][101]={0},sum=0;
    char maze[101][101];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0) cin.get();
            maze[i][j]=cin.get();
            if(maze[i][j]=='.') con[i][j]=-1;
            else if(maze[i][j]=='#') con[i][j]=0;
            else if(maze[i][j]=='@') con[i][j]=1;
        }
    }

    cin>>day;
    for(int k=0;k<day-1;k++)
    {

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(con[i][j]==1)
                {
                    if(i>0&&con[i-1][j]==-1) add[i-1][j]=2;
                    if(i<n&&con[i+1][j]==-1) add[i+1][j]=2;
                    if(j>0&&con[i][j-1]==-1) add[i][j-1]=2;
                    if(j<n&&con[i][j+1]==-1) add[i][j+1]=2;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                con[i][j]=con[i][j]+add[i][j];
                add[i][j]=0;
            }
        }

    }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(con[i][j]==1) sum++;
            }
        }
        cout<<sum;
    return 0;
}

