

int main()
{
    int m, n;
    int a[8][8], max[8], min[8];
    int i, j;
    scanf("%d,%d", &m, &n);
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    for (i=0; i<m; i++) {
        max[i] = a[i][0];
        for (j=1; j<n; j++)
            if (a[i][j] > max[i])
                max[i] = a[i][j];
    }

    for (j=0; j<n; j++) {
        min[j] = a[0][j];
        for (i=1; i<m; i++)
            if (a[i][j] < min[j])
                min[j] = a[i][j];
    }

    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            if (max[i] == min[j]) {
                printf("%d+%d", i, j);
                return 0;
            }
    printf("No");
    
    return 0;
}

