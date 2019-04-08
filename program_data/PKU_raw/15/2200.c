int main()
{
    int n,i,j,x1,y1,x2,y2;
    cin >> n;
    int s[100][100]={0};
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
            cin>>s[i][j];
    for (i=1;i<=n;i++)
    {
        s[i][0]=255;
        s[i][n+1]=255;
    }
    for (j=1;j<=n;j++)
    {
        s[0][j]=255;
        s[n+1][j]=255;
    }
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
        {
            if (s[i][j]==0&&s[i][j+1]==0&&s[i+1][j]==0)
            {
                x1=i;
                y1=j;
            }
            if (s[i][j]==0&&s[i][j-1]==0&&s[i-1][j]==0)
            {
                x2=i;
                y2=j;
            }
        }
    cout << (x2-x1-1)*(y2-y1-1);
    return 0;
}
