
int n, m, the_min;
int a[110][110];

void reduce_min(int x, int y, int dx, int dy)
{
    if (x == m || y == m) {
        return;
    }
    if (a[x][y] < the_min) {
        the_min = a[x][y];
    }
    reduce_min(x + dx, y + dy, dx, dy);
    a[x][y] -= the_min;
}

void reduce()
{
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 1; j < m; j++) {
            a[i][j] = a[i][j + 1];
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 1; j < m; j++) {
            a[j][i] = a[j + 1][i];
        }
    }
}

int main() {
    int i, j;
    int t;
    int sum;
    scanf("%d", &n);
    for (t = 0; t < n; t++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        sum = 0;
        for (m = n; m >= 1; m--) {
            for (i = 0; i < 2 * m; i++) {
                the_min = 10000;
                reduce_min((i%m)*(1-i/m),(i%m)*(i/m), i / m, 1 - i / m);
            }
            sum += a[1][1];
            reduce();
        }
        printf("%d\n", sum);
    }
}