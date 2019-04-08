    int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int sz[m+2][n+2];
    for(int i=0;i<m+2;i++)
    {
        for(int k=0;k<n+2;k++)
        {
            sz[i][k]=0;
        }
    }
    for(int i=1;i<m+1;i++)
    {
        for(int k=1;k<n+1;k++)
        {
            scanf("%d",&sz[i][k]);
        }
    }
    int i=1,j=1;
    while(i<m+1&&j<n+1)
    {
        printf("%d\n",sz[i][j]);
        sz[i][j]=0;
        if(sz[i][j+1]!=0&&sz[i][j-1]==0&&sz[i-1][j]==0)
        {
            j++;
        }
        else if(sz[i+1][j]!=0&&sz[i][j+1]==0&&sz[i-1][j]==0)
        {
            i++;
        }
        else if(sz[i+1][j]==0&&sz[i][j-1]!=0&&sz[i][j+1]==0)
        {
            j--;
        }
        else if(sz[i][j-1]==0&&sz[i+1][j]==0&&sz[i-1][j]!=0)
        {
            i--;
        }   
        else if(sz[i][j-1]==0&&sz[i+1][j]==0&&sz[i-1][j]==0&&sz[i][j+1]==0)
        {
            break;
        }
    }
    return 0;
}
