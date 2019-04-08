// for each point x, if x has a higher neighbor, set x = -1
// set an extra wall to reduce times of comparison


int main (void)
{
    int i, j, m, n;
    
    scanf ("%i %i", &m, &n);
    int block[m+2][n+2], mark[m+2][n+2];
    //initialize the wall
    for (i = 0; i < n + 2; i++) {
        block[0][i] = -1;
        block[m+1][i] = -1;
    }
    for (i = 1; i < m + 1; i++) {
        block[i][0] = -1;
        block[i][n+1] = -1;
    }
    //read blocks
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++) {
            scanf ("%i", &block[i][j]);
            mark[i][j] = 0;
        }
    for (i = 1; i <=m; i++)
        for (j = 1; j <= n; j++)
            if (mark[i][j] != -1) {
                            if (block[i][j] < block[i][j+1]) {
                                            mark[i][j] = -1;
                                            continue;
                            }
                            else if (block[i][j] > block[i][j+1])
                                 mark[i][j+1] = -1;
                            if (block[i][j] < block[i+1][j]) {
                                            mark[i][j] = -1;
                                            continue;
                            }
                            else if (block[i][j] > block[i+1][j])
                                 mark[i+1][j] = -1;
                            if (block[i][j] < block[i-1][j]) {
                                            mark[i][j] = -1;
                                            continue;
                            }
                            else if (block[i][j] > block[i-1][j])
                                 mark[i-1][j] = -1;
                            if (block[i][j] < block[i][j-1]) {
                                            mark[i][j] = -1;
                                            continue;
                            }
                            else if (block[i][j] > block[i][j-1])
                                 mark[i][j-1] = -1;
                            printf ("%i %i\n", i-1, j-1);
            }
    
    return 0;
}
