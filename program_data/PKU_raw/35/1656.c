
int main()
{
    int r,c,i,j,k;
    int a[8][8];

    /* ?????? */
    scanf("%d,%d", &r, &c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d",&a[i][j]);
        }
    }

    /* ?????????? */
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            for (k=0; k<c; k++) {
                if(a[i][k] > a[i][j]) {
                    /* ????????? */
                    break;
                }
            }
            if (k<c) {
                continue;
            }
            for (k=0; k<r; k++) {
                if(a[k][j] < a[i][j]) {
                    /* ????????? */
                    break;
                }
            }
            if (k<r) {
                continue;
            }
            /* ???????? */
            printf("%d+%d", i, j);
            return 0;
        }
    }
    /* ?????????????????? */
    printf("No");
    return 0;
}

/* ????????????????? */


int main_e4_2_row()
{
    int r,c,i,j,k;
    int a[8][8];

    /* ?????? */
    scanf("%d,%d", &r, &c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    /* ????? */
    for (i=0; i<r; i++) {
        /* ????? */
        j = 0;
        for (k=1; k<c; k++) {
            if (a[i][j] < a[i][k]) {
                j = k;
            }
        }
        /* ????j????????? */
        for (k=0; k<r; k++) {
            if (a[k][j] < a[i][j]) {
                /* ?????? */
                break;
            }
        }
        if (k==r) {
            /* ???????? */
            printf("%d+%d", i, j);
            return 0;
        }
    }
    /* ?????????????????? */
    printf("No");
    return 0;
}
