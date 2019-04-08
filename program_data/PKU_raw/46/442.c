int dat[102][102];
_Bool use[102][102];
int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int main()
{
    int n,m;
    int l1,l2,i,j,d;
    scanf("%d%d",&m,&n);
    for (l1=1;l1<=m;l1++)
        for (l2=1;l2<=n;l2++)
            scanf("%d",&dat[l1][l2]);
    for (l1=1;l1<=m;l1++)
        use[l1][0]=use[l1][n+1]=1;
    for (l1=1;l1<=n;l1++)
        use[0][l1]=use[m+1][l1]=1;
    i=1;
    j=1;
    d=0;
    while (1)
        {
        printf("%d\n",dat[i][j]);
        use[i][j]=1;
        for (l1=1;l1<=4;l1++)
            if (use[i+dir[d][0]][j+dir[d][1]]==1)
                d=(d+1)%4;
            else
                {
                    i+=dir[d][0];
                    j+=dir[d][1];
                    break;
                }
        if (l1==5)
            break;
        }
    return 0;
}
