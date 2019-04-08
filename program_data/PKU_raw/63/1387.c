int main()
{
    int z1[101][101];
    int z2[101][101];
    int z3[101][101];
    int m,n,q,i,j,k;
    scanf("%d%d",&m,&q);
    for (i=1;i<=m;i++)
        for (j=1;j<=q;j++)
        scanf("%d",&z1[i][j]);
    scanf("%d%d",&q,&n);
    for (i=1;i<=q;i++)
        for (j=1;j<=n;j++)
        scanf("%d",&z2[i][j]);
    for (i=1;i<=m;i++)
        for (j=1;j<=n;j++)
            {
                          z3[i][j]=0;
                          for (k=1;k<=q;k++)
                              z3[i][j]=z3[i][j]+z1[i][k]*z2[k][j];
            }
    for (i=1;i<=m;i++)
        {
        printf("%d",z3[i][1]);
        for (j=2;j<=n;j++)
        printf(" %d",z3[i][j]);
        printf("\n");
        }
}