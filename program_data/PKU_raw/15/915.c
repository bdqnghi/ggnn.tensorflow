
int p[1001][1001];

int main()
{
    int n;
    int i=0,j=0,leftx,lefty,rightx,righty;
    int flag=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&p[i][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+1<n&&j+1<n&&p[i][j]==0&&p[i+1][j]==0&&p[i][j+1]==0)
            {
                leftx=i;
                lefty=j;
            }
            if(i-1>=0&&j-1>=0&&p[i][j]==0&&p[i-1][j]==0&&p[i][j-1]==0)
            {
                rightx=i;
                righty=j;
                flag=0;
                break;
            }
        }
        if(flag==0)
            break;
    }
    printf("%d\n",(rightx-leftx-1)*(righty-lefty-1));
    getchar();
    getchar();
    return 0;
}
