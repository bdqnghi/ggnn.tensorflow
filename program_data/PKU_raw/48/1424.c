
int main()
{
    int f[2][15][15];
    int i, j, k, m, n, p, q, t;
    scanf("%d %d", &m, &n);
    memset(f, 0, sizeof(f));
    f[0][5][5] = m;
    p = 0;
    q = 1;
    for(k=1; k<=n; k++)
    {
        for(i=1; i<=9; i++)
            for(j=1; j<=9; j++)
                f[q][i][j] = 0;
        for(i=1; i<=9; i++)
            for(j=1; j<=9; j++)
                if(f[p][i][j]!=0)
                {
                    f[q][i][j] += f[p][i][j]*2;
                    f[q][i-1][j-1] += f[p][i][j];
                    f[q][i-1][j] += f[p][i][j];
                    f[q][i-1][j+1] += f[p][i][j];
                    f[q][i][j-1] += f[p][i][j];
                    f[q][i][j+1] += f[p][i][j];
                    f[q][i+1][j-1] += f[p][i][j];
                    f[q][i+1][j] += f[p][i][j];
                    f[q][i+1][j+1] += f[p][i][j];
                }
        t = p; p = q; q = t;
    }
    for(i=1; i<=9; i++)
    {
        for(j=1; j<9; j++)
            printf("%d ", f[p][i][j]);
        printf("%d\n", f[p][i][9]);
    }
    return 0;
}
