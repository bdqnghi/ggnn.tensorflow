
int main(int argc, char* argv[])
{
    int a[100][100];
    int x1, y1, x2, y2, area=0;
    int n, i, j;
    
    /* ??n*n?? */
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    /* ?????? */
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            /* ??????0???????? */
            if (a[i][j] == 0) {
                x1=i;
                y1=j;
                break;
            }
        }
        if (j<n) {
            break;
        }
    }
    /* ?????? */
    for (i=n-1; i>=0; i--) {
        for (j=n-1; j>=0; j--) {
            /* ??????0???????? */
            if (a[i][j] == 0) {
                x2=i;
                y2=j;
                break;
            }
        }
        if (j>=0) {
            break;
        }
    }
    /* ??????????? */
    area=(x2-x1-1)*(y2-y1-1);
    printf("%d", area);
    return 0;
}
