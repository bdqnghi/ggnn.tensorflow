
int matrix[101][101];

void transform(int , int);

int main()
{
        int m, n;
        int i, j;
        scanf("%d%d", &m, &n);
        for (i = 1; i <= m ; i++)
                for (j = 1; j <= n; j++) {
                        scanf("%d", &matrix[i][j]);
                }
        transform(m, n);

        return 0;
}

void transform(int m, int n)
{
        int total = m * n;
        int index = 0;
        int dir = 0;
        int x = 0, y = 0;
        int times[4] = {0};

        while (index < total) {
                switch(dir) {
                        case 0:
                                x++;y++;
                                while ( y < n - times[1] ) {
                                        printf("%d\n", matrix[x][y]);
                                        y++;
                                        index++;
                                }
                                break;
                        case 1:
                                while ( x < m - times[2]) {
                                        printf("%d\n", matrix[x][y]);
                                        x++;
                                        index++;
                                }
                                break;
                        case 2:
                                while ( y > times[3] + 1 ) {
                                        printf("%d\n", matrix[x][y]);
                                        y--;
                                        index++;
                                }
                                break;
                        case 3:
                                while ( x > times[0] ) {
                                        printf("%d\n", matrix[x][y]);
                                        x--;
                                        index++;
                                }
                                break;
                        default:
                                break;
                }
                if (total - index == 1) {
                        if (dir == 3) x++, y++;
                        printf("%d\n", matrix[x][y]);
                        index++;
                }
                times[dir]++;
                dir = (dir+1)%4;
        }
}
