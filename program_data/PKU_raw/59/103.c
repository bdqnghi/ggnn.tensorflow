
int main()
{
    int i,j,k,m,n;
    char s[200][200];
    int x,y;
    int use1[200][200],use2[200][200];
    memset(use1,0,sizeof(use1));
    cin >>n;
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
        {
            use1[i][j]=3;
            cin >>s[i][j];
            if (s[i][j]=='#') use1[i][j]=1;
            if (s[i][j]=='@') use1[i][j]=2;
        }
    cin >>m;
    for (i=1;i<m;i++)
    {
        for (j=1;j<=n;j++)
            for (k=1;k<=n;k++)
            use2[j][k]=use1[j][k];
        for (j=1;j<=n;j++)
            for (k=1;k<=n;k++)
            if (use1[j][k]==2)
            {
                if (use1[j+1][k]==3) use2[j+1][k]=2;
                if (use1[j-1][k]==3) use2[j-1][k]=2;
                if (use1[j][k+1]==3) use2[j][k+1]=2;
                if (use1[j][k-1]==3) use2[j][k-1]=2;
            }
        for (j=1;j<=n;j++)
            for (k=1;k<=n;k++) use1[j][k]=use2[j][k];
    }
    m=0;
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
        if (use1[i][j]==2) m++;
    cout <<m<<endl;


    return 0;
}

