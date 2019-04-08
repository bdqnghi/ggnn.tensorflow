//#define main xmain


int main()
{
    int a[100][100];
    int i, j, k, m, n;
    int min, sum;

    scanf("%d", &m);
    for (k=0; k<m; k++) {
        /* ??? */
        n = m;
        sum = 0;
        /* ??n*n?? */
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        while (n>1) {
            /* ??? */
            for (i=0; i<n; i++) {
                min = a[i][0];
                for (j=1; j<n; j++) {
                    if (a[i][j] < min) {
                        min = a[i][j];
                    }
                }
                for (j=0; j<n; j++) {
                    a[i][j] -= min;
                }
            }
            /* ??? */
            for (j=0; j<n; j++) {
                min = a[0][j];
                for (i=1; i<n; i++) {
                    if (a[i][j] < min) {
                        min = a[i][j];
                    }
                }
                for (i=0; i<n; i++) {
                    a[i][j] -= min;
                }
            }
            /* ??(1,1)?? */
            sum += a[1][1];
            /* ??? */
            for (i=2; i<n; i++) {
                for (j=0; j<n; j++) {
                    a[i-1][j] = a[i][j];
                }
            }
            /* ??? */
            for (j=2; j<n; j++) {
                for (i=0; i<n; i++) {
                    a[i][j-1] = a[i][j];
                }
            }
            /* ??????1 */
            n--;
        }
        /* ???? */
        printf("%d\n", sum);
    }
    return 0;
}



char mn[] = {
    3, 9, 31
};

int xn = 0;

int max_files = sizeof(mn) / sizeof(mn[0]);

char * output_dir = "data";

int rnd(int min, int max) 
{
    return min + ((rand() << 15) | rand()) % (max - min + 1);
}

void xbuild()
{
    int i, j, k, n;
    n = mn[xn];
    printf("%d\n", n);
    for (k=0; k<n; k++) {
        for (i=0; i<n; i++) {
            printf("%d", rnd(1, n*n));
            for (j=1; j<n; j++) {
                printf(" %d", rnd(1, n*n));
            }
            printf("\n");
        }
    }
    xn++;
}
